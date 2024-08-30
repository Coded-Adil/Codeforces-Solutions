#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t, sum = 0;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int p;
        cin >> p;
        sum = sum + p;
    }
    cout << fixed << setprecision(12) << sum * 1.0 / t << endl;
    return 0;
}