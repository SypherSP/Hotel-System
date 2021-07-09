#include<bits/stdc++.h>
#include "table.h"
using namespace std;
 
namespace Project
{
    int Table::counter=1;
    Table::Table()
    {
        table_no=0;
        seats=0;
        table_status=false;
    }
    Table::Table(int seats)
    {
        table_no=counter++;
        seats=4;
        table_status=false;
    }
    bool Table::check_table()
    {
        return table_status;
    }

    int Table::getTno()
    {
        return table_no;
    }

    void Table::changeStatus()
    {
        table_status=!table_status;
    }
}
