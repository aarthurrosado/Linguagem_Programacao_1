#include "Cliente.hpp"
#include <iostream>
using namespace std;


Cliente::Cliente(string n, string c) {
     nome = n;
     cpf = c;
}

// metodo getter nome
string Cliente::getNome(){
    return nome;
}
// getter cpf
string Cliente::getCpf() {
    return cpf;
}
// exibe cliente
void Cliente::exibirCliente() {
    cout << " Conta de "<< nome << " Com cpf: " << cpf << endl;
}
