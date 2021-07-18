#include <cstdio>
using namespace std;

// bitmask con desplazamiento de bits
void subsets(int a[], int n){ // n <= 20
    for(int i = 0; i<(1<<n); i++){      
        printf("Subconjunto %4d: ", i);
        for(int j = 0; j < n; j++)
            if(i&(1<<j))
                printf("%-5d",a[j]);
        printf("\n");
    }
}

int main(){

    int n;
    printf("n: ");
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    subsets(a, n);

    return 0;
}