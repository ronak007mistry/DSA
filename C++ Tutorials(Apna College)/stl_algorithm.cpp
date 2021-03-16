// NOTES:
// 0. STL algorithms library defines functions for a variety of purposes (e.g. searching, sorting, counting, manipulating) 
// 1. Algorithms are applied to range of elements.


#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> vec{4,3,5,2,6,1};
    vector<int>::iterator it = find(vec.begin(), vec.end(), 4);
    // or we can use auto => auto it

    if(it == vec.end()){
        cout<<"Not found\n";
    }
    else{
        cout<<"Found\n";
    }
    
    
    return 0;
}
