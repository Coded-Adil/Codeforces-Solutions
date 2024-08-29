#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    // https://codeforces.com/problemset/problem/71/A
    int n;
    cin>>n;
    
    int police = 0;
    int crime = 0;
 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
 
        if (x>0)
        {
            police+=x;
        }
        else
        {
            if (police<1)
            {
                ++crime;
            }
            else
            {
                --police;
            }
        }
    }
 
    cout<<crime;
    return 0;
}