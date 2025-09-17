# include <iostream>
using namespace std;

class Livro{
public:
    string titulo;
    string autor;
    int paginas;

    // tres atributos p/ livro

    void exibirLivro(){
        cout << "===========================================================================" << endl;
        cout << "Titulo: " << titulo << " Autor: " << autor << " Paginas " << paginas << endl;
        cout << "===========================================================================" << endl;
    }
} ;

int main(){
        Livro livro1, livro2, livro3;

        livro1.autor = "Machado de Assis";
        livro1.titulo = "Dom casmurro";
        livro1.paginas = 50;

        // instancia 2
        livro2.autor = "Raiam Santos";
        livro2.titulo = "Imigrante Ilegal";
        livro2.paginas = 175;

        // istancia 3
        livro3.autor = "Napoleon Hill";
        livro3.titulo = "Quem pensa enriquece";
        livro3.paginas = 180; 

        livro1.exibirLivro();
        livro2.exibirLivro();
        livro3.exibirLivro();
        return 0;
    }
