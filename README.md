# Hotel Reservation System

A console-based Hotel Reservation System developed in C++ 
demonstrating Object-Oriented Programming concepts including 
inheritance, polymorphism, abstraction, file handling, 
exception handling, and STL usage.

---

## Features

### Guest Portal
- Register with username and password
- Login to personal account
- View available rooms with prices
- Book rooms online
- View booking history
- View and pay bills
- Update personal information
- View hotel policies

### Admin Portal
- Secure admin login
- Manage guest accounts
- Manage room inventory
- Handle check-in and check-out
- Apply discounts to bills
- View detailed billing reports
- Manage hotel rules and policies
- View system records

---

## OOP Concepts Implemented

| Concept | Where Used |
|---------|-----------|
| Encapsulation | Private attributes with public getters/setters in all classes |
| Inheritance | Person → Admin, Guest / Room → Single, Double, Suite |
| Runtime Polymorphism | displayInfo() and displayRoomInfo() virtual functions |
| Abstraction | Person and Room are abstract classes |
| Composition | HotelSystem owns Admin, FileManager, Records |
| Aggregation | HotelSystem has Guests, Rooms, Bookings, Bills |
| Friend Functions | generateFinalBill() accessing Booking and Billing |
| Operator Overloading | Room comparison using ==, >, < operators |
| File Handling | Data persistence using text files |
| Exception Handling | Custom HotelException class with try-catch |
| STL Usage | vector<string> in Records class |
| Constructors | Default, Parameterized in all classes |
| Destructors | Virtual destructors with static counter management |

---

## Project Structure
HotelReservationSystem/
│
├── Person.h / Person.cpp ← Abstract base class
├── Admin.h / Admin.cpp ← Inherits Person
├── Guest.h / Guest.cpp ← Inherits Person
├── Room.h / Room.cpp ← Abstract base class
├── SingleRoom.h / SingleRoom.cpp ← Inherits Room
├── DoubleRoom.h / DoubleRoom.cpp ← Inherits Room
├── SuiteRoom.h / SuiteRoom.cpp ← Inherits Room
├── Booking.h / Booking.cpp ← Room reservation
├── Billing.h / Billing.cpp ← Bill management
├── Records.h / Records.cpp ← Activity logs (STL)
├── FileManager.h / FileManager.cpp ← File operations
├── Rules.h / Rules.cpp ← Hotel rules
├── HotelException.h / .cpp ← Exception handling
├── HotelSystem.h / HotelSystem.cpp ← Main controller
└── main.cpp ← Entry point

text


---

## Data Files (Auto Generated)
guests.txt ← Guest accounts
rooms.txt ← Room inventory
bookings.txt ← Booking records
bills.txt ← Billing records
rules.txt ← Hotel rules

text


---

## Default Rooms

| Room | Type | Price/Night |
|------|------|------------|
| 101, 102 | Single | Rs. 2,000 |
| 103 | Single | Rs. 2,500 |
| 201, 202 | Double | Rs. 4,000 |
| 203 | Double | Rs. 4,500 |
| 301 | Suite | Rs. 10,000 |
| 302 | Suite | Rs. 12,000 |

---

## Default Admin Credentials
Username: admin
Password: 1234

text


---

## How to Run

### Using Dev-C++
1. Open Dev-C++
2. File → New → Project → Console Application
3. Add all .h and .cpp files to the project
4. Execute → Compile and Run

### Using g++ (Command Line)
```bash
g++ main.cpp Person.cpp Admin.cpp Guest.cpp Room.cpp \
SingleRoom.cpp DoubleRoom.cpp SuiteRoom.cpp \
Booking.cpp Billing.cpp Records.cpp FileManager.cpp \
Rules.cpp HotelException.cpp HotelSystem.cpp \
-o HotelReservation

./HotelReservation
How to Use
As a Guest
Select Guest Register and create an account
Select Guest Login with your credentials
View available rooms and prices
Book a room by selecting type and room number
View your bill and make payment
As Admin
Select Admin Login
Enter username: admin, password: 1234
Manage guests, rooms, bookings, and billing
Technical Details
Language: C++
Interface: Console based
Storage: Text files
Compiler: GCC / TDM-GCC 64-bit
IDE: Dev-C++ / VS Code / CLion
Academic Context
This project was developed as a Complex Computing Activity (CCA)
for the Object Oriented Programming course, demonstrating
practical application of OOP principles in a real-world scenario.

License
This project is for educational purposes only.

Authors
[Member 1 Name] - [Roll Number]
[Member 2 Name] - [Roll Number]
[Member 3 Name] - [Roll Number]
