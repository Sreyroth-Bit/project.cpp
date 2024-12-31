#include<iostream>
using namespace std;


class Employee{
    private:
      int id;
      string name;
      string position;

    public:
      Employee(int id, const string& name, const string& position)
      :id(id), name(name), position(position){}
      int getId() const {return id;}
      string getName()const{return name;}
      string getPosition()const{return name;}
      void setName(const string& newName){name = newName;}
      void setPosition (const string& newPosition){position = newPosition;}
      void display()const{
        cout<<"setw(10)"<<id<<endl;
        cout<<"setw(20)"<<name<<endl;
        cout<<"setw(20)"<<position<<endl;
      }
};