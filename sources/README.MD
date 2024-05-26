#Assignment 1 guide

In this guide we will explain all the implementations of the graph in this task.

Graph's way of building:

The file Graph.hpp contains the whole graph structure by the following:

_________________________________________________________________________________________________________________________________________________________________________
 **Graph's fields:**   -    private fields
-----------------


**int ** AMat**   -   A 2D array that holds the adjacency matrix of the graph, the matrix holds 0 and 1, if AMat[4,6] = 1, it means that there is an edge between vertex 4 and vertex 6, if 0, then there isn't.

**size_t vertices**   -   A number that represents the amount of vertices in the graph.

**size_t edges**    -     A number that represents the amount of edges in the graph.




 **Graph's basic methods:**    -    public fields
----------------------

**loadGraph(vector<vector<int>> vec)**   -    A method that loads values to the graph's adjacency matrix.

**printGraph()**    -    A method that prints a textual representaion of the current graph.  Example: Graph with 3 vertices and 2 edges.

**getMat()**     -     A method that returns the adjacency matrix of the graph.

**getDimension()**   -    A method that returns the dimension of the squared adjacency matrix of the graph. (Equivalent to the amount of vertices of the graph)
_________________________________________________________________________________________________________________________________________________________________________


 In addition for the implementaion of the graph, we added an algorithms class that helps compute basic properties about your graph using implemented algorithms.
_________________________________________________________________________________________________________________________________________________________________________
**Algorithms:**
-----------

**isConnected(ariel::Graph g)**    -     returns 1 if the graph is strongly connected and 0 otherwise. This algorithm is inspired by the Floyd-Warshall algorithm, our algorithm checks if there is a path in the graph between every pair of vertices in the graph, if it finds even one pair that doesnt has a path from one vertex to another, returns false.

**shortestPath(ariel::Graph g, int a, int b)**    -    Uses the single source shortest path algorithm Bellman-Ford and check if there is a path between vertex A to vertex B, if there is one, returns true and false otherwise.

**isContainsCycle(ariel::Graph g)**     -      Uses DFSF algorithm to run through the graph, if during the iteration of the graph, the algorithm finds a back edge, returns true and prints the cycle it found. It works from a lemma we learned in algorithms 1 course, graph contains a cyclic iff it yeilds any back edge. 

**isBipartite(ariel::Graph g)**       -      this algorithm colors the graph in two colors, starts with coloring the first vertex (number 0) as one color, and then all of his neighbors in opposite color and so on, if the graph is bipartite, by the end of the coloring, every edge in the graph (u,v) should show that u is has one color, and v has a different color than u, the algorithms splits those vertices to 2 groups by color and prints each of them. if it doesnt happen, return false.

**negativeCycle(ariel::Graph g)**     -     This algorithm runs Bellman-Ford algorithm from each vertex in the graph. Its known that when Bellman-Ford makes all of his iteration to converge all the vertices shortestpath, if it still possible to make any path shorter, then there is a negative cycle in the graph. So it checks exactly this for every vertex in the graph and if finds a path that can be made even shorter after Bellman-Ford's iterations, returns true and false otherwise. 

_________________________________________________________________________________________________________________________________________________________________________

