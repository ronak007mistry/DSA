// NOTES:
// 0. STL algorithms library defines functions for a variety of purposes (e.g. searching, sorting, counting, manipulating) 
// 1. Algorithms are applied to range of elements.


#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>


using namespace std;

// 1. sort with integral datatypes

// int main()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     vector<int> vec{4,3,5,2,6,1,7,8,2,9};
//     sort(vec.begin(), vec.end());

//     for(auto& elm: vec){
//         cout<<elm<<" ";
//     }
//     cout<<endl;
    
    
//     return 0;
// }


// 2. sort with user defined datatypes

// class Point{
//     public:
//     int x;
//     int y;
//     Point(int x=0, int y=0):x{x}, y{y} {}
//     bool operator < (const Point& p1) {
//         return (x+y)<(p1.x+p1.y);
//     }

// };

// int main()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     vector<Point> vec{{1,2}, {3,1}, {0,1}};
//     sort(vec.begin(), vec.end());   
//     for(auto& elm:vec){
//         cout<<elm.x<<" "<<elm.y<<endl; 
//     }
    
    
//     return 0;
// }


// 3. sort using a function object

// struct
// {
//     bool operator()(int a, int b) const
//     {
//         return a < b;
//     }
// } customLess;


// int main()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     vector<int> vec{5,4,6,7,3,2,8,9,1};
//     sort(vec.begin(), vec.end(), customLess);   
//     for(auto& elm:vec){
//         cout<<elm<<" "; 
//     }
    
    
//     return 0;
// }


// 4. sort using lambda expression


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> vec{5,4,6,7,3,2,8,9,1};
    sort(vec.begin(), vec.end(), [](int a, int b) {return a<b; });   
    for(auto& elm:vec){
        cout<<elm<<" "; 
    }
    
    
    return 0;
}
