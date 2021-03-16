// TOPIC: Map In C++

// Syntax: map<T1, T2> name;

// NOTES:
// 1. std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 2. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
// 3. It store key value pair in sorted order on the basis of key (assending/decending).
// 4. std::map is generally used in Dictionay type problems.


#include<iostream>
#include<map>
#include<functional>
#include<vector>

using namespace std;

int main() {

    map<string,int> Map;
    Map["Dhoni"] = 77777777;
    Map["Amit"] = 98989878;

    Map.insert(make_pair("Bot", 12345670));

    // Loop through map
    for(auto &el1: Map){
        cout<<el1.first<<" "<<el1.second<<"\n";
    }

    // Access using [] operator
    cout<<Map["Dhoni"]<<"\n";

    return 0;
}