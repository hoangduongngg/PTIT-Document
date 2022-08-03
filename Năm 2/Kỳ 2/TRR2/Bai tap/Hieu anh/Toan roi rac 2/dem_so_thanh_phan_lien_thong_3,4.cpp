#include<iostream>
#include<queue>
using namespace std;
int n, chuaxet[50], a[50][50];

void Input(){
        cin >> n;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++) cin >> a[i][j];
}

void set(){
    for(int i=0; i<n; i++){
        chuaxet[i]=1;
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=0;
    while(!q.empty()){
        int s=q.front();
        q.pop();
        for(int i=0; i<n; i++)
        if((a[s][i]==1) && (chuaxet[i]==1)){
            chuaxet[i]=0;
            q.push(i);
        }
    }
}

int TPLT(){
    int dem=0;
    for(int i=0; i<n; i++)
    if(chuaxet[i]){
        BFS(i);
        dem++;
    }
    return dem;
}
int main(){
    Input();
    set();
    cout<<TPLT();
    return 0;
}