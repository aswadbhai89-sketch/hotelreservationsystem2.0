#include "room.h"

int Room::totalRooms = 0;

Room::Room() : roomNumber(0), roomType(""), pricePerNight(0.0), isAvailable(true)
{
}

Room::Room(int no, string type, double price) : roomNumber(no), roomType(type), pricePerNight(price), isAvailable(true)
{
    totalRooms++;
}

void Room::setRoomNumber(int no)
{
    roomNumber = no;
}

int Room::getRoomNumber() const
{
    return roomNumber;
}

void Room::setPricePerNight(double price)
{
    pricePerNight = price;
}

double Room::getPricePerNight() const
{
    return pricePerNight;
}

void Room::setAvailability(bool status)
{
    isAvailable = status;
}

bool Room::getAvailability() const
{
    return isAvailable;
}

bool Room::checkAvailability() const
{
    return isAvailable;
}

bool Room::operator==(Room& r)
{
    return roomNumber == r.roomNumber;
}

bool Room::operator>(Room& r)
{
    return roomNumber > r.roomNumber;
}

bool Room::operator<(Room& r)
{
    return roomNumber < r.roomNumber;
}

int Room::getTotalRooms()
{
    return totalRooms;
}

Room::~Room()
{
    if (roomNumber != 0) {
        totalRooms--;
    }
}
