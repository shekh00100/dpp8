#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,n) for(int i=a;i<n;++i)
#define freq(i,a,n) for(int i=a;i<=n;++i)
#define pb   push_back
const int M=1e9+7;
#define elif else if
#define str string
#define input(data,x) data x ;cin>>x;
#define vec(x,l) vector<x> l;
#define input_1(data,x,y) data x,y ;cin>>x>>y;
#define input_2(data,x,y,z) data x,y,z ;cin>>x>>y>>z;
#define output(arr) for(auto x:arr){cout<<x<<" ";}
#define vecinput(n) for(int i=0;i<n;++i){int x;cin>>x;v.pb(x)};
typedef long long ll ;

int power(int a,int b){
//Fast exponetiation
    int ans=1;
    while(b>0){
        if(b&1){
            //odd
            ans*=a;
        }
        a*=a;
        b>>=1;//right shift
    }
    return ans;
}
vector<int> ans;
void DFSRec(vector<int> adj[],int s,vector<bool> &vi ){
        if(!vi[s]){
            ans.push_back(s);
        }
        vi[s]=true;
        
        for(auto i:adj[s]){
            if(!vi[i]){
                DFSRec(adj,i,vi);
            }
        }
    }
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> visitedArray(V,false);
        for(int i=0;i<V;++i){
            DFSRec(adj,i,visitedArray);
        }
        return ans;
        
    }

void solve(){
    
        int v,e;
        vector<int> adj[e];
        for(int i=0;i<e;++i){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    vector<int> ans=dfsOfGraph(v,adj);
}

int main(){
    int t=1; 
    // cin>>t;
    while(t-->0){
        solve();
        cout<<"\n";
    }
    return 0;
}