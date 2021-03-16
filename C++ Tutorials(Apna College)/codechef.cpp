#include<bits/stdc++.h>
using namespace std;


int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--)
    {
        int d, c, a1,a2,a3,b1,b2,b3,s1,s2,total1, total2;
        cin >> d >> c;

        cin>>a1>>a2>>a3;
        cin>>b1>>b2>>b3;

        int day1 = a1+a2+a3;
        int day2 = b1+b2+b3;

        if (day1 >= 150){
            s1= day1 +d;
        }
        else{
            s1=day1;
        }
        if (day2 >= 150){
            s2= day2 +d;
        }
        else{
            s2=day2;
        }

        total1 = s1+s2;
        total2 = day2+day1+c;

        if (total2<total1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }


       
    }



	
	return 0;
}