#include <stdio.h>
#include <stdlib.h>

// Uma exposição em um centro de convenção precisa contabilizar os visitantes por setores. 
// Esses setores são representados através de uma matriz quadrada de dimensão 3. 
// Além disso, é preciso saber no final da exposição o total de visitantes por setor, 
// apresentando estas informação através de uma matriz quadrada, e os setores que
// conseguiram atingir uma meta definida.

/* 1- Fazer leitura de um valor de meta.
2- Somar os valores das duas matriz.
3- Mostrar em formato de matriz a matriz total.
4- Escrever na tela os setores que alcançaram a meta. */


void validarMeta(int dia1[3][3], int dia2[3][3]){
    //Começar a impementar aqui
    int meta, metaSetorDia2;
    int i = 0, j = 0;
    int total[3][3];
    
    printf("\nDigite a meta por setor: ");
    scanf("%d", &meta);
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            total[i][j] = dia1[i][j] + dia2[i][j];
        }
    }

    printf("Matriz: \n");
    for(i = 0; i < 3; i++){
    j = 0;
        printf("%d %d %d\n", total[i][j], total[i][j+1], total[i][j+2]);
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(total[i][j] >= meta){
                printf("Setor %d de %d alcançou a meta\n", i+1, j+1);
            } else {
                printf("Setor %d de %d não alcançou a meta\n", i+1, j+1);
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
