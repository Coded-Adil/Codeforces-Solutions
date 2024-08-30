#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t,n,m;
    cin>>t;
 
    while(t--)
    {
        cin>>n>>m;
 
        if(n<m)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n==m)
            {
                cout<<"YES"<<endl;
            }
            else if((n-m)%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
 
    }
    
    return 0;
}