#include <stdio.h>

// 1. Atividade com `if`:
// - Descrição: Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou zero. Use a declaração `if`.
// - Dica: Use a função `scanf` para ler o número e compare-o com zero.
void verificarNumero() {
  int num;
  printf("Digite um número inteiro a ser verificado: ");
  scanf("%d", &num);
  if (num > 0) printf("O número %d é maior que zero\n", num);
  if (num < 0) printf("O número %d é menor que zero\n", num);
  if (num == 0) printf("O número %d é igual que zero\n", num);
}

// 2. Atividade com `if else`:
// - Descrição: Crie um programa que determine se um ano é bissexto ou não. 
//  Um ano é bissexto se for divisível por 4, exceto quando é divisível por 100 (a menos que também seja divisível por 400).
// - Dica: Use a declaração `if else` para verificar as condições.
void verificarAnoBissexto(int ano) {
  if (ano && !(ano%4) && (ano%100 || !(ano%400))) printf("O ano %d é bissexto\n", ano);
  else printf("O ano %d não é bissexto\n", ano);
}

// 3. Atividade com `switch`:
// - Descrição: Implemente um programa que leia um número de 1 a 7 e exiba o dia da semana correspondente (1 = domingo, 2 = segunda-feira, etc.).
// - Dica: Use a estrutura `switch` para associar os números aos dias da semana.
void contarDiaDaSemana(int num) {
  char diasDaSemana[7][14] = {
    "domingo",
    "segunda-feira",
    "terça-feira",
    "quarta-feira",
    "quinta-feira",
    "sexta-feira",
    "sábado",
};

  switch(num) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      printf("O dia da semana associado ao número %d é: %s\n", num, diasDaSemana[num-1]);
    break;
    default:
      printf("Número inválido\n");
    break;
  }
}

// 4. Atividade com Operador Ternário:
// - Descrição: Escreva um programa que leia dois números inteiros e exiba o maior deles usando o operador ternário.
// - Dica: Use a expressão `(a > b) ? a : b` para encontrar o maior número.
void exibirMaiorNumero(int a, int b) {
  int maior = a > b ? a : b;
  printf("O maior número entre %d e %d é: %d\n", a, b, maior);
}

int main() {
  verificarNumero();
  verificarNumero();
  verificarNumero();
  verificarAnoBissexto(0);
  verificarAnoBissexto(4);
  verificarAnoBissexto(100);
  verificarAnoBissexto(400);
  contarDiaDaSemana(0);
  contarDiaDaSemana(1);
  contarDiaDaSemana(2);
  contarDiaDaSemana(3);
  contarDiaDaSemana(4);
  contarDiaDaSemana(5);
  contarDiaDaSemana(6);
  contarDiaDaSemana(7);
  exibirMaiorNumero(10, 20);
  return 0;
}
