// NOTES:
// 0. std::pair is a struct template that provides a way to store two heterogeneous objects as a single unit.
// 1. map, multimap, unorder_map, unorder_multimap can use pair to insert data into their structures.
// Syntax : pair<T1, T2> obj;


#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

void print(pair<int,int>& obj) {cout<<obj.first<<" "<<obj.second<<endl;}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    
    pair<int,int> obj(10,20);
    print(obj);

    pair<int,int> obj1 = make_pair(10,20);
    print(obj1);

    vector<pair<string, int16_t>> list;
    list.push_back(make_pair("Ronak", 22));
    list.push_back(make_pair("Dhoni", 42));
    list.push_back(pair<string,int>("Bhupendar", 66));
    list.push_back(pair<string,int>("Inayat", 36));
    for(auto& elm: list){
        cout<<elm.first<<" "<<elm.second<<endl;
    }

    return 0;
}
