#include<bits/stdc++.h>

using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main(){

   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int testcases;
   cin>>testcases;

   while(testcases--){
        ll a,b;
        set<pair<ll,ll>> kingq,queenq;
        cin>>a>>b;
        ll kx,ky,qx,qy;
        cin>>kx>>ky;    
        cin>>qx>>qy;

        kingq.insert({kx-a,ky-b});
        kingq.insert({kx-a,ky+b});
        kingq.insert({kx+a,ky-b});
        kingq.insert({kx+a,ky+b});
        kingq.insert({kx-b,ky-a});
        kingq.insert({kx-b,ky+a});
        kingq.insert({kx+b,ky-a});
        kingq.insert({kx+b,ky+a});


        queenq.insert({qx-a,qy-b});
        queenq.insert({qx-a,qy+b});
        queenq.insert({qx+a,qy-b});
        queenq.insert({qx+a,qy+b});
        queenq.insert({qx-b,qy-a});
        queenq.insert({qx-b,qy+a});
        queenq.insert({qx+b,qy-a});
        queenq.insert({qx+b,qy+a});

        // find no of same location in both maps
        ll count = 0;
            for(auto i:kingq){
                for(auto j:queenq){
                    if(i.first == j.first && i.second == j.second){
                        count++;
                    }
                }
            }

    


        cout<<count<<endl;












   }
   return 0;
}