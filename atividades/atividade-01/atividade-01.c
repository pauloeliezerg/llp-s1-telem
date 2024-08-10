// Faça um programa que leia a pontuação obtida por um jogador em um jogo de sinuca e atenda os critérios definidos abaixo
// 0 -| 10 -> Insuficiente
// 10 -| 40 -> Regular
// 40 -| 70 -> Bom
// 70 -| 90 -> Ótimo
// 90 -| 100 -> Excelente
// O valor a ser avaliado será armazenado em uma variável inteira chamada x.
// Usar o comando if else if para imprimir a mensagem correspondente ao valor de x.
#include <stdio.h>

int main(void) {
  int x = 10;

  if(x >= 0 && x <= 10) printf("Insuficiente");
    else if(x > 10 && x <= 40) printf("Regular");
        else if(x > 40 && x <= 70) printf("Bom");
            else if(x > 70 && x <= 90) printf("Otimo");
                else if(x > 90 && x <= 100) printf("Excelente");

  return 0;
}
