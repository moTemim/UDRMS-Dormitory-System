#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include "Dormitory.h"

class DatabaseManager {
public:
    static bool saveDormitory(Dormitory& dorm, const QString& filename = "dorm_database.json");
    static bool loadDormitory(Dormitory& dorm, const QString& filename = "dorm_database.json");
    static bool loadAllDormitories(QVector<Dormitory*>& list, const QString& filename = "all_dormitories.json");
    static bool saveAllDormitories(const QVector<Dormitory*>& list, const QString& filename = "all_dormitories.json");

};

#endif // DATABASEMANAGER_H
