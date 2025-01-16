#include <iostream>
#include <vector>

#define MAXV 1000 // Максимальное количество вершин

// Структура для представления ребра
struct EdgeNode {
    int y;               // Информация о смежности
    int weight;          // Вес ребра, если есть
    EdgeNode* next;      // Следующее ребро в списке
};

// Структура для представления графа
struct Graph {
    EdgeNode* edges[MAXV + 1]; // Информация о смежности
    int degree[MAXV + 1];      // Степень каждой вершины
    int nvertices;             // Количество вершин в графе
    int nedges;                // Количество ребер в графе
    bool directed;             // проверка Граф ориентированный?
};