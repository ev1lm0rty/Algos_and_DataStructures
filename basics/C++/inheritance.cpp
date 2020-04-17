#include<iostream>
using namespace std;

class building
{
  int rooms;
  int floors;
  int area;

  public:
  void setRooms(int num);
  int getRooms();
  void setFloors(int num);
  int getFloors();
  void setArea(int num);
  int getArea();
};

class house : public building
{
  int bedrooms;
  int baths;
  public:
  void setBedrooms(int num);
  int getBedrooms();
  void setBaths(int num);
  int getBaths();
};

class school : public building
{
  int classrooms;
  int offices;
  public:
  void setClassrooms(int num);
  int getClassrooms();
  void setOffices(int num);
  int getOffices();
};

void building::setRooms(int num)
{
  rooms = num;
}

void building::setFloors(int num)
{
  floors = num;
}

void building::setArea(int num)
{
  area = num;
}

int building::getRooms()
{
  return rooms;
}

int building::getFloors()
{
  return floors;
}

int building::getArea()
{
  return area;
}

void house::setBedrooms(int num)
{
  bedrooms = num;
}

void house::setBaths(int num)
{
  baths = num;
}

int house::getBaths()
{
  return baths;
}

int house::getBedrooms()
{
  return bedrooms;
}

void school::setClassrooms(int num)
{
  classrooms = num;
}

void school::setOffices(int num)
{
  offices = num;
}

int school::getClassrooms()
{
  return classrooms;
}

int school::getOffices()
{
  return offices;
}

int main()
{
  house h;
  school s;

  h.setRooms(12);
  h.setFloors(3);
  h.setArea(4500);
  h.setBedrooms(5);
  h.setBaths(3);

  cout << "\nHouse has " << h.getBedrooms() <<" bedrooms" << endl;

  s.setRooms(200);
  s.setClassrooms(180);
  s.setOffices(5);
  s.setArea(25000);

  cout << "School has " << s.getClassrooms() << " classes" << endl;
  cout << "Its area is " << s.getArea() << " acres" << endl;

  return 0;
}
