# include <iostream>
using namespace std;

class Banco{
public:
    double saldo =  0;

    void depositar(double valor){
        double saldoAntes = saldo;
        saldo += valor;
        cout << "Seu saldo antigo era " << saldoAntes << " Saldo novo: " << saldo << endl;
    }

    void sacar(double valor){
        if ( saldo > valor){
            cout << "Saldo de " << valor << " Concedido !" << endl;
            saldo = saldo - valor;
            cout << "Valor corrente pos saldo: " << saldo << endl;
        } else {
            cout << "Seu saldo corrente e insuficiente :(" << endl;
        }
    }

    void consultarSaldo(){
        cout << "Saldo atual : " << saldo << endl;
    }
};

int main (){
    Banco conta1;

    conta1.depositar(100);
    conta1.sacar(20);
    conta1.sacar(100);
    conta1.consultarSaldo();
    return 0;


}

