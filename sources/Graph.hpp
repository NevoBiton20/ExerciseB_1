//Id: 214173957
// Email: nevobiton0@gmail.com

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <iostream>
using namespace std;

// A class that represents a graph structure using adjacency matrix.
namespace ariel
{
    class Graph
    {
        private:
            int ** AMat; // the graph's adjacency matrix.
            size_t vertices; // the amount of vertices in the graph.
            size_t edges; // the amount of edges in the graph.
        
        public:
            void loadGraph(vector<vector<int>> vec); // loads values to the graph's adjacency matrix.
            void printGraph(); // prints a textual representaion of the current graph.
            int ** getMat(); // returns the adjacency matrix of the graph.
            size_t getDimension(); // returns the dimension of the squared adjacency matrix of the graph.
    };
}

#endif
