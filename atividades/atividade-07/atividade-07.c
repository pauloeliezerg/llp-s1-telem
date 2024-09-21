// Escreva um programa C compatível com o compilador C do ambiente Replit.com. O programa fará as operações a seguir:

// O programa apresentará um menu na console de saída. O menu consistirá de uma tela com opções a serem executadas. A entrada do valor de uma das opções do menu chamará uma funcionalidade correspondente em outra tela.
// As opções do menu de são:

// Cadastrar Produto. Nessa opção serão informados os seguintes dados para entrada na tela: codigo, descrição, valor unitario, quantidade estoque;
// Consultar Produto para Alteração. Todos os dados citados anteriormente serão apresentados para serem alterados;
// Listar todos os produtos. Nessa opção para cada produto é calculado o valor do estoque multiplicando a quantidade em estoque vezes o preco unitario;
// Exclusão do Produto. Nessa opção a tela apresentará um código que será buscado e apresentará um produto. Na tela terá uma entrada de dados respondendo sim ou Não para confirmar exclusão do produto.
// Observação: Os produtos serão armazenados em um array de struct de produtos.

#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char descricao[100];
    float valor_unitario;
    int quantidade_estoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int contador_produtos = 0;

void cadastrar_produto() {
    if (contador_produtos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido.\n");
        return;
    }
    
    Produto p;
    printf("Informe o codigo do produto: ");
    scanf("%d", &p.codigo);
    printf("Informe a descricao do produto: ");
    getchar(); // Limpar o buffer
    fgets(p.descricao, sizeof(p.descricao), stdin);
    p.descricao[strcspn(p.descricao, "\n")] = 0; // Remove o newline
    printf("Informe o valor unitario do produto: ");
    scanf("%f", &p.valor_unitario);
    printf("Informe a quantidade em estoque: ");
    scanf("%d", &p.quantidade_estoque);

    produtos[contador_produtos] = p;
    contador_produtos++;
    printf("Produto cadastrado com sucesso!\n");
}

void consultar_produto() {
    int codigo;
    printf("Informe o codigo do produto para alterar: ");
    scanf("%d", &codigo);
    
    for (int i = 0; i < contador_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado!\n");
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Descricao: %s\n", produtos[i].descricao);
            printf("Valor Unitario: %.2f\n", produtos[i].valor_unitario);
            printf("Quantidade em Estoque: %d\n", produtos[i].quantidade_estoque);
            
            printf("Informe nova descricao: ");
            getchar(); // Limpar o buffer
            fgets(produtos[i].descricao, sizeof(produtos[i].descricao), stdin);
            produtos[i].descricao[strcspn(produtos[i].descricao, "\n")] = 0; // Remove o newline
            printf("Informe novo valor unitario: ");
            scanf("%f", &produtos[i].valor_unitario);
            printf("Informe nova quantidade em estoque: ");
            scanf("%d", &produtos[i].quantidade_estoque);
            printf("Produto alterado com sucesso!\n");
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

void listar_produtos() {
    printf("Lista de produtos:\n");
    for (int i = 0; i < contador_produtos; i++) {
        float valor_estoque = produtos[i].valor_unitario * produtos[i].quantidade_estoque;
        printf("Codigo: %d, Descricao: %s, Valor Unitario: %.2f, Quantidade em Estoque: %d, Valor em Estoque: %.2f\n",
               produtos[i].codigo, produtos[i].descricao, produtos[i].valor_unitario, produtos[i].quantidade_estoque, valor_estoque);
    }
}

void excluir_produto() {
    int codigo;
    printf("Informe o codigo do produto para exclusão: ");
    scanf("%d", &codigo);
    
    for (int i = 0; i < contador_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado: %s\n", produtos[i].descricao);
            char confirmacao;
            printf("Deseja realmente excluir o produto? (s/n): ");
            getchar(); // Limpar o buffer
            scanf("%c", &confirmacao);
            if (confirmacao == 's' || confirmacao == 'S') {
                // Desloca os elementos do array
                for (int j = i; j < contador_produtos - 1; j++) {
                    produtos[j] = produtos[j + 1];
                }
                contador_produtos--;
                printf("Produto excluído com sucesso!\n");
            } else {
                printf("Exclusão cancelada.\n");
            }
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

int main() {
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Consultar Produto para Alteração\n");
        printf("3. Listar Todos os Produtos\n");
        printf("4. Exclusão do Produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                cadastrar_produto();
                break;
            case 2:
                consultar_produto();
                break;
            case 3:
                listar_produtos();
                break;
            case 4:
                excluir_produto();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
