# include <iostream>
using namespace std;

class Circulo{
public:

    double raio;
    double n = 3.14;

    double calcularArea(){
        return n * (raio * raio);
    }

    double calcularCircunferencia(){
        return 2 * n * raio;
    }

    bool maiorCirculo(Circulo outro){
        return outro.raio < raio;
    }

    void exibirInfo(){
        cout << "Raio: " << raio << endl;
        cout << "Area : " << calcularArea() << endl;
        cout << "Circunferencia: " << calcularCircunferencia() << endl;

    }
};

int main(){
    Circulo circulo1, circulo2;

    circulo2.raio = 5.0;
    circulo1.raio = 3.0;
    
    bool resultado;
    resultado = circulo1.maiorCirculo(circulo2);
    cout << "Circulo 1 e maior? " << resultado << endl;
    return 0;
}
