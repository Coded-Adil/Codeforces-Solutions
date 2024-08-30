#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    string s,t;
    int j=0, k=1;
    cin>>s>>t;
 
    for(int i=0; i<t.size(); i++)
    {
        if(t[i]==s[j])
        {
            k++;
            j++;
        }
    }
    cout<<k<<endl;
    return 0;
}