//
// Created by wkj11 on 2020-05-14.
//

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

typedef struct Graph Graph;

Graph* createGraph(int** graph);
void dfs(Graph* graph);
void bfs(Graph* graph);
void printGraph(Graph* graph);


#endif //GRAPH_GRAPH_H
