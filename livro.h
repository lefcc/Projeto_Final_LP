#ifndef LIVRO_H
#define LIVRO_H

#define max_livro 200
#define max_titulo 100
#define max_autor 50

typedef struct {
    char titulo[max_titulo];
    char autor[max_autor];
    int ano_publicacao;
    float preco[10];
}Livro;

void cadastrarLivro(Livro a);
void listarLivros(Livro a);
void buscarTitulo(Livro a);
void atualizarLivro(Livro a);
void deletarLivro(Livro a);
void sair(Livro a);


#endif