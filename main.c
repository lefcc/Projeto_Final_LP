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
        printf("\n");
        printf("\n");
        printf("\t===== MENU ===== \n");
        printf("Escolha uma das opcoes (0 - 4):\n");
        printf("1 - Cadastrar Livro\n");
        printf("2 - Listas todos os Livros\n");
        printf("3 - Buscar Livro por Título\n");
        printf("4 - Deletar Livro\n");
        printf("0 - Sair\n");
        scanf("\n%d", &n);
       

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
            printf("Lista de todos os Livros:\t\n");
            listarLivros(livros, totalLivros);
            break;

        case 3:
            printf("Busca do Livro por título:\t\n");
            buscarTitulo(livros, totalLivros);
            break;

        case 4:
            printf("Deletar Livro:\t\n");
            deletarLivro(livros, &totalLivros);
            break;

        default:
            printf("Opcao invalida. Escolha um numero entre 0 e 4.\t\n");
            break;
        }

    } while (n != 0);

    return 0;
}