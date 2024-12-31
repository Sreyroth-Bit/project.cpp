#include <iostream>
using namespace std;
class Person{
    private:
       int id;
       string name;
       int age;
    public:
       void setId(int id){
        this->id=id;
       }
       int getId(){
        return this->id;
       }
       void setName(string name){
        this->name=name;
       }
       string getName(){
        return this->name;
       }
       void setAge(int age){
        this->age=age;
       }
       int getAge(){
        return age;
       }
};
int main(){
    Person person1;
    person1.setId(1);
    person1.setName("Dara");
    person1.setAge(23);
    cout<<"Person ID: "<<person1.getId()<<endl;
    cout<<"Person Name: "<<person1.getName()<<endl;
    cout<<"Person age: "<<person1.getAge()<<endl;
    return 0;
}
