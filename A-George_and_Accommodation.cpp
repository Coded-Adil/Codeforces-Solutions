#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int a, b, t, cnt = 0;
    cin>>t;
 
    while(t--)
    {
        cin>>a>>b;
 
        if(b-a >= 2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}