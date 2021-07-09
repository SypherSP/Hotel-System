#ifndef __TABLE
#define __TABLE
#include<bits/stdc++.h>
using namespace std;
#include "customer.h"
namespace Project
{   
    class Waiter;
    class Table
    {   
        int table_no;
        int table_status;
        Waiter waiter;
        Customer cust;
        int seats;
        friend class Restaurant_manager;
        friend class Waiter;
        public:
        Table();
        void check_table();
        void add_table();

    };
   vector<Table>tables;  
}

#endif