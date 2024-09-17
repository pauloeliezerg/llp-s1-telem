// Escrever um programa em C que faz as seguintes operações:
// A execução e o código fonte do programa deverão ser evidenciados no GitHub e o link do GitHub gravado no
// Google Classroom.

// 1) Cria um arquivo que armazena linhas de textos;
// 2) O Arquivo será alimentado por dados digitados no teclado;
// 3) Mostrar o conteúdo do arquivo. (A partir do passo 6)

// Observações:
// 1) Usar a função fopen para abrir um arquivo que será criado;
// 2) Usar a funções de entrada de dados pelo teclado;
// 3) Gravar a string lida do teclado no arquivo; 
// 4) Executar a instrução anterior até uma condição final. Para isso usar um laço while;
// 5) Fechar o arquivo;

// 6) Abrir o arquivo no modo de leitura;
// 7) Ler cada linha do arquivo e mostra-la no vídeo;
// 8) Fechar o arquivo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char linha[256];
    char nome_arquivo[] = "texto.txt";

    file = fopen(nome_arquivo, "w");
    if (file == NULL) {
        perror("Não foi possível abrir o arquivo para escrita");
        return EXIT_FAILURE;
    }

    printf("Digite as linhas de texto (digite 'fim' para terminar):\n");
    while (1) {
        printf("Linha: ");
        fgets(linha, sizeof(linha), stdin);

        if (strncmp(linha, "fim", 3) == 0 && (linha[3] == '\0' || linha[3] == '\n')) {
            break;
        }

        fprintf(file, "%s", linha);
    }

    fclose(file);
    printf("Arquivo gravado com sucesso.\n");

    file = fopen(nome_arquivo, "r");
    if (file == NULL) {
        perror("Não foi possível abrir o arquivo para leitura");
        return EXIT_FAILURE;
    }

    printf("\nConteúdo do arquivo:\n");
    while (fgets(linha, sizeof(linha), file) != NULL) {
        printf("%s", linha);
    }

    fclose(file);

    return EXIT_SUCCESS;
}
