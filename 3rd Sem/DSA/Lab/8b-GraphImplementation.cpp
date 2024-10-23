#include <iostream>
class Graph
{
private:
    int vertices;
    int adjacencyMatrix[50][50];
public:
    Graph(int v) : vertices(v)
    {
        for (int i = 0; i < vertices; ++i)
        {
            for (int j = 0; j < vertices; ++j)
            {
                adjacencyMatrix[i][j] = 0;
            }
        }
    }
    void addEdge(int from, int to)
    {
        if (from >= 0 && from < vertices && to >= 0 && to < vertices)
        {
            adjacencyMatrix[from][to] = 1;
        }
    }
    void display()
    {
        std::cout << "Adjacency Matrix:" << std::endl;
        for (int i = 0; i < vertices; ++i)
        {
            for (int j = 0; j < vertices; ++j)
            {
                std::cout << adjacencyMatrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    int vertices = 5;
    Graph graph(vertices);
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(3, 2);
    graph.addEdge(4, 3);
    graph.display();
    return 0;
}