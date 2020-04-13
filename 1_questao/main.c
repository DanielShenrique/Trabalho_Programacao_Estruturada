#include <stdio.h>
#include <stdlib.h>

float IMC(float p, float a);

struct pessoa
{
    char nome[20];
    float peso, altura, imcPessoal;
};


int main(){

    struct pessoa p[5];

    int i;

    for(i = 0; i <= 4; i++){
        system("cls");
        fflush(stdin);
        printf("Digite o nome da %i pessoa:\n", i+1);
        scanf("%s", &p[i].nome);
        printf("Digite o peso da %i pessoa:\n", i+1);
        scanf("%f", &p[i].peso);
        printf("Digite a altura da %i pessoa:\n", i+1);
        scanf("%f", &p[i].altura);

        p[i].imcPessoal = IMC(p[i].peso, p[i].altura);
    }

    system("cls");
    
    for(i = 0; i <= 4; i++){
        printf("------------------------\n");

        printf("Nome: %s\n", p[i].nome);
        printf("Peso: %.2f\n", p[i].peso);
        printf("Altura: %.2f\n", p[i].altura);
        printf("IMC: %.2f\n", p[i].imcPessoal);

        if(p[i].imcPessoal < 18.5){
            printf("Abaixo do peso\n");
        }
        else{
            if(p[i].imcPessoal <= 24.9){
                printf("Peso normal\n");
            }
            else{
                if(p[i].imcPessoal <= 29.9){
                    printf("Sobrepeso\n");
                }
                else{
                    if(p[i].imcPessoal <= 34.9){
                        printf("Obesidade grau 1\n");
                    }
                }
            }
        }

    }

    system("pause");
    return 0;
}



float IMC(float p, float a){
    float imc = p/(a*a);

    return imc;
}


