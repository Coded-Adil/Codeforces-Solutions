#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t;
    cin>>t;
 
    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
 
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<b-(a%b)<<endl;
        }
    }
    
    return 0;
}