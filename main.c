#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()

{ int num=1 ;
    setlocale(LC_ALL,"Portuguese");
    while(num>0){

        printf("\nverifique numero entre 20 e 50: ");
        scanf("%d",&num);
        if (num>=20 && num<=50){
            printf ("numero entre 20 e 50\n ");
        } else{
            printf("numero fora de 20 e 50\n");
        }
    }




    return 0;
}
