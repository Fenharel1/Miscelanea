#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

bool criba[MAX+5];

void iniciarCriba(){
    memset(criba, 1, sizeof criba);
    for(int i = 2; i < MAX; i++){
        if(criba[i]==1){
            for(int j = 2*i; j < MAX; j+=i)
                criba[j] = 0;
        }
    }
}

int main(){

    iniciarCriba();
    
    printf("%i\n", criba[12]);
    printf("%i\n", criba[1]);
    printf("%i\n", criba[127]);
    printf("%i\n", criba[123458]);
    printf("%i\n", criba[673]);
    printf("%i\n", criba[117]);
    printf("%i\n", criba[94]);

    return 0;
}