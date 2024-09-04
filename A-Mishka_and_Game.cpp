#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t;
    cin>>t;
 
    int a,b,sum=0;
 
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            sum++;
        }
        else if(a<b)
        {
            sum--;
        }
    }
    if(sum==0)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(sum>0)
    {
        cout<<"Mishka"<<endl;
    }
    else
    {
        cout<<"Chris"<<endl;
    }
    
    return 0;
}