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
#include<vector>

using namespace std;

int main(){

    vector<vector<int>> Tree;
    int edge, n1, n2;
    cin>>edge;
    Tree.resize(edge);

    for(int i=0;i<edge;++i){
        cin>>n1>>n2;
        Tree[n1].push_back(n2);
    }

    for(const auto &e1: Tree){
        for(const auto &e2: e1){
            cout<<e2;
        }
        cout<<"\n";
    }


    return 0;
}