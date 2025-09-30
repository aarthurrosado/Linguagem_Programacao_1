#pragma once
#include "Cliente.hpp"
#include <iostream>
using namespace std;

class ContaBancaria {
private:
    int numero;
    double saldo;
    Cliente* titular;
public:
    ContaBancaria(int a, Cliente* c, double s = 0);
    void exibirSaldo();
    void exibirInformacoes();
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria & destino2);
};
