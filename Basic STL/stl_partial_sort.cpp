// NOTES:
// 0. partial_sort rearranges elements such that the range [first, middle) contains the sorted elements.
// 1. The order of equal elements is not guaranted to be preserved.
// 2. The order of remaining elements is unspecified.


#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> vec = {5,4,6,7,3,2,8,9,1};

    partial_sort(vec.begin(), vec.begin()+4, vec.end());

    for(int elm: vec){
        cout<<elm<<" ";
    }
    cout<<endl;
    return 0;
}