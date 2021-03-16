// NOTES:
// 0. Checks if the elements in range [first, last) are sorted in non-descending order.

// TYPES:
// 1. Can check integral data types
// 2. Can check user defined data types
// 3. Can check using a function object
// 4. Can check using lambda expression


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> vec = {5,4,6,7,3,2,8,9,1};

    sort(vec.begin(), vec.end(), greater<int>());

    for(auto elm: vec){
        cout<<elm<<" ";
    }
    cout<<endl;
    cout<<is_sorted(vec.begin(), vec.end(), greater<int>());
    return 0;
}