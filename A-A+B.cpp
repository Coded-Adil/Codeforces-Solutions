#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t;
    cin>>t;
 
    int a,b,sum;
 
    while(t--)
    {
        cin>>a>>b;
        sum = a+b;
        cout<<sum<<endl;
    }
    
    return 0;
}