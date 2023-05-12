#include <stdio.h>

int main() {
   
    int cpf[3], cpfif[3];
    int i, j, cont=0, aux=10,r ,s , d1=0, d2=0;
    int cpfint[11];
    int div[3] = {100, 10, 1};

//-------------------------------------------------lendo
    printf("Digite o CPF:");
    scanf("%d %d %d %d", &cpf[0], &cpf[1],&cpf[2], &cpf[3]);
//-------------for para manter o valor do vetor para os testes
    for (i = 0; i < 3; i++){
            cpfif[i] = cpf[i];
    }
//------------------------------juntando tudo em um vetor
    for (j = 0; j < 3; j++){
        for (i = 0; i < 3; i++){
            cpfint[cont] = cpf[j] / div[i];
            cpf[j] = cpf[j] % div[i];
            cont=cont+1;
        }
        if(j==2){
            cpfint[cont] = cpf[3] / div[1];
            cpfint[cont+1] = cpf[3] % div[1];
        }
    } 
//--------------------------------------------D1
    for (i = 0; i < 9; i++){
        d1+= cpfint[i]*aux;
        aux--;
    }
    r = d1 % 11;
    if (r==0 || r==1){
        d1=0;
    }else{
        d1 = 11-r;
    }
//--------------------------------------------D2
    aux=11;
    for (i = 1; i < 10; i++){
        d2+= cpfint[i]*aux;
        aux--;
    }
    s = d2 % 11;
    if (s==0 || s==1){
        d2=0;
    }else{
        d2 = 11-s;
    }
//testando se os digitos são do tam certo e se d1 e d2 validam
    if(cpfif[0]<1000 && cpfif[1]<1000 && cpfif[2]<1000 && cpfif[3]<100){
        if(d1==cpfint[9] && d2==cpfint[10]){
            printf("CPF correto!");
        }else{
            printf("Erro no CPF!");   
        }
    }else{
        printf("Quantidade de digitos incorreta!");
    }
    return 0;
}
