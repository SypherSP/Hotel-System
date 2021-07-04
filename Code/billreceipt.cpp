#include "billreceipt.h"
#include "order.h"
#include <bits/stdc++.h>
using namespace std;
namespace Project
{
    void Billreceipt::show_bill(int order_id)
    {
        cout << "your order id is " << order_id << endl;
        int total_cost = 0;
        cout << "items you ordered and their price: " << endl;
        vector<pair<string, int>> temp = order_list[order_id].items_ordered;
        for (int i = 0; i < temp.size(); i++)
        {
            cout << i + 1 << ". " << temp[i].first << " " << temp[i].second << endl;
            total_cost += (temp[i].second);
        }
        cout << "cost: " << total_cost << endl;
        cout << "total tax: " << total_cost / 10 << endl;
        cout << "Total cost: " << total_cost + total_cost / 10 << endl;
        cout << "thank you!" << endl;
    }
}
