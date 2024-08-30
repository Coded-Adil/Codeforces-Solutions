#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
      int n, m, r;
      cin>>n>>m;
 
      int mul = n*m;
 
      if(mul%2==0)
      {
          r = mul/2;
          cout<<r;
      }
      else
      {
          r = (mul-1)/2;
          cout<<r;
      }
      return 0;
}