//
// Created by msobral on 16/08/2019.
//

#ifndef PROG_QUESTAO_H
#define PROG_QUESTAO_H
#include "categoria.h"

#include <list>
#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>

using namespace std;

void sumariza(const unordered_map<string,Categoria> & filmes, unordered_map<Categoria,int> & sumario) {
    for (auto &k: filmes) {
        if (sumario.count(k.second) > 0) {
            sumario[k.second]++;
        } else {
            sumario[k.second] = 1;
        }
    }
}

#endif //PROG_QUESTAO_H
