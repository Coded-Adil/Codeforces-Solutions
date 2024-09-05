#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    long long w,x,y,z;
    cin>>w>>x>>y>>z;
 
    long abc = (w+x+y+z)/3;
 
    if(w!=abc)
    {
        cout<<abc-w<<" ";
    }
    if(x!=abc)
    {
        cout<<abc-x<<" ";
    }
    if(y!=abc)
    {
        cout<<abc-y<<" ";
    }
    if(z!=abc)
    {
        cout<<abc-z<<" ";
    }
    
    return 0;
}