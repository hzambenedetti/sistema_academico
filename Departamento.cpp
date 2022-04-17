//
// Created by Henrique on 29/03/2022.
//
#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"


Departamento:: Departamento (char *n){

    strcpy (nome, n);
    pUnivFiliado = nullptr;
}

Departamento:: ~Departamento (){
    pUnivFiliado = nullptr;
    ldisciplina.clear();
}

void Departamento :: setNome (char* n){

    strcpy (nome, n);
}

char* Departamento :: getNome () {

    return nome;
}

void Departamento :: setId(int n) {

    id = n;
}

void Departamento :: setUnivFiliado(Universidade *pu) {

    pUnivFiliado = pu;
}

void Departamento ::addDisciplina (Disciplina *d) {
    ldisciplina.push_back (d);
}


