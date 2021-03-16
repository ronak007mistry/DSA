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

    nth_element(vec.begin(), vec.begin() + vec.size()/2, vec.end());
    cout<<"The median is "<<vec[vec.size()/2]<<"\n";

    nth_element(vec.begin(), vec.begin() + 1, vec.end(), greater<int>());
    cout<<"The second largest element is "<<vec[1]<<"\n";


    return 0;
}