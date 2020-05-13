//
// Created by wkj11 on 2020-05-14.
//
#include <stdlib.h>
#include "graph.h"
#include "./Queue/Queue.h"

typedef struct Graph {
    int** graph;
} Graph;

Graph* createGraph(int** graph) {
    Graph* newGraph = malloc(sizeof(Graph));
    newGraph->graph = graph;

    return newGraph;
}
void dfs(Graph* graph) {

}
void bfs(Graph* graph);
void printGraph(Graph* graph);

