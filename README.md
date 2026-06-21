# UDRMS — University Dormitory & Restaurant Management System

> A desktop application built with **C++ and Qt6** for managing university dormitories, students, rooms, and restaurant services.

---

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
- [Class Architecture](#class-architecture)
- [Technologies Used](#technologies-used)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Exception Handling](#exception-handling)
- [Screenshots](#screenshots)
- [Author](#author)

---

## Overview

UDRMS is a university management system that provides a complete solution for managing student dormitories, rooms, and restaurant services. The system allows administrators to manage students, rooms, dormitories, and restaurant menus through an intuitive graphical interface built with Qt6. All data is managed in memory during the session.

---

## Features

### Dormitory Management
- Add, remove, and modify dormitories
- Password-protected dormitory access
- Track occupied and free rooms
- Manage dormitory capacity and gender

### Student Management
- Add and remove students from dormitories
- Assign students to rooms
- View student information
- Search students by name or ID

### Room Management
- Add and remove rooms from dormitories
- Track room occupancy
- Manage room capacity per floor and corridor

### Restaurant Management
- Display weekly menu (Breakfast, Lunch, Dinner)
- Take meals using student restaurant card
- Recharge student restaurant cards
- Modify weekly menu per day

---

## Project Structure

```
UDRMS/
│
├── Headers/
│   ├── Meal.h
│   ├── Breakfast.h
│   ├── Lunch.h
│   ├── Dinner.h
│   ├── Restaurant.h
│   ├── RestaurantCard.h
│   ├── Room.h
│   ├── Student.h
│   ├── Dormitory.h
│   └── UDRMSException.h
│
├── Sources/
│   ├── Meal.cpp
│   ├── Breakfast.cpp
│   ├── Lunch.cpp
│   ├── Dinner.cpp
│   ├── Restaurant.cpp
│   ├── RestaurantCard.cpp
│   ├── Room.cpp
│   ├── Student.cpp
│   └── Dormitory.cpp
│
├── Forms/
│   ├── mainwindow.ui
│   ├── DormitoryForm.ui
│   ├── DormitoryMng.ui
│   ├── StudentForm.ui
│   ├── RoomForm.ui
│   └── RestaurantForm.ui
│
└── main.cpp
```

---

## Class Architecture

```
QVector<Dormitory*>              (managed in main window)
        ├── QVector<Student*>    (Aggregation)
        │       └── Room*        (Aggregation)
        │       └── RestaurantCard (Composition)
        ├── QVector<Room>        (Composition)
        └── Restaurant           (Composition)
                ├── Breakfast[7]
                ├── Lunch[7]
                └── Dinner[7]

Meal (Abstract Base Class)
    ├── Breakfast
    ├── Lunch
    └── Dinner
```

### Relationships

| Relationship | Type | Description |
|-------------|------|-------------|
| Dormitory → Student | Aggregation | Dormitory hosts students |
| Dormitory → Room | Composition | Rooms belong to dormitory |
| Dormitory → Restaurant | Composition | Restaurant belongs to dormitory |
| Student → Room | Aggregation | Student is assigned to a room |
| Student → RestaurantCard | Composition | Card belongs to student |
| Meal → Breakfast/Lunch/Dinner | Inheritance | Meal is abstract base class |

---

## Technologies Used

| Technology | Version | Purpose |
|-----------|---------|---------|
| C++ | C++17 | Core programming language |
| Qt | 6.x | GUI framework |
| Qt Designer | 6.x | UI design |
| Qt Creator | Latest | IDE |
| MinGW / MSVC | Latest | C++ Compiler |

---

## Prerequisites

Before running this project make sure you have:

- Qt 6.x installed
- Qt Creator IDE
- C++17 compatible compiler (MinGW / MSVC / GCC)
- qmake build system

---

## Installation

**Step 1 — Clone the repository:**
```bash
git clone https://github.com/yourusername/UDRMS.git
cd UDRMS
```

**Step 2 — Open in Qt Creator:**
```
File → Open File or Project
Select UDRMS.pro
Click Open
```

**Step 3 — Configure the project:**
```
Select your Qt kit
Click Configure Project
```

**Step 4 — Build and Run:**
```
Press Ctrl+R
```

---

## Usage

### Main Window
When you launch UDRMS you will see the main dashboard with a list of dormitories and management buttons.

### Adding a Dormitory
```
1. Click "Add Dormitory"
2. Fill in the dormitory details:
   - Name
   - Number of rooms
   - Capacity
   - Password
   - Gender
3. Click "Enter" to save
```

### Managing Students
```
1. Double click on a dormitory
2. Enter dormitory password
3. Click "Manage Students"
4. Add or remove students
```

### Managing Rooms
```
1. Double click on a dormitory
2. Enter dormitory password
3. Click "Manage Rooms"
4. Add or remove rooms
```

### Restaurant Management
```
1. Double click on a dormitory
2. Enter dormitory password
3. Click "Manage Restaurant"
4. Use tabs to:
   - Tab 1: View weekly menu
   - Tab 2: Take a meal
   - Tab 3: Recharge student card
   - Tab 4: Modify weekly menu
```

---

## Exception Handling

The system uses a custom exception class `UDRMSException` that inherits from `std::runtime_error`:

```cpp
class UDRMSException : public std::runtime_error {
public:
    UDRMSException(const QString& msg)
        : std::runtime_error(msg.toStdString()){}
};
```

### Exceptions thrown in the system

| Class | Function | Exception |
|-------|----------|-----------|
| `Dormitory` | `addStudent()` | Dormitory full / null student |
| `Dormitory` | `removeStudent()` | Student not found |
| `Dormitory` | `addRoom()` | No more rooms available |
| `Dormitory` | `removeRoom()` | Room not found |
| `Dormitory` | `setCapacity()` | Invalid capacity |
| `Dormitory` | `setNumRooms()` | Invalid number of rooms |
| `Dormitory` | `setName()` | Empty name |
| `Room` | `addStudent()` | Room full / null student |
| `Room` | `removeStudent()` | Student not found |
| `RestaurantCard` | `takeaBreakfast()` | Insufficient balance |
| `RestaurantCard` | `takeaLunch()` | Insufficient balance |
| `RestaurantCard` | `takeaDinner()` | Insufficient balance |
| `RestaurantCard` | `recharge()` | Invalid amount |

---

## Screenshots

> ![alt text](image.png)
![alt text](image-1.png)
![alt text](image-2.png)
![alt text](image-3.png)
![alt text](image-4.png)
![alt text](image-5.png)
![alt text](image-6.png)
![alt text](image-7.png)
![alt text](image-8.png)
![alt text](image-9.png)
![alt text](image-10.png)
```
mainwindow     → Main dashboard with dormitory list
DormitoryMng   → Dormitory management window
DormitoryForm  → Dormitory details and editing
StudentForm    → Student management window
RoomForm       → Room management window
RestaurantForm → Restaurant management with tabs
```

---

## Author

**Your Name**
- University: ENSIA
- Email: mohamed-temim.lemdaoui@ensia.edu.dz
- GitHub: [@moTemim](https://github.com/moTemim)

---

## License

This project was developed as part of a university course in Object-Oriented Programming with C++ and Qt.

---

> Built with ❤️ using C++ and Qt6
