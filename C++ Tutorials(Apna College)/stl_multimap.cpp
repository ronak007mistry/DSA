// TOPIC: Multimap In C++

// Syntax: multimap<T1, T2> name;

// NOTES:
// 1. Multimap is an associative container that contains a sorted list of key-value pairs, 
//    while permitting multiple entries with the same key.
// 2. It store key value pair in sorted order on the basis of key (assending/decending).
// 3. Data structure used in multimap is not defined by standard, but red-black tree is assumed by most of the people.
// 4. Lookup: count, find, contains, equal_range, lower_bound, upper_bound
// 5. We dont have at() and [] functions to get element like we had in std::map.


#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {

    multimap<char, int> Multimap;
    Multimap.insert(pair<char, int>('a', 1));
    Multimap.insert(make_pair('a', 2));
    Multimap.insert(make_pair('a', 3));
    Multimap.insert(make_pair('b', 4));
    Multimap.insert(make_pair('b', 5));

    cout<<Multimap.count('a')<<endl;
    cout<<Multimap.count('b')<<endl;
    cout<<endl;

    for(auto& ele: Multimap){
        cout<<ele.first<<" "<<ele.second<<"\n";
    }
    cout<<endl;

    // Get all the pairs of given key
    auto range = Multimap.equal_range('a');
    for(auto it = range.first; it!= range.second; ++it){
        cout<<it->first<<" "<<it->second<<"\n";
    }
    cout<<endl;

    auto range1 = Multimap.lower_bound('a');
    auto range2 = Multimap.upper_bound('a');
    cout<<range1->first<<" "<<range1->second<<"\n";
    cout<<range2->first<<" "<<range2->second<<"\n";

    return 0;
}