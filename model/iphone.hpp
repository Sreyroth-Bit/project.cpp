#include<iostream>

#pragma once

using namespace std;

class IPhone{
    private:
        // fields
        int id;
        string model;
        double price;
        
    public:
    // constructor
        IPhone(int id, string model, double price){
            this->id = id;
            this->model = model;
            this->price = price;
        }
        IPhone(){}
        int getId(){ return id; }
        string getModel(){ return model; }
        double getPrice(){ return price; }
        //method
};
