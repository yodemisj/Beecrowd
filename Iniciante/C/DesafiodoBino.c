#include <stdio.h>

int main(){
    int qtd, i,valor;
    int m2,m3,m4,m5;
    m2 = 0;
    m3 = 0;
    m4 = 0;
    m5 = 0;
    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&valor);
        if(valor%2 == 0){
            m2++;
        }
        if(valor%3 == 0){
            m3++;
        }
        if(valor%4 == 0){
            m4++;
        }
        if(valor%5 == 0){
            m5++;
        }
    }

    printf("%d Multiplo(s) de 2\n",m2);
    printf("%d Multiplo(s) de 3\n",m3);
    printf("%d Multiplo(s) de 4\n",m4);
    printf("%d Multiplo(s) de 5\n",m5);

    return 0;
}