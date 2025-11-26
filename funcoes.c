#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "livro.h"



void cadastrarLivro(Livro *livros, int *totalLivros) {
    (*totalLivros)++;

    Livro *novoLivro = &((*livros)[*totalLivros - 1]);

    printf("Digite o título do livro: ");
    scanf(" %99[^\n]", novoLivro->titulo);

    printf("Digite o autor: ");
    scanf(" %49[^\n]", novoLivro->autor);

    printf("Digite o ano de publicação: ");
    scanf("%d", &novoLivro->ano_publicacao);

    printf("Digite o preço: ");
    scanf("%f", &novoLivro->preco);

    printf("Livro cadastrado com sucesso!\n");
}




void listarLivros(Livro livros[], int totalLivros) {
    for(int i=0; i<max_livro; i++){
    printf("Titulo: %s\n", a.titulo);
    printf("Autor: %s\n", a.autor);
    printf("Ano de Publicacao: %d\n", a.ano_publicacao);
    printf("Preco: %d\n", a.preco);
    }
}



void buscarTitulo(Livro livros[], int totalLivros) {
    char tituloBusca[100];
    printf("Digite o titulo do livro para buscar: ");
    scanf(" %99[^\n]", tituloBusca);
    if (strcmp(a.titulo, tituloBusca) == 0) {
        listarTodos(a);
    } else {
        printf("Livro nao encontrado.\n");
    }
}

void atualizarLivro (struct Livro a){

}










void salvarDadosArquivo(Livro *livros, int totalLivros) {
    FILE *arquivo = fopen("dados_livros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao salvar os dados!\n");
        return;
    }

    fprintf(arquivo, "%d\n", totalLivros);
    for (int i = 0; i < totalLivros; i++) {
        fprintf(arquivo, "%s\n", livros[i].titulo);
        fprintf(arquivo, "%s\n", livros[i].autor);
        fprintf(arquivo, "%d\n", livros[i].ano_publicacao);
        fprintf(arquivo, "%.2f\n", livros[i].preco);
    }

    fclose(arquivo);
}

void carregarDadosArquivo(Livro **livros, int *totalLivros) {
    FILE *arquivo = fopen("dados_livros.txt", "r");
    if (arquivo == NULL) {
        *totalLivros = 0;
        *livros = NULL; // Garante que o ponteiro é NULL se não houver arquivo
        return;
    }
