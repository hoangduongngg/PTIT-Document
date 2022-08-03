#include <iostream>
#define MAX 10
using namespace std;
class Dothi{
    int n;
    int A[MAX][MAX];
    public:
    bool chuaxet[MAX];
    void readdata();
    void init();
    void recursiveDFS(int u);
};
void Dothi::readdata(){
    cout << "\nNhap so dinh cua do thi n= ";
    cin  >> n;
    cout << "\nNhap ma tran ke:\n";
    for(int u=1; u<=n; u++)
    for(int v=1; v<=n; v++) cin >> A[u][v];
}
void Dothi::init(){
    for(int i=1; i<=n; i++) chuaxet[i]=true;
}
void Dothi::recursiveDFS(int u){
    for(int i=1; i<=n; i++){
        cout << "   " << u;               //tham dinh u
        chuaxet[u]=false;
        for(int v=1; v<=n; v++){
            if( A[u][v]==1 && chuaxet[v]==true ) recursiveDFS(v);
        }
}
}
int main(){
    Dothi  G;
    G.readdata();
    G.init();
    cout << "\n";
    G.recursiveDFS(1);
}