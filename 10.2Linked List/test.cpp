#include<bits/stdc++.h>
#include<stack>
#include<stdlib.h>
void usool()
{ 
   ll n,k,c=0;
   cin>>n>>k;
   set<ll> s1;
   vector<pair<ll,ll> > v;   
   map<ll,ll> m;
   ll a[n];
   ll b[n];
   for(ll i=0;i<n;i++)
    cin>>a[i];
    
   for(ll i=0;i<n;i++)
     cin>>b[i];
     
   for(ll i=0;i<n;i++)
   {
    v.push_back({b[i],a[i]});
    m[a[i]]++;
   }
   sort(v.begin(),v.end());

  ll mn=-1;
  ll s=-1;
  if(m.size()>=k)
  {
      for(auto it:v)
      {
         
           if(s1.count(it.second)==NULL && s!=k-1)
           {
            c+=it.first;
            s++;
           }
            
            s1.insert(it.second); 
            
      }
      cout<<c<<endl;
  }
  else
    cout<<"-1"<<endl;
   
 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      usool();
    }
 
  return 0;
}