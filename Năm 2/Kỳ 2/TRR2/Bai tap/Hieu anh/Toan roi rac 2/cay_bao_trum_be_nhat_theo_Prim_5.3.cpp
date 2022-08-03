#include <iostream>
#define MAX 100
using namespace std;
struct edg{
    int dau, cuoi, h;
};
class dothi{
    int n, c[MAX][MAX], ne, atree[MAX][MAX];
    edg graph[MAX], tree[MAX];
    public:
    int s;
    bool chuaxet[MAX];
    void readdata();
    void init();
    void treedfs(int u);
    void bubblesort();
    void prim(int s);
};
void dothi::readdata(){
    cin >> n >> s;
    ne=0;
    for(int i=1; i<=n; i++)
        for(int j=1;j<=n; j++){
            cin >> c[j][j];
            if((c[i][j]!=0) && (i<j)){
                ne++;
                graph[ne].dau=i;
                graph[ne].cuoi=j;
                graph[ne].h=c[i][j];  //h la trong so de tao ra ma tran trong so
            }
        }
}
void dothi:: init(){
    for(int i=1; i<=n; i++)
    chuaxet[i]=true;
}
void dothi::treedfs(int u){  // duyet tren cay
    chuaxet[u]=false;
    for(int i=1; i<=n; i++)
        if((atree[u][i]==1)&& (chuaxet[i]==true))
            treedfs(i);
}
void dothi::bubblesort(){
    for(int i=1; i<=ne; i++)
    for(int j=ne; j>=i+1; j--)
    if(graph[j].h < graph[j-1].h)
    swap(graph[j], graph[j-1]);
}

void dothi::prim(int s){
    int dH=0, net=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            atree[i][j]=0;
        bubblesort();
        while(net!=n-1){
            for(int i=1; i<=ne; i++){   // Moi lan lap while thi deu phai tim trong toan bo tap canh, lay canh be nhat, 1 dau thuoc Vh, 1 dau thuoc V
                init();
                treedfs(s);
                int dau=graph[i].dau, cuoi=graph[i].cuoi;
                if(chuaxet[dau]!=chuaxet[cuoi]){  // Canh i thoa man, bo sung vao cay khung be nhat
                    net++;
                    tree[net].dau=dau;
                    tree[net].cuoi=cuoi;
                    dH+=graph[i].h;
                    atree[dau][cuoi]=atree[cuoi][dau]=1;
                    break;  // moi lan chi lay 1 canh
                }
            }
        }
        cout <<"dH = "<< dH << endl;
        for(int i=1; i<=net; i++)
        cout << tree[i].dau <<"   "<< tree[i].cuoi << endl;
}
int main(){
    dothi  g;
    g.readdata();
    g.prim(g.s);
}



















