//Id: 214173957_325877124
// Email: nevobiton0@gmail.com
#include "Graph.hpp"

namespace ariel
{
    void Graph::loadGraph(vector<vector<int>> vec)
    {
        // Get dimensions
        size_t Rows = vec.size();
        size_t Cols = vec[0].size();
        if(Rows!=Cols)
        {
            cout << "Invalid graph: The graph is not a square matrix.\n";
            return; // not a square matrix
        }

        this->AMat = new int*[Rows];
        for(size_t i = 0; i < Rows; i++)
        {
            this->AMat[i] = new int[Cols]; 
        }

        for(size_t i = 0; i < Rows; i++)
        {
            for(size_t j = 0; j < Cols; j++)
            {
                this->AMat[i][j] = vec[i][j];
            }
        }
        this->vertices = Rows;
    }

    void Graph::printGraph()
    {
        if(this->AMat==NULL)
        {
            cout << "Graph was not initialized yet\n";
            return;
        }

        int edges = 0;
        for(size_t i = 0 ;i < vertices; i++)
        {
            for(size_t j = i+1; j < vertices ; j++)
            {
                if(AMat[i][j])
                {
                    edges++;
                }
            }
        }

        cout << "Graph with "<< vertices <<" vertices and "<< edges <<" edges.\n";
    }

    int** Graph::getMat()
    {
        return this->AMat;
    }

    size_t Graph::getDimension()
    {
        return this->vertices;
    }
}