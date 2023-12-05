#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Cliente {
    char nome[50];
    long cpf;
    int setorAtendimento;
};

struct Cliente listaDeClientes[100];

int atendimentoInicial() {
    int opcaoAtendimentoInicial;

    printf("\nDigite o número da opção desejada:\n");
    printf("1 - Solicitar Atendimento\n");
    printf("2 - Listar Atendimentos Registrados\n");
    printf("3 - Listar Atendimento por Setor\n");
    printf("4 - Sair\n");

    scanf("%d", &opcaoAtendimentoInicial);
    fflush(stdin);
    system("cls");

    return opcaoAtendimentoInicial;
}

void solicitarAtendimento(int *numeroDeAtendimentos) { //utilizamos ponteiro para alterar o valor diretamente no local de memória desta variável

    

    printf("Digite seu nome completo: ");
    scanf(" %[^\n]s", listaDeClientes[*numeroDeAtendimentos].nome);

    printf("Digite seu CPF (somente números): ");
    scanf("%ld", &listaDeClientes[*numeroDeAtendimentos].cpf); //para tipos de dados  long utiliza-se ld

    printf("Digite o número do setor de atendimento desejado:\n");
    printf("1 - Abertura de Conta\n");
    printf("2 - Caixa\n");
    printf("3 - Gerente Pessoa Física\n");
    printf("4 - Gerente Pessoa Jurídica\n");
    scanf("%d", &listaDeClientes[*numeroDeAtendimentos].setorAtendimento);

    fflush(stdin);
    system("cls");

    (*numeroDeAtendimentos) ++;
}

void atendimentosRegistrados(int numeroDeAtendimentos) {

    if(numeroDeAtendimentos == 0){
        printf("\nNão há atendimentos registrados até o momento\n");
    } else if(numeroDeAtendimentos == 1) {
        printf("\nHá %d atendimento registrado até o momento\n", numeroDeAtendimentos);
    } else {
        printf("\nHá %d atendimentos registrados até o momento\n", numeroDeAtendimentos);
    }

    for(int i = 0; i < numeroDeAtendimentos; i++) {
        printf("Nome: %s\n", listaDeClientes[i].nome);
        printf("CPF: %ld\n", listaDeClientes[i].cpf);
        if(listaDeClientes[i].setorAtendimento == 1) {
            printf("Tipo Atendimento - 1 - Abertura de Conta\n");
        } else if(listaDeClientes[i].setorAtendimento == 2) {
            printf("Tipo Atendimento - 2 - Caixa\n");
        } else if(listaDeClientes[i].setorAtendimento == 3) {
            printf("Tipo Atendimento - 3 - Gerente Pessoa Física\n");
        } else if(listaDeClientes[i].setorAtendimento == 4) {
            printf("Tipo Atendimento - 4 - Gerente Pessoa Jurídica\n");
        }        
        printf("===============================\n");
    }
}

void atendimentosPorSetor() {
  
}
   
int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeroDeAtendimentos = 0, setoresAtendimento[100];

    printf("==============================================================\n");
    printf("=========== Bem-vindo(a) ao sistema de atendimento ===========\n");
    printf("==============================================================\n");

    while(1) {
        switch (atendimentoInicial()) {
            case 1:
                solicitarAtendimento(&numeroDeAtendimentos);
                break;
            case 2:
                atendimentosRegistrados(numeroDeAtendimentos);
                break;
            case 3:
                atendimentosPorSetor();
                break;    
            case 4:
                printf("\nFinalização do atendimento. Até logo!\n");
                system("pause");
                return 0; //para finalizar o programa
            default:
                printf("\n Por favor, digite uma opção válida.");
                break;
        }
    }    

    return 0;
}
