#include <stdio.h>
// 1. Atividade com Array Unidimensional:
// - Descrição: Escreva um programa que leia 5 números inteiros do usuário e armazene-os em um array. Em seguida, exiba a soma desses números.
// - Dica: Use um loop `for` para ler os números e outro loop para calcular a soma.
void exibirSoma() {
  int num;
  int index;
  int resultado = 0;
  for (index = 1; index <= 5; index += 1){
    printf("Digite o %dº número a ser somado: ", index);
    scanf("%d", &num);
    resultado += num;
  }
  printf("A soma dos 5 números é: %d\n", resultado);
}

// 2. Atividade com Array Multidimensional (Matriz):
// - Descrição: Crie um programa que leia uma matriz 3x3 (ou seja, uma matriz com 3 linhas e 3 colunas) e exiba a soma dos elementos da diagonal principal.
// - Dica: Use um loop `for` aninhado para ler os elementos da matriz e calcule a soma dos elementos da diagonal principal.
int matriz[3][3] = {
  {1, 7, 2},
  {19, 35, 10},
  {8, 52, 9},
};

void calcularDiagonalPrincipal(int matriz[3][3]) {
  int i,j;
  int resultado = 0;
  for (i = 0; i < 3; i += 1) {
    for (j = 0; j < 3; j += 1)
      if(i==j) resultado += matriz[i][j];
  }
  printf("A soma dos valores na diagonal principal é: %d\n", resultado);
}

int main() {
  exibirSoma();
  calcularDiagonalPrincipal(matriz);
  return 0;
}
