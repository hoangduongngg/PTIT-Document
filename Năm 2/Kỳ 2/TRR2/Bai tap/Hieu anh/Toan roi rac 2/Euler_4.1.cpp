#include<iostream>
#include<stack>
using namespace std;
#define Max 100
class Dothi{
    int n;
    int a[Max][Max];
    public:
    int s;
    void readdata();
    void euler(int u);
};

void Dothi::readdata(){
    cin >> n >> s;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=n; j++)
    cin >> a[i][j];
}

void Dothi::euler(int u){
    stack <int> nganxep, ce;
    nganxep.push(u); // day u vao ngan xep
    while(!nganxep.empty()){
        int s = nganxep.top(), empty=1;
        for(int t=1; t<=n; t++)
            if(a[s][t]==1){
                nganxep.push(t);
                a[s][t] = a[t][s] = 0;
                empty=0;
                break; // lay 1 dinh nen dung lai
            }
            //khong co dinh ke
            if(empty==1){   //dinh s co lap
              nganxep.pop();
              ce.push(s);
        }
    }
    while(!ce.empty()){
        cout << ce.top() << " ";
        ce.pop();
    }
}

int main(){
    Dothi g;
    g.readdata();
    g.euler(g.s);
}