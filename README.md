


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
