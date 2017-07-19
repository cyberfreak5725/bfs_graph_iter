# include <bits/stdc++.h>

using namespace std;
vector <int> adj[1000];
bool visited[10001]={false};
void bfs(int s)
{
     queue <int> q;
     q.push(s);
     
     while(!q.empty())
     {
         s=q.front();
           q.pop();
           
           cout<<s<<" ";
           visited[s]=true;
           
           for(int i=0;i<adj[s].size();i++)
           {
               if(visited[adj[s][i]]==false)
               {
                   visited[adj[s][i]]=true;
                   q.push(adj[s][i]);
               }
           }
     }
}
int main()
{
    int node,edge;
    
    cin>>node>>edge;
    
    for(int i=0;i<edge;i++)
    {
        
        int x,y;
        
        cin>>x>>y;
        
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    int root;
    cin>>root;
    
    bfs(root);
    return 0;
}
