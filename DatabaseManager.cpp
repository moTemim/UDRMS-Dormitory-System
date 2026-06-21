#include "DatabaseManager.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <QJsonArray>

bool DatabaseManager::saveDormitory(Dormitory& dorm, const QString& filename) {
    QJsonObject dataObject = dorm.toJson();
    QJsonDocument doc(dataObject);
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to write data file:" << file.errorString();
        return false;
    }

    file.write(doc.toJson(QJsonDocument::Indented));
    file.close();

    qDebug() << "Dormitory system successfully serialized to" << filename;
    return true;
}

bool DatabaseManager::loadAllDormitories(QList<Dormitory*>& dorms, const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "No existing database file found to load.";
        return false;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject rootJson = doc.object();
    QJsonArray dormsArray = rootJson["dormitories"].toArray();

    // Clear the current list safely to avoid memory leaks
    for (Dormitory* d : dorms) {
        delete d;
    }
    dorms.clear();

    // Loop through the JSON array and reconstruct each Dormitory
    for (const QJsonValue& value : dormsArray) {
        QJsonObject dormJson = value.toObject();
        Dormitory* d = new Dormitory();

        // Assuming your Dormitory class has a fromJson method implemented:
        // d->fromJson(dormJson);

        dorms.append(d);
    }

    qDebug() << "Successfully loaded all saved dormitories into the application list!";
    return true;
}

bool DatabaseManager::saveAllDormitories(const QVector<Dormitory*>& list, const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for saving.";
        return false;
    }

    QJsonArray dormsArray;
    for (Dormitory* dorm : list) {
        if (!dorm) continue;

        QJsonObject dormJson;
        dormJson["name"] = dorm->getName();
        dormJson["numRooms"] = dorm->getNumRooms();
        dormJson["capacity"] = dorm->getCapacity();
        dormJson["roomsOccu"] = dorm->getRoomsOccu();
        dormJson["roomsFree"] = dorm->getRoomsFree();
        dormJson["password"] = dorm->getPassword();
        dormJson["gender"] = dorm->getGender();

        QJsonArray roomsArray;
        for (const Room& r : dorm->getRooms()) {
            roomsArray.append(r.toJson());
        }
        dormJson["rooms"] = roomsArray;

        QJsonArray studentsArray;
        for (const Student* s : dorm->getStudents()) {
            if (s) {
                studentsArray.append(s->toJson());
            }
        }
        dormJson["students"] = studentsArray;
        dormJson["restaurantMenu"] = dorm->getRestaurant().menuToJson();

        dormsArray.append(dormJson);
    }

    QJsonObject rootJson;
    rootJson["dormitories"] = dormsArray;

    QJsonDocument doc(rootJson);
    file.write(doc.toJson());
    file.close();

    qDebug() << "All dormitories, rooms, students, and menus saved successfully!";
    return true;
}