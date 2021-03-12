
#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int a=10;
    int *aptr = &a;

    cout<<*aptr<<endl; // value of a
    cout<<aptr<<endl; // address of a
    *aptr = 20;
    cout<<a<<endl;


    int arr[] = {10,20,30};
    cout<<*arr<<endl;

    int *ptr = arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        
    }


    
    return 0;
}