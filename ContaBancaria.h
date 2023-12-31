#ifndef CONTABANCARIA_CONTABANCARIA_H
#define CONTABANCARIA_CONTABANCARIA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 5

enum
{
    FALSE = 0,
    TRUE
};

enum
{
    OP_NAO_SELECIONADA = 0,
    OP_INSERIR,
    OP_ALTERAR,
    OP_LISTAR,
    OP_DEPOSITAR,
    OP_SACAR,
    OP_IMPRIMIR,
    OP_SALDOGERAL,
    OP_SAIR
};

typedef int BOOLEAN;

typedef struct
{
    int numero;
    char cliente[51];
    BOOLEAN especial;
    double saldo;
} Conta;

extern size_t tamanho;
extern Conta *contas;
extern Conta *contaAtual;
extern Conta *encontrado;
extern int contadorClientes;
extern int especial;

int menu();
void inserir(Conta *l_contas);
void alterar(Conta *conta);
void listar(Conta *l_contas, int totalContas);
void depositar(Conta *conta, double valor);
void sacar(Conta *conta, double valor);
void imprimir(Conta *conta);
double saldoGeral(Conta *l_contas, int totalContas);
Conta *buscar(Conta *l_contas, int totalContas, int numero);
void inicializar();
void finalizar();
void expandir();
BOOLEAN isEmpty();
BOOLEAN isFull();

#endif
