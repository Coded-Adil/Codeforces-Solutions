#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t, sum=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
 
        sum = sum+n;
    }
    if(sum>=1)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
    return 0;
}