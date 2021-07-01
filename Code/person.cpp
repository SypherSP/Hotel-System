#include "person.h"
#include <string>
#include <iostream>

using namespace std;
namespace Project
{
    Person::Person(string name,string email,string phone_no)
    {
        this->name=name;this->email=email;this->phone_no=phone_no;
    }
    
    void Person::change_email(string email)
    {
        cout<<"Email ID of "<<name<<" changed from "<<this->email<<" to "<<email<<endl;
        this->email=email;
    }

    void Person::change_no(string phone_no)
    {
        cout<<"Phone Number of "<<name<<" changed from "<<this->phone_no<<" to "<<phone_no<<endl;
    }

    string Person::get_name(){
        return this->name;
    }

    string Person::get_email()
    {
        return this->email;
    }

    string Person::get_phone_no()
    {
        return this->phone_no;
    }
}