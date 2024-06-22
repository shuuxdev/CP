        #include <dbg.h>
        #include <bits/stdc++.h>
        #ifdef LOCAL
        #include "LOCAL/debug.h"
        #else
        #define debug(...)
        #endif
        using namespace std;

        #define FOR(i,a,b) for (int i = (a); i < (b); ++i)
        #define F0R(i,a) FOR(i,0,a)
        #define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
        #define R0F(i,a) ROF(i,0,a)
        #define rep(a) F0R(_,a)
        #define each(a,x) for (auto& a: x)
         
        #define sz(x) int((x).size())
        #define bg(x) begin(x)
        #define all(x) bg(x), end(x)
        #define rall(x) x.rbegin(), x.rend() 
        #define sor(x) sort(all(x)) 
        #define rsz resize
        #define ins insert 
        #define pb push_back
        #define eb emplace_back
        #define ft front()
        #define bk back()
         
        #define lb lower_bound
        #define ub upper_bound
         void dbg_io(){
            freopen("test_in.txt", "r",stdin);
            freopen("output.txt", "w",stdout);
            
        }
        void io(){
            #ifndef ONLINE_JUDGE
            freopen("input.txt", "r",stdin);
            freopen("output.txt", "w",stdout);
            #endif        
        }
        size_t mem = 0;
        void* operator new (size_t size){mem+=size;return malloc(size);} 

        using ull = unsigned long long;
        using ll = long long;
         
        void solve() {    
            int n;
            cin >> n;
            
     
        }
        int main() {
            io();
            ios::sync_with_stdio(0);
            int t;
            cin >> t;
            FOR(i,1,t+1)
                solve();
            return 0;
        }