/*
struct UnionFind
{   
    vec1 par,size;
    UnionFind(int n):par(n,-1),size(n,1) {

    }
    //根
    int root(int q){
        if(par[q]==-1) return q;
        else {
            return par[q]=root(par[q]);
        }
    }
    //A,Bは同一か?
    bool issame(int a,int b){
        return root(a)==root(b);
    }
    //Aを含むやつとBを含むやつくっっける
    bool unite(int a,int b){
        a=root(a);
        b=root(b);
        if(a==b) return false;
        if(size[a]<size[b]){
            swap(a,b);
        }
        par[b]=a;
        size[a]+=size[b];
        return true;
    }
    //Qを含むやつの大きさ
    int w_size(int q){ return size[root(q)]; }
};
*/