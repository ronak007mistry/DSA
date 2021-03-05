// TOPIC: std::vector      

// NOTES:
// 1. std::vector is a sequence container and also known as Dynamic Array or Array List.
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIERS:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

#include<iostream>
#include<vector>

using namespace std;

int main(){

    // Declare
    vector<int> arr1;

    // Initialization
    vector<int> arr2 {5, 20}; 
    vector<int> arr3 = {1,2,3,4,5};   // initializer list
    vector<int> arr4 {1,2,3,4,5};     // uniform initialization

    // Accessing elements
    arr3[3] = 10;
    arr3.at(3) = 10;

    vector<int> vec;
    // vec.reserve(1000);
    for(int i=0;i<32;++i){
        vec.push_back(i);
        cout<< vec.size()<<" "<< vec.capacity()<< "\n";
    }


    return 0;
}