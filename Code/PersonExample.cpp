#include<iostream>
#include "Person.h"

using namespace std;
using Project::Person;
int main(){
    Person p=Person("Shashwat Pandey","sypher.sp@gmail.com","9051799110");
    cout<<p.get_name()<<endl;
    return 0;
}