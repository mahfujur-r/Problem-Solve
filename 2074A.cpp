#include <bits/stdc++.h>
using namespace std;
int main (){
   int t;cin >> t;
   while (t--)
   {
    int a,b,c,d; cin >> a >> b >> c >>d;
    if(a==b && b==c && c==d) cout << "Yes";
    else cout << "No";
    cout << "\n";
   }
   

    return 0;
}