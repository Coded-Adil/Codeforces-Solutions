#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int a,h,cnt=0;
    cin>>a>>h;
    int arr[a];
    for(int i=0; i<a; i++)
    {
       cin>>arr[i];
       if(arr[i]<=h)
       {
           cnt++;
       }
       else
       {
           cnt=cnt+2;
       }
    }
    cout<<cnt;
    return 0;
}