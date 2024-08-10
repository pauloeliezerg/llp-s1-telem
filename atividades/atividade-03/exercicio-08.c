#include <stdio.h>
// 1. Calculadora Simples
// - Crie um programa que leia dois números inteiros do usuário e exiba a soma, subtração, multiplicação e divisão desses números.
void calculadora() {
  int a, b;
  printf("Digite o primeiro número inteiro: \n");
  scanf("%d", &a);
  printf("Digite o segundo número inteiro: \n");
  scanf("%d", &b);
  printf("A soma dos números vale: %d\n", a+b);
  printf("A subtração dos números vale: %d\n", a-b);
  printf("A multiplicação dos números vale: %d\n", a*b);
  printf("A divisão dos números vale: %.2f\n", (float)a/b);
}

// 2. Conversão de Temperatura
// - Escreva um programa que converta uma temperatura em graus Celsius para Fahrenheit. O usuário deve inserir a temperatura em Celsius.
void converterTemperatura() {
  float temperatura;
  printf("Digite o valor da temperatura em Celsius a ser convertida para Farenheit: \n");
  scanf("%f", &temperatura);
  printf("A temperatura equivalente em Farenheit é: %.2f\n", (temperatura*9/5)+32);
}

// 3. Exercício: Verificação de Número Par
// - Peça ao usuário para digitar um número inteiro. Verifique se o número é par ou ímpar e exiba a mensagem correspondente.
void verificarPar() {
  int numero;
  printf("Digite um número inteiro: \n");
  scanf("%d", &numero);
  char *resultado = numero % 2 ? "ímpar" : "par";
  printf("O número digitado é %s\n", resultado);
}

// 4. Cálculo de Média Ponderada
// - Leia três notas (pesos 2, 3 e 5) e calcule a média ponderada. Exiba a média resultante.
void calcularMediaPonderada() {
  float a, b, c;
  printf("Digite a primeira nota: ");
  scanf("%f", &a);
  printf("Digite a segunda nota: ");
  scanf("%f", &b);
  printf("Digite a terceira nota: ");
  scanf("%f", &c);
  float resultado = (a*2+b*3+c*5)/10;
  printf("A média ponderada dessas notas é: %.2f\n", resultado);
}

// 5. Troca de Valores
// - Leia dois números inteiros e troque seus valores sem usar uma variável temporária.
void trocarValores() {
  int a, b;
  printf("Digite o primeiro valor: \n");
  scanf("%d", &a);
  printf("Digite o segundo valor: \n");
  scanf("%d", &b);
  printf("Valores antes da troca: %d e %d\n", a, b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("Valores depois da troca: %d e %d\n", a, b);
}

int main() {
  calculadora();
  converterTemperatura();
  verificarPar();
  calcularMediaPonderada();
  trocarValores();
  return 0;
}
