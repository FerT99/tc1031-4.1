//  Date: 18/11/2021
//  Author: Fernanda Michelle Torres Aguilar
//  Description: tarea 4.1 grafos, sus representaciones y recorridos
//
//  Copyrigth (c) 2021 by Tecnológico de Monterrey.
//  All Rights Reserved. May be reproduced for any non-commercial
//  purpose

#include <iostream>
#include <cstring>
#include "graph.h"

using namespace std;

int main(int argc, char* argv[]) {
    Graph g;
    Graph prueba;

    string g_ans, g_ans_2;
    string prueba_ans, prueba_ans_2;

    g.loadGraphList("g.txt", 7, 7);
    prueba.loadGraphList("prueba.txt", 5, 5);

    g.loadGraphMat("g.txt", 7, 7);
    prueba.loadGraphMat("prueba.txt", 5, 5);

    //g.printAdjList()
    g_ans ="vertex 0 : 1 4 vertex 1 : 0 2 3 vertex 2 : 1 vertex 3 : 1 6 vertex 4 : 0 5 vertex 5 : 4 vertex 6 : 3 ";
    cout << "\n" <<"1.- esperada " << g_ans << "\n programa " << g.printAdjList() << "\n";
    cout <<	(!g_ans.compare(g.printAdjList()) ? "success\n" : "fail\n");

    //prueba.printAdjList()
    prueba_ans="vertex 0 : 1 2 3 4 vertex 1 : 0 2 3 4 vertex 2 : 0 1 3 4 vertex 3 : 0 1 2 4 vertex 4 : 0 1 2 3 ";
    cout << "\n" <<"2.- esperada " << prueba_ans << "\n programa " << prueba.printAdjList() << "\n";
    cout <<	(!prueba_ans.compare(prueba.printAdjList()) ? "success\n" : "fail\n");

    //g.printAdjMat()
    g_ans = "0 1 0 0 1 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0 0 1 1 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 ";
    cout << "\n" <<"3.- esperada " << g_ans << "\n programa " << g.printAdjMat() << "\n";
    cout <<	(!g_ans.compare(g.printAdjMat()) ? "success\n" : "fail\n");

    //prueba.printAdjMat()
    prueba_ans ="0 1 1 1 1 1 0 1 1 1 1 1 0 1 1 1 1 1 0 1 1 1 1 1 0 ";
    cout << "\n" <<"4.- esperada " << prueba_ans << "\n programa " << prueba.printAdjMat() << "\n";
    cout << 	(!prueba_ans.compare(prueba.printAdjMat()) ? "success\n" : "fail\n");

    //g.DFS(0,3);
    g_ans = "visited: 0 4 5 1 3 path: 0 1 3"; //dice cuál nodo ha sido visitado
    g_ans_2 = "visited: 0 1 2 3 path: 0 1 3";
    cout << "\n" <<"5.- esperada 1 " << g_ans << "\n esperada 2 " << g_ans_2 <<"\n programa " << g.DFS(0,3) << "\n";
    cout <<	( (!g_ans.compare(g.DFS(0,3)) || !g_ans_2.compare(g.DFS(0,3))) ? "success\n" : "fail\n");

    //prueba.DFS(0,3);
    prueba_ans = "visited: 0 4 3 path: 0 4 3";
    prueba_ans_2 = "visited: 0 1 2 3 path: 0 1 2 3";
    cout << "\n" <<"6.- esperada 1 " << prueba_ans << "\n esperada 2 " << prueba_ans_2 <<"\n programa " << prueba.DFS(0,3) << "\n";
    cout <<	( (!prueba_ans.compare(prueba.DFS(0,3)) || !prueba_ans_2.compare(prueba.DFS(0,3)))? "success\n" : "fail\n");


    //g.BFS(0,3);
    g_ans = "visited: 0 1 4 2 3 path: 0 1 3";
    g_ans_2 = "visited: 0 4 1 5 3 path: 0 1 3";
    cout << "\n" <<"7.- esperada 1 " << g_ans << "\n esperada 2 " << g_ans_2 <<"\n programa " << g.BFS(0,3) << "\n";
    cout <<	(( !g_ans.compare(g.BFS(0,3)) || !g_ans_2.compare(g.BFS(0,3))) ? "success\n" : "fail\n");

    //prueba.BFS(0,3);
    prueba_ans = "visited: 0 1 2 3 path: 0 3";
    prueba_ans_2 = "visited: 0 4 3 path: 0 3";
    cout << "\n" <<"8.- esperada 1 " << prueba_ans << "\n esperada 2 " << prueba_ans_2 <<"\n programa " << prueba.BFS(0,3) << "\n";
    cout <<	((!prueba_ans.compare(prueba.BFS(0,3)) || !prueba_ans_2.compare(prueba.BFS(0,3))) ? "success\n" : "fail\n");

}