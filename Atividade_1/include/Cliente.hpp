#pragma once
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente{
private:
    string nome;
    string cpf;

public:
    Cliente(string n, string c);

    string getNome();
    string getCpf();
    void exibirCliente();
};
