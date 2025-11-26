#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include "livro.h"

int main()
{

    setlocale(LC_ALL, "pt-br");
    int totalLivros = 0;
    int n;
    Livro livros[max_livro];

    carregarDadosArquivo(livros, &totalLivros);

    do
    {
        printf("=== MENU === \t\n");
        printf("Escolha uma das opcoes (0 - 5)\t\n");
        printf("1 - Cadastrar Livro\t\n");
        printf("2 - Listas todos os Livros\t\n");
        printf("3 - Buscar Livro por Título\t\n");
        printf("4 - Atualizar Livro\t\n");
        printf("5 - Deletar Livro\t\n");
        printf("0 - Sair\t\n");
        scanf("%d", &n);

        switch (n)
        {

        case 0:
            printf("Salvando e saindo...\n");
            salvarDadosArquivo(livros, totalLivros);
            break;

        case 1:
            printf("Cadastrar Livro:\t\n");
            cadastrarLivro(livros, &totalLivros);
            break;

        case 2:
            printf("Listar todos os Livros:\t\n");
            listarLivros(livros, totalLivros);
            break;

        case 3:
            printf("Buscar Livro por título:\t\n");
            buscarTitulo(livros, totalLivros);
            break;

        case 4:
            printf("Atualizar Livro:\t\n");
            atualizarLivro(livros, totalLivros);
            break;

        case 5:
            printf("Deletar Livro:\t\n");
            deletarLivro(livros, &totalLivros);
            break;

        default:
            printf("Opção inválida. Escolha um número entre 0 e 5.\t\n");
            break;
        }

    } while (n != 0);

    return 0;
}