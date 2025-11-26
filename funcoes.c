#include <stdio.h>
#include <livro.h>


int main(){
void cadastrarLivro(Livro a) {
    printf("Digite o titulo do livro: ");
    scanf(" %99[^\n]", a->titulo);
    printf("Digite o Autor: ");
    scanf(" %49[^\n]", a->autor);
    printf("Digite o ano de publicacao: ");
    scanf(" %d", &a->ano_publicacao);
    printf("Digite o numero de paginas: ");
    scanf(" %9[^\n]", a->preco);
}




void listarLivros(Livro a) {
    for(int i=0; i<max_livro; i++){
    printf("Titulo: %s\n", a.titulo);
    printf("Autor: %s\n", a.autor);
    printf("Ano de Publicacao: %d\n", a.ano_publicacao);
    printf("Preco: %d\n", a.preco);
    }
}



void buscarTitulo(struct Livro a) {
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


return 0;
}