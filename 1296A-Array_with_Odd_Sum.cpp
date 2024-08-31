#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t;
    cin>>t;
 
 
    while(t--)
    {
        int x;
        cin>>x;
 
        int sum = 0;
        int oddflag = 0;
        int evenflag = 0;
 
        for(int j=0; j<x;j++)
        {
            int n;
            cin>>n;
 
            if(n%2==0)
            {
                evenflag = 1;
            }
            else
            {
                oddflag = 1;
            }
 
            sum += n;
 
        }
 
        if((sum%2!=0) || (oddflag && evenflag))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}