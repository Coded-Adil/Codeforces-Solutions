#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int x, y, z, n;
    cin>>x;
    cin>>y;
    set<int >sus;
    for(int i=1; i<=y; i++)
    {
       cin>>n;
       sus.insert(n);
    }
    cin>>z;
    for(int i=1; i<=z; i++)
    {
        cin>>n;
        sus.insert(n);
    }
    if (sus.size()==x)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }

    return 0;
}