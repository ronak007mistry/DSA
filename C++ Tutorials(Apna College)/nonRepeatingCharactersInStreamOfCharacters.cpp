#include<bits/stdc++.h>


// string Solution::solve(string A){
//     string res="";
//     unordered_map<char, int> m;
//     queue<char> q;
//     for(int i=0; i<A.size(); i++){
//         q.push(A[i]);
//         m[A[i]]++;
//         while(!q.empty()){
//             if(m[q.front()]>1){
//                 q.pop();
//             }
//             else{
//                 res.push_back(q.front());
//                 break;
//             }
//         }
//         if(q.empty()) res.push_back('#');
//     }
//     return res;
// }




// string Solution::solve(string A)
// {
//     string ans="";
//     if(A.size()==0)
//         return ans;
//     queue<char> q;
//     int ar[26] = { 0 };
//     for (int i = 0;i<A.size(); i++)
//         {
//         q.push(A[i]);
//         ar[A[i] - 'a']++;
//         while (!q.empty()) {
//             if (ar[q.front() - 'a'] > 1)
//                 q.pop();
//             else
//             {
//                 ans=ans+q.front();
//                 break;
//             }
//         }
    
//         if (q.empty()) 
//             ans=ans+'#'; 
//     }
//     return ans;
// }