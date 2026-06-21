QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Breakfast.cpp \
    Dinner.cpp \
    DormCheckPasswd.cpp \
    Dormitory.cpp \
    DormitoryForm.cpp \
    DormitoryMng.cpp \
    Lunch.cpp \
    Meal.cpp \
    Restaurant.cpp \
    RestaurantCard.cpp \
    RestaurantForm.cpp \
    Room.cpp \
    RoomForm.cpp \
    RoomInfo.cpp \
    Student.cpp \
    StudentForm.cpp \
    StudentInfo.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Breakfast.h \
    Dinner.h \
    DormCheckPasswd.h \
    Dormitory.h \
    DormitoryForm.h \
    DormitoryMng.h \
    Lunch.h \
    Meal.h \
    Restaurant.h \
    RestaurantCard.h \
    RestaurantForm.h \
    Room.h \
    RoomForm.h \
    RoomInfo.h \
    Student.h \
    StudentForm.h \
    StudentInfo.h \
    UDRMSException.h \
    mainwindow.h

FORMS += \
    DormCheckPasswd.ui \
    DormitoryForm.ui \
    DormitoryMng.ui \
    RestaurantForm.ui \
    RoomForm.ui \
    RoomInfo.ui \
    StudentForm.ui \
    StudentInfo.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
