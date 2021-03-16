// TOPIC: std::set

// Syntax: set<T> name;

// NOTES:
// 1. std::set is an Associative Container that contains a sorted set of unique objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in set then we will have to provide 
//    compare function so that set can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// BOTTOM LINE:
// It store unique elements and they are stored in sorted order (A/D)

#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

int main(){

    set<int> Set = {1,2,3,4,5,5,4,3,2,1};
    for(const auto& e: Set){
        cout<<e<<endl;
    }

    return 0;
}