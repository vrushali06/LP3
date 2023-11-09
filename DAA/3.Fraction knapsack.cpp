#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b)
{
    double frac1=(double)a.first/a.second;
    double frac2=(double)b.first/b.second;
    return (frac1>frac2);
}

int main()
{
   int n;
   cin>>n;
   
   vector<pair<int,int>> v(n);
   for(int i=0;i<n;i++)
    cin>>v[i].first>>v[i].second;
    
    sort(v.begin(),v.end(),compare);
    
    int capacity;
    cin>>capacity;
    
    double ans=0;
    
    for(int i=0;i<n;i++)
    {    
        if(capacity>=v[i].second) //we can add whole item as capacity constraint matches
        {
            ans+=v[i].first;
            capacity-=v[i].second;
            continue;
        }
        
        //we cannot at whole item add fraction
        double frac=(double) v[i].first/v[i].second;
        ans+= frac*capacity;
        break;
    }
  
    cout<<ans<<endl;
    
    return 0;
}

