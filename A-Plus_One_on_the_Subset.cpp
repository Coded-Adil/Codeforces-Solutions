#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
      int t;
      cin>>t;
 
      while(t--)
      {
            int n;
            cin>>n;
 
            int mini=INT_MAX;
            int maxi=INT_MIN;
 
            for(int i=0; i<n; i++)
            {
                    int x;
                    cin>>x;
                    mini=min(mini,x);
                    maxi=max(maxi,x);
            }
 
      cout<<maxi-mini<<endl;
      }
      return 0;
}