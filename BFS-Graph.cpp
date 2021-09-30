#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

int main()
{
    for(int i=0;i<N;i++)
    {
        vis[i]=0;
    }
    int n,m;
    cin>>n>>m;
    
    int x,y;
    // graph input (jitni edges he utne time loop chalayo aur kaam khatam)
for(int i=0;i<m;i++)
{
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}

// BFS is implemented using queue
queue<int> q;
q.push(1);
vis[1]=true;
while(!q.empty())
{
    int node = q.front();
    q.pop();
    cout<<node<<endl;

    vector<int> :: iterator it;
    for(it = adj[node].begin();it!=adj[node].end();it++)
    {
        if(!vis[*it])
        {
            vis[*it]=1;
            q.push(*it);
            
        }
    }
     
}
 cout<<endl;
    return 0;
}