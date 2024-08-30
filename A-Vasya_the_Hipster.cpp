#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int a, b, x, y;
   cin>>a>>b;
 
   if(a<b)
   {
       x=a;
       y=b-a;
   }
   else
   {
       x=b;
       y=a-b;
   }
 
   y=y/2;
 
   cout<<x<<" "<<y;

    return 0;
}