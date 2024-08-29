#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    long long int a;
    cin>>a;
 
    if(a%2==0)
    {
         cout<<(a/2);
    }
    else
    {
         cout<<(-(a+1)/2);
    }
    return 0;
}