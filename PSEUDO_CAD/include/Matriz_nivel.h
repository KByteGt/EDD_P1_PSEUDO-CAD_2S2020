#ifndef MATRIZ_NIVEL_H
#define MATRIZ_NIVEL_H

#include <Nodo_matriz.h>

#include <iostream>
#include <string>

using namespace std;

/*
 * Author: KByteGt
 * Estructura de Datos
 * 2do Semestre 2020
 */


class Matriz_nivel
{
    public:
        Matriz_nivel();
        virtual ~Matriz_nivel();

        //Otros
        void agregarPunto(int x, int y, string letra, string color);

        bool verificarPunto(int x, int y, string l);
        int getIdPunto(int x, int y);

        string getGraphviz(string nombre);

    protected:

    private:
        Nodo_matriz* headers;

        //Metodos
        void agregarEjeX(int x);
        void agregarEjeY(int y);
};

#endif // MATRIZ_NIVEL_H
