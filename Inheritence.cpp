#include<iostream>
#include<string>
using namespace std;
class person    //parent class
{
public:
    string name;
    int age;

    // person(string name,int age){
    //   this->name = name;
    //   this->age = age;
    // }
    person()
    {
        cout<<"parent constructor..\n"<<endl;

    }
};
class student:public person    //child class
{
public:
    int rollno; //inherit name and age from parent class
    student()
    {
        cout<<"child constructor..\n"<<endl;
    }


    void get_info()
    {
        cout << "Name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "rollno:" << rollno << endl;
    }
};

int main()
{
    student s1;
    s1.name = "Tanjim";
    s1.age = 23;
    s1.rollno = 1234;
    s1.get_info();

    return 0;
}
