# include <iostream>
using namespace std;

class Retangulo{
public: // membros podem ser acessado pela main
    int largura, altura; // atributos

    void calculararea(){
        int area;
        area = largura * altura;
        cout << "o retangulo possui area: " << area << endl;
    }


};

int main(){
    Retangulo retangulo1;

    retangulo1.largura = 5;
    retangulo1.altura = 5;

    retangulo1.calculararea();

    return 0 ;

}
