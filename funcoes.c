#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "livro.h"

void cadastrarLivro(Livro *livros, int *totalLivros)
{

    Livro *novoLivro = &livros[*totalLivros];

    printf("Digite o titulo do livro: ");
    scanf(" %99[^\n]", novoLivro->titulo);

    printf("Digite o autor: ");
    scanf(" %49[^\n]", novoLivro->autor);

    printf("Digite o ano de publicacao: ");
    scanf("%d", &novoLivro->ano_publicacao);

    printf("Digite o preco: ");
    scanf("%f", &novoLivro->preco);

    (*totalLivros)++;
    printf("\n");
    printf("Livro cadastrado com sucesso!\n");
    printf("\n");
}

void listarLivros(Livro *livros, int totalLivros)
{
    for (int i = 0; i < totalLivros; i++)
    {
        printf("\n");
        printf("\nLivro #%d\n", i + 1);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano: %d\n", livros[i].ano_publicacao);
        printf("Preco: %.2f\n", livros[i].preco);
    }
}

void buscarTitulo(Livro *livros, int totalLivros)
{
    char tituloBusca[max_titulo];
    int encontrado = 0;

    printf("Digite o titulo do livro para buscar: \n");
    scanf(" %99[^\n]", tituloBusca);

    for (int i = 0; i < totalLivros; i++)
    {

        if (strcmp(livros[i].titulo, tituloBusca) == 0)
        {
            printf("\n");
            printf("\n--- Livro Encontrado ---\n");
            printf("\n");
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano_publicacao);
            printf("Preco: %.2f\n", livros[i].preco);
            encontrado = 1;
        }
    }
    if (!encontrado)
    {
        printf("Livro nao encontrado.\n", tituloBusca);
    }
}

void deletarLivro(Livro livros[], int *totalLivros)
{

    int numeroLivro;
    printf("\nDigite o numero do livro para deletar: \n");
    scanf("%d", &numeroLivro);

    int indice = numeroLivro - 1;

    for (int i = indice; i < *totalLivros - 1; i++)
    {
        livros[i] = livros[i + 1];
    }

    (*totalLivros)--;
    printf("\n");
    printf("Livro deletado com sucesso!\n");
}

void salvarDadosArquivo(Livro livros[], int totalLivros)
{
    FILE *arquivo = fopen("dados_livros.txt", "w");
    fprintf(arquivo, "%d\n", totalLivros);
    for (int i = 0; i < totalLivros; i++)
    {
        fprintf(arquivo, "%s\n", livros[i].titulo);
        fprintf(arquivo, "%s\n", livros[i].autor);
        fprintf(arquivo, "%d\n", livros[i].ano_publicacao);
        fprintf(arquivo, "%.2f\n", livros[i].preco);
    }

    fclose(arquivo);
}

void carregarDadosArquivo(Livro livros[], int *totalLivros)
{
    FILE *arquivo = fopen("dados_livros.txt", "r");

    fscanf(arquivo, "%d", totalLivros);

    for (int i = 0; i < *totalLivros; i++)
    {
        fscanf(arquivo, " %99[^\n]", livros[i].titulo);
        fscanf(arquivo, " %49[^\n]", livros[i].autor);
        fscanf(arquivo, "%d", &livros[i].ano_publicacao);
        fscanf(arquivo, "%f", &livros[i].preco);
    }

    fclose(arquivo);
}