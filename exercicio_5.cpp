# include <iostream>
using namespace std;

class Produto{
public:

    string nome;
    double preco;
    int quantidade;

    void exibirProduto(){
        cout << "Nome - " << nome << " | Preco: " << preco << " |  Quantidade - " << quantidade << endl;
        cout << "valor total Produto Estoque: " << valorEstoqueProduto() << endl;
    }

    double valorEstoqueProduto(){
        return (preco * quantidade);
    }

};
int main(){
    double maiorValor = 0;

    Produto produtos[5];

    produtos[0].nome = "Mouse";
    produtos[0].preco = 15;
    produtos[0].quantidade = 5;

    // produto 2
    produtos[1].nome = "Teclado";
    produtos[1].preco = 30;
    produtos[1].quantidade = 3;

    produtos[2].nome = "Fone";
    produtos[2].preco = 50;
    produtos[2].quantidade = 10;

    produtos[3].nome = "Monitor";
    produtos[3].preco = 250;
    produtos[3].quantidade = 4;

    produtos[4].nome = "Gabinete";
    produtos[4].preco = 30;
    produtos[4].quantidade = 20;

    for (int i = 0; i < 5; i++)
    {
        produtos[i].exibirProduto();
    }

    int valorTotal = 0;
    string produtoCaro;
    for (int  i = 0; i < 5; i++)
    { 
        valorTotal += produtos[i].valorEstoqueProduto();
        if (produtos[i].preco > maiorValor)
        {
            maiorValor = produtos[i].preco;
            produtoCaro = produtos[i].nome;
        }
        
    }
    cout << "Valor Total do estoque " << valorTotal << endl;
    cout << "Produto mais caro -> " << produtoCaro << endl;
    
    return 0;
}
