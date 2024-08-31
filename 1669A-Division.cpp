#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t,a;
    cin>>t;
 
    while(t--)
    {
        cin>>a;
 
        if(a>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(a>=1600 && a<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(a>=1400 && a<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(a<=1399)
        {
            cout<<"Division 4"<<endl;
        }
    }
    
    return 0;
}