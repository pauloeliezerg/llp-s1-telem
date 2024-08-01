// 1. O que é Manipulação de Bits?

// A manipulação de bits em programação refere-se ao processo de alterar ou operar diretamente nos bits individuais de uma variável, geralmente para otimizar o uso de memória e melhorar a eficiência do código. Em vez de trabalhar com dados em unidades maiores como bytes ou inteiros, a manipulação de bits permite controlar e modificar cada bit separadamente. Isso é feito usando operações bit a bit, como AND, OR, XOR e deslocamento de bits (shift). Essas operações são úteis para tarefas como criptografia, compressão de dados, controle de hardware e em sistemas embarcados onde o controle preciso sobre os dados é essencial.

// 2. Qual a Importância da Manipulação de Bits?

// A manipulação de bits é crucial na programação devido à sua capacidade de otimizar o desempenho e a eficiência do código, especialmente em contextos onde os recursos são limitados, como em sistemas embarcados e desenvolvimento de baixo nível. Ela permite o controle direto e preciso sobre os dados, facilitando operações como compactação de dados, configurações de flags e controle de hardware. Além disso, operações bit a bit são geralmente mais rápidas e exigem menos ciclos de processamento do que operações em tipos de dados maiores. Isso torna a manipulação de bits essencial para tarefas que exigem alta performance e gerenciamento eficiente da memória, contribuindo para a criação de sistemas mais rápidos e responsivos.

// 3. Quais são as Operações Básicas de Manipulação de Bits?

// AND, OR, XOR, NOT, e deslocamento para a esquerda e para a direita.

// 4. Exemplo em Linguagem C. Crie um programa  que exibe os bits de um número e realiza operações básicas.

#include <stdio.h>

void exibirBits(int num) {
    int i;
    for (i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
}

int main() {
    int a = 29;
    int b = 15;

    printf("Número a: %d\n", a);
    printf("Número b: %d\n", b);

    printf("Bits de a: ");
    exibirBits(a);
    printf("Bits de b: ");
    exibirBits(b);

    int and_result = a & b;
    int or_result = a | b;
    int xor_result = a ^ b;
    int not_result = ~a;
    int shift_left_result = a << 2;
    int shift_right_result = a >> 2;

    printf("\nResultados das operações:\n");
    printf("a & b: %d\n", and_result);
    printf("a | b: %d\n", or_result);
    printf("a ^ b: %d\n", xor_result);
    printf("~a: %d\n", not_result);
    printf("a << 2: %d\n", shift_left_result);
    printf("a >> 2: %d\n", shift_right_result);

    printf("\nBits dos resultados:\n");
    printf("Bits de a & b: ");
    exibirBits(and_result);
    printf("Bits de a | b: ");
    exibirBits(or_result);
    printf("Bits de a ^ b: ");
    exibirBits(xor_result);
    printf("Bits de ~a: ");
    exibirBits(not_result);
    printf("Bits de a << 2: ");
    exibirBits(shift_left_result);
    printf("Bits de a >> 2: ");
    exibirBits(shift_right_result);

    return 0;
}
