    //https://codeforces.com/contest/1443/problem/C
    /*    MOAZZAM07    */
    

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define NL "\n"
#define N 1000000007
const int MOD = 1e9 + 7;
const int INF = 1e9;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void solve(){
        
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    std::vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    int t=0;
    int i=0;
    for(i=n-1;i>=0;i--){
        if(v[i].first>=v[i].second+t){
            t+=v[i].second;
        }
        else break;
    }
    
    if(i<0){
        cout<<t<<endl;
    }
    else cout<<max(t,v[i].first)<<endl;

}

signed main(){
    fastio();
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int tt=1;
    cin >> tt;
    while(tt--){
           
        solve();
           
    }
}