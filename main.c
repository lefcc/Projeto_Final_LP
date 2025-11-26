#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <livro.h>

int main()
{

    setlocale(LC_ALL, "pt-br");
    int n = 0;
    char a;
    Livro a;


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

        if (n == 0)
        {
            printf("Sair\t\n");
            sair(a);
            break;
        }

        switch (n)
        {

        case 1:
            printf("Cadastrar Livro:\t\n");
            cadastrarLivro(a);
            break;

        case 2:
            printf("Listar todos os Livros:\t\n");
            listarLivros(a);
            break;

        case 3:
            printf("Buscar Livro por título:\t\n");
            buscarTitulo(a);
            break;

        case 4:
            printf("Atualizar Livro:\t\n");
            atualizarLivro(a);
            break;

        case 5:
            printf("Deletar Livro:\t\n");
            deletarLivro(a);
            break;

        default:
            printf("Opção inválida. Escolha um número entre 0 e 5.\t\n");
            break;
        }
        
            
    }while(n != 0);

    return 0;
}