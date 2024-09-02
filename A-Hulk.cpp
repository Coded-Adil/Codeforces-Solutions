#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int n;
    cin >> n;
 
    for(int i=1; i<=n; i++)
    {
        if(i == 1)
        {
            cout<<"I hate ";
        }
        else if(i%2 != 0)
        {
            cout<<"that I hate ";
        }
        else
        {
            cout<<"that I love ";
        }
    }
    cout<<"it"<<endl;
    
    return 0;
}