#ifndef __TABLE
#define __TABLE
#include<bits/stdc++.h>
using namespace std;
namespace Project
{   
    class Table
    {   private:
            int table_no;
            bool table_status;
            int seats;
            friend class Restaurant_manager;
            friend class Waiter;
            static int counter;

        public:
            Table();
            Table(int);
            int getTno();
            bool check_table();
            void changeStatus();
    };
}

#endif