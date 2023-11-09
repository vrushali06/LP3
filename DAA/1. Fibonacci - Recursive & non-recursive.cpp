#include <iostream>
#include<vector>
using namespace std;

int solveRecur(int n)
{
    if(n<0)
     return 0;
    
    if(n==0||n==1)
     return n;
     
    int ans=solveRecur(n-1)+solveRecur(n-2);
    return ans;
}

void solveItr(int n)
{
 vector<int> v;
 v.push_back(0);
 v.push_back(1);
 
 for(int i=2;i<n;i++)
 {
     int sum=v[i-1]+v[i-2];
     v.push_back(sum);
 }
 
 for(auto val:v)
  cout<<val<<" ";
  
  cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    
    solveItr(n);
    
    for(int i=0;i<n;i++)
   { 
       cout<<solveRecur(i)<<" ";
   }

    return 0;
}
