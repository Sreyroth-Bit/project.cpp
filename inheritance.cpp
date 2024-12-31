#include<iostream>
using namespace std;

class Person{
    public:
      int id;
      string name;
      int age;
      void speak(string title){
        cout<<title<<"is speaking\n";
    }
};
class Teacher: public Person{};
class Student: private Person{};
int main(){
    Teacher teacher;
    Student student;
    teacher.id =12;
    teacher.speak("Teacher");

}