#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t;
    cin>>t;
 
    int h,m,x,y;
 
    for(int i=0; i<t; i++)
    {
        cin>>h>>m;
 
        h=h*60;
        x=h+m;
        y=1440-x;
        cout <<y<<endl;
    }
    
    return 0;
}