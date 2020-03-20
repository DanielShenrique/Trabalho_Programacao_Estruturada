#include <stdio.h>//isso aqui é uma biblioteca para funcionar o sistema de E/S
#include <stdlib.h>//essa é outra biblioteca para coisas mais especificas, como alocação de memória

int MostrarValoresPorReferencia(int *a, int b, int c);//isso aqui é uma referencia da função para que ela funcione no main

/*
Essa é a função principal do código, é nela que todas as coisas funcionam
*/
int main(){//aqui temos o tipo e nome da variavel, ela não tem nenhum parametro, as "{" servem para dizer que esse é o começo da função
    int x, y, z;//essas são 3 variaveis tipo inteiro: x, y, z

    scanf("%d %d %d", &x, &y, &z);//aqui é a leitura das variaveis, onde o SO vai colocar os valores que eles receberam no seu endereço de memoria(?)

    printf("valor de x: %i\n", x);//aqui eu imprimo o valor de x
    printf("valor de y: %i\n", y);//aqui eu imprimo o valor de y
    printf("valor de z: %i\n", z);//aqui eu imprimo o valor de z

    MostrarValoresPorReferencia(&x, y, z);//aqui eu chamo a função, passando o endereço de memoria de x(ja que eu quero que o valor dele seja alterado)

    printf("valor de x apos a funcao: %i\n", x);//aqui eu imprimo o valor de x, notasse que o valor de x alterou, por causa da passagen por referencia
    printf("valor de y apos a funcao: %i\n", y);//aqui eu imprimo o valor de y, que não foi alterado, porque seu parametro foi dado por valor
    printf("valor de z apos a funcao: %i\n", z);//aqui eu imprimo o valor de z, que também não foi alterado, por causa do mesmo motivo do outro y. Foi passado por valor

    system("pause");//isso serve para que a aplicação não feche assim que executar os comandos, fazendo com que você tenha que apertar alguma tecla quando toda a execução acabar para sair do arquivo .exe
    return 0;//como toda função não void tem que retornar alguma coisa, por padrão sempre ao final ou quando queremos acabar com a aplicação da função botamos um return 0.
}//isso indica o final da função main

/*
Essa função faz com que o valor da variavel de x seja alterado
Porque ele está sendo passado por referencia
Os demais não serão alterados porque estão sendo passados por valor 
*/
int MostrarValoresPorReferencia(int *a, int b, int c){//nessa linha se tem o tipo e nome da função, bem como seus parametros (o parametro int *a é passado por referencia, os demais são passados por valor), o "{" significa o começo da função
    *a = *a + b + c; //aqui eu faço uma operação de soma de 3 valores alterando o a
    b = *a + c + b; //aqui eu faço uma operação de soma de 3 valores alterando o b
    c = *a + c + b; //aqui eu faço uma operação de soma de 3 valores alterando o c
    return 0; //toda função não void tem que retornar alguma coisa, por padrão em um int, retornamos a função quase sempre em 0
}//isso indica o fim da função MostrarValoresPorReferencia