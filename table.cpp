#include<bits/stdc++.h>
#include "table.h"
using namespace std;
 
namespace Project
{
    void Table::check_table()
    {
        cout<<"enter the table number: ";
        int n;
        cin>>n;
        if(tables[n].table_status) cout<<"table is booked!"<<endl;
        else cout<<"table is available!"<<endl;
    }
    void Table::add_table()
    {  
        Table a;
        cout<<"adding new table..."<<endl;
        tables.push_back(a);
        cout<<"new table added!"<<endl;
    }
}
