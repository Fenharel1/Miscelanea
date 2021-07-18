#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int C[MAX+5];

void iniciar_criba(){
    for(int i = 0; i < MAX; i++) C[i] = i;
    C[0] = -1;
    C[1] = -1;
    for(int i = 2; i < MAX; i++)
        if(C[i] == i)
            for(int j = 2*i; j < MAX; j+=i)
                C[j] = i;
}

void factorizar(int X){
    if(X <= 1) return;
    int a = 1;
    int Y = X/C[X];
    while(C[Y] == C[X]){
        a++;
        Y = Y/C[Y];
    }
    factorizar(Y);
    cout << C[X] << " ^ " << a << endl;
}

int main(){
    iniciar_criba();

    factorizar(12838);

    return 0;
}