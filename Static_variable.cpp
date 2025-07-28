#include<iostream>
#include<string>
using namespace std;
void fun(){
    static int x = 0;   //initial statement -1 run
    cout<<"X:"<<x<<endl;
    x++;
};

int main(){
    fun();
    fun();
    fun();
    return 0;
}
