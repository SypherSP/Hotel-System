#ifndef __ORDER
#define __ORDER
#include <bits/stdc++.h>
#include "waiter.h"
#include "table.h"
#include "menu.h"
#include "billreceipt.h"
using namespace std;

namespace Project
{
    class Order
    {   
        friend class Billreceipt;
        public:
        Waiter w;
        Table t;
        vector<pair<string,int>>items_ordered;
    };
    vector<Order>order_list;
}

#endif