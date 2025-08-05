#include<iostream>
#include<string>
using namespace std;
class student
{
private:
    string name;
    int id;
    float cgpa;
public:
    void setName(string n)
    {
        name = n;
    }
    void setId(int i)
    {
        id = i;
    }
    void setCgpa(float c)
    {
        cgpa = c;
    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
    float getCgpa()
    {
        return cgpa;
    }

    bool isOutstanding()
    {
        return cgpa >= 3.5;
    }
};
int main()
{
    student s1;
    s1.setName("Tanjim");
    s1.setId(688);
    s1.setCgpa(3.31);

    cout<<"Student name is: "<<s1.getName()<<endl;
    cout<<"Student Id is: "<<s1.getId()<<endl;
    cout<<"Student cgpa is: "<<s1.getCgpa()<<endl;

    return 0;
}
