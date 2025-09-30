#include <iostream>
#include "contaBancaria.hpp"
#include "Cliente.hpp"
using namespace std;

    ContaBancaria::ContaBancaria(int a, Cliente* c, double s) {
        if(s < 0){
            cout << "Saldo invalido, definido como 0" << endl;
            saldo = 0;
        } else{
            saldo = s;
        }
        numero = a;
        titular = c;
    }
    
    void ContaBancaria::exibirSaldo(){
        cout << "Saldo atual da conta " << numero << ": R$" << saldo << endl;
    }
    void ContaBancaria::exibirInformacoes(){
        cout << "Titular: " << titular->getNome() << ", CPF: " << titular->getCpf() << endl;
        cout << "Numero da conta: " << numero << ", Saldo: R$" << saldo << endl;
    }

    void ContaBancaria::depositar(double valor){
        saldo += valor;
        cout << "Valor do deposito R$ " << valor << endl;
        cout << "Deposito realizado!!" <<  endl;
    }

    void ContaBancaria::sacar(double valor){
        if(saldo >= valor){
            cout << "Saque permitido !" << endl;
            saldo -= valor;
        } else{
            cout << "Sua conta nao possui fundos suficientes :(" << endl;
        }
    }

    void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
        if (valor <= 0){
            cout << "Valor invalido! " << endl;
            return;
        }
        if(valor <= saldo){
            saldo -= valor;
            destino.saldo += valor;
            cout << "Transferencia realizada com sucesso! :)" << endl;
            cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.numero << endl; 
        } else{
            cout << "Fundos insuficientes para transferencia :(" << endl;
        }
    }

    void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
        if(valor < 0){
            cout << "Valor invalido!" << endl;
            return;
        }
        if (valor <= saldo){
            saldo -= valor; // retira o valor da conta
            destino1.depositar(valor / 2); // deposita na conta 1
            destino2.depositar(valor / 2); // depositva metade na conta 2
            cout << "Transferencia realizada com sucesso :)" << endl;
            cout << "Transferido: R$ " << valor / 2 << " para cada conta (" << destino1.numero << " e " << destino2.numero << ") da conta " << numero << endl; 
        } else{
            cout << "Saldo insuficiente para transferencia :( " << endl;
        }
    }
