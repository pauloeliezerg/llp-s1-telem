// Fazer um programa em C para executar as seguintes funcionalidades: Mostrar uma tela de Menu que recebe um valor de opcao. De acordo com o valor entrado (1,2,3,4) fazer as seguintes  

// 1) Escrever na Tela um Menu no formato abaixo:
// ----------------------------------------------------------------------
// Sistema de Estoque
// ----------------------------------------------------------------------
// 1) Entrada de Produtos
// 2) Listar os Produtos
// 3) Valor Total do Estoque
// 4)  Fim
// Opção: __
// ---------------------------------------------------------------------

// Opção 1
// 1) Entrar os seguintes dados em um formato de acordo com os dados abaixo: 
// ----------------------------------------------------------------------
// Entrada de Cadastro de Produtos
// ----------------------------------------------------------------------
// Código: 9999

// Descrição: XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

// Valor Unitário: 99.999,99

// Qtd Estoque: 999

// Valor Estoque: 999.999,99  (Campo calculado ValorUnitario x QtdEstoque)

// Digite (1-Para Gravar, 2-Voltar a tela inicial) : __

// Quando for digitado 1 gravar os dados em um array de struct de produtos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char descricao[100];
    double valorUnitario;
    int qtdEstoque;
    double valorEstoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int produtoCount = 0;

void mostrarMenu();
void entradaProdutos();
void listarProdutos();
void valorTotalEstoque();

int main() {
    int opcao;

    do {
        mostrarMenu();
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                entradaProdutos();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                valorTotalEstoque();
                break;
            case 4:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

void mostrarMenu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("----------------------------------------------------------------------\n");
}

void entradaProdutos() {
    if (produtoCount >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    Produto novoProduto;
    
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");

    printf("Código: ");
    scanf("%d", &novoProduto.codigo);
    printf("Descrição: ");
    getchar(); // Limpa o buffer
    fgets(novoProduto.descricao, sizeof(novoProduto.descricao), stdin);
    novoProduto.descricao[strcspn(novoProduto.descricao, "\n")] = 0; // Remove newline

    printf("Valor Unitário: ");
    scanf("%lf", &novoProduto.valorUnitario);
    printf("Qtd Estoque: ");
    scanf("%d", &novoProduto.qtdEstoque);
    
    novoProduto.valorEstoque = novoProduto.valorUnitario * novoProduto.qtdEstoque;

    int opcao;
    printf("Valor Estoque: %.2f\n", novoProduto.valorEstoque);
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        produtos[produtoCount] = novoProduto;
        produtoCount++;
        printf("Produto gravado com sucesso!\n");
    } else {
        printf("Voltando ao menu inicial...\n");
    }
}

void listarProdutos() {
    printf("----------------------------------------------------------------------\n");
    printf("Lista de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < produtoCount; i++) {
        printf("Código: %d\n", produtos[i].codigo);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Valor Unitário: %.2f\n", produtos[i].valorUnitario);
        printf("Qtd Estoque: %d\n", produtos[i].qtdEstoque);
        printf("Valor Estoque: %.2f\n", produtos[i].valorEstoque);
        printf("----------------------------------------------------------------------\n");
    }
    if (produtoCount == 0) {
        printf("Nenhum produto cadastrado.\n");
    }
}

void valorTotalEstoque() {
    double total = 0.0;
    for (int i = 0; i < produtoCount; i++) {
        total += produtos[i].valorEstoque;
    }
    printf("Valor Total do Estoque: %.2f\n", total);
}
