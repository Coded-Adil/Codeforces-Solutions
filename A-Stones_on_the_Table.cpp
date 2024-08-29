#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t, tmp=0;
    cin >> t;
 
    string s;
    cin >> s;
 
    for (int i=0; i<s.size()-1; i++)
    {
        if (s[i]==s[i+1])
            tmp++;
    }
 
    cout << tmp;
 

    return 0;
}