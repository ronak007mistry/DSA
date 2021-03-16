// NOTES:
// 0. std::unordered_multiset is an associative container that contains set of possibly non-unique objects.
// 1. Search, insertion, and removal have average constant-time complexity.
// 2. Internally, the elements are organized into buckets.
// 3. It uses hashing to insert elements into buckets. 
// 4. This allows fast access to individual elements, because after computing the hash of the value it refers to 
//    the exact bucket the element is placed into.

// WHY UNORDERED_MULTISET
// 0. maintain a collection of non-uniqe items with fast insertion and removal.


#include <iostream>
#include <unordered_set>


using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    unordered_multiset<int> umset = {4,1,3,2,9,4,3,2,9,8,10};
    auto search = umset.find(2);
    if(search != umset.end()){
        cout<<"Fount "<<(*search)<<"\n";
    }
    else{
        cout<<"Not Fount \n";
    }
    for(auto& elm: umset){
        cout<<elm<<" ";
    }
    cout<<endl;
    cout<<umset.count(4)<<endl;
    cout<<umset.count(3)<<endl;
    cout<<umset.count(1)<<endl;
    
    
    return 0;
}
