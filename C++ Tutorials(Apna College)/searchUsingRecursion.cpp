#include <iostream>
using namespace std;

int firstOcuurence(int arr[], int n, int i, int key){

    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return firstOcuurence(arr,n,i+1,key);
}

int lastOcuurence(int arr[], int n, int i, int key){

    if(i==n){
        return -1;
    }

    int restArr = lastOcuurence(arr, n, i+1, key);
    if(restArr != -1){
        return restArr;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}



int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {4,2,1,2,5,2,7};

    cout<<firstOcuurence(arr,7,0,2)<<endl;
    cout<<lastOcuurence(arr,7,0,2)<<endl;


    return 0;
}