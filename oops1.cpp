#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    string branch;

    Student(string name , int rollno,string branch){
        this->name=name;
        this->rollno=rollno;
        this->branch=branch;
    }


};

int main(){
    Student* s=new Student("Rajat",87,"IT");
    cout<<s->name<<endl;
    cout<<s->rollno<<endl;
    cout<<s->branch<<endl;
}