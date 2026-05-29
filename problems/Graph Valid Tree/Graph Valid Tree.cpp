class DSU{
    public:
    vector<int>rank,parent;
    DSU(int n){
        parent.resize(n+1);
        rank.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i]=i;
            rank[i]=0;
        }
    }
    int find(int x){
        if(x==parent[x])return x;
        return parent[x]= find(parent[x]);
    }
    void UNION(int x,int y){
        int x_parent=find(x);
        int y_parent=find(y);
        if(x_parent==y_parent)return ;
        if(rank[x_parent]>rank[y_parent]){
            parent[y_parent]=x_parent;
        }else if(rank[x_parent]<rank[y_parent]){
            parent[x_parent]=y_parent;
        }else {
            parent[y_parent]=x_parent;
            rank[x_parent]++;
        }
    }
};
class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1)return false;
        DSU dsu(n);
        for(auto&e:edges){
            int u=e[0];
            int v=e[1];

            if(dsu.find(u)==dsu.find(v)){
                return false;
            }else {
                dsu.UNION(u,v);
            }
        }
        return true;
    }
};
