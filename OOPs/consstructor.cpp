#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int age;
    string name;
    //default consructor
    student(){
        this->age=20;
       this-> name="random";
    }

    //parameterized constructor
    student(int age, string name){
        this->age=age;
        this->name=name;
    }
    //copy consturctor
    student (student &a){
        this->age=a.age;
        this->name=a.name;

    }

};
int main(){

    student *sanjay=new student();
    student *mandar=new student(23,"mandar");
    student *vinay=mandar;

   cout<<sanjay->age<<"-"<<sanjay->name<<endl;
   cout<<mandar->age<<"-"<<mandar->name<<endl;
   cout<<vinay->age<<"-"<<vinay->name<<endl;
    return 0;
}