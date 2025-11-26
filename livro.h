#ifndef LIVRO_H
#define LIVRO_H

#define max_livro 200
#define max_titulo 100
#define max_autor 50

typedef struct {
    char titulo[max_titulo];
    char autor[max_autor];
    int ano_publicacao;
    float preco;
}Livro;

void cadastrarLivro(Livro livros[], int *totalLivros);
void listarLivros(Livro livros[], int totalLivros);
void buscarTitulo(Livro livros[], int totalLivros);
void atualizarLivro(Livro livros[], int totalLivros);
void deletarLivro(Livro livros[], int *totalLivros);

void salvarDadosArquivo(Livro livros[], int totalLivros);
void carregarDadosArquivo(Livro livros[], int *totalLivros);


#endif