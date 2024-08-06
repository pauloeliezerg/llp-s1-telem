#include <stdio.h>

// 1. Atividade com `while`:
// - Descrição: Escreva um programa que exiba os números pares de 1 a 10 usando um loop `while`.
// - Dica: Use o operador de módulo (`%`) para verificar se um número é par.
void exibirNumerosPares() {
  int index = 1;
  while (index <= 10) {
    !(index%2) && printf("%d\n", index);
    index++;
  }
}

// 2. Atividade com `do while`:
// - Descrição: Crie um programa que solicite ao usuário que adivinhe um número entre 1 e 100. O programa deve continuar pedindo até que o usuário acerte o número ou digite `-1` para sair.
// - Dica: Use um loop `do while` para repetir a solicitação.
void adivinharNumero(int num) {
  int palpite;
  do {
    printf("Digite um número de 1 a 100: (-1 para sair)\n");
    scanf("%d", &palpite);
    if (palpite == -1) break;
    if (palpite == num) printf("Parabéns! Você acertou!\n");
  } while (palpite != num);
}

// 3. Atividade com `for`:
// - Descrição: Escreva um programa que calcule a soma dos primeiros 10 números inteiros positivos usando um loop `for`.
// - Dica: Use uma variável acumuladora para calcular a soma.
void calcularSoma() {
  int resultado = 0;
  int index;
  for (index = 1; index <= 10; index += 1) {
    resultado += index;
  }
  printf("%d\n", resultado);
}

int main() {
  exibirNumerosPares();
  adivinharNumero(99);
  calcularSoma();
  return 0;
}
