#include <stdio.h>

#define	MaxWordSize	20
#define MaxVertices	50

// Define structure
typedef struct gEdge {
	int child, weight;		// 'child' is the location of the child vertex
	struct gEdge *nextEdge;
} GEdge, *GEdgePtr;

typedef struct {
	char id[MaxWordSize+1], colour;
	int parent, cost, discover, finish, inDegree;
	GEdgePtr firstEdge;
} GVertex;

typedef struct graph {
	int numV;
	GVertex vertex[MaxVertices+1];
} *Graph;

// Prototype declaration
GEdgePtr newGEdge(int, int);
GVertex newGVertex(char[]);
Graph newGraph(int);
void buildGraph(FILE *, Graph);
void addEdge(char[], char[], int, Graph);
void printGraph(Graph);

