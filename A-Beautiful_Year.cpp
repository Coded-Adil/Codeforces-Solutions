#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int a;
    cin>>a;

    for( ; ; )
    {
        a++;
        int x=a/1000;
        int y=(a/100)%10;
        int z=(a/10)%10;
        int w=a%10;

        if(x!=y && x!=z && x!=w && y!=z && y!=w && z!=w)
        {
            break;
        }
    }
    cout<<a;
    
    return 0;
}