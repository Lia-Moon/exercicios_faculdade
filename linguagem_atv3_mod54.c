#include <stdio.h>
#include <stdlib.h>

void validarMeta(int dia1[3][3], int dia2[3][3]){
    //Começar a impementar aqui
    int meta;
    int i = 0, j = 0;
    int matrizTotal[3][3];
    
    printf("\nDigite a meta por setor\n");
    scanf("%d", &meta);
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrizTotal[i][j] = dia1[i][j] + dia2[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matrizTotal[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matrizTotal[i][j] >= meta){
                printf("Setor %d de %d alcançou a meta\n", i+1, j+1);
            }
        }
    }
}

int main() {
    int dia1[3][3];
    int dia2[3][3];
    int i, j = 0;
    
    //Leitura da matriz no primeiro dia
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o total de pessoas do setor %d de %d\n", (i+1), (j+1));
            scanf("%d", &dia1[i][j]);
        }
    }
    //Leitura da matriz no segundo dia
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o total de pessoas do setor %d de %d\n", (i+1), (j+1));
            scanf("%d", &dia2[i][j]);
        }
    }
    //Ler a meta, somar matriz, escrever matriz total, escrever setores que alcançaram a meta
    validarMeta(dia1, dia2);
}
