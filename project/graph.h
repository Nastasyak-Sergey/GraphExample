#ifndef GRAPH_C
#define GRAPH_C

#include <vector>
#include <iostream>
using namespace std;

class Graph
{
public:
    using AdjacencyList = vector<vector<int>>;


public:
    friend istream& operator>>(istream& _istream, Graph& _graph);

    Graph();
    ~Graph();

    size_t NumberOfNodes() {return m_AdjacencyList.size();}

    void DumpAdjacencyList();

private:
    AdjacencyList m_AdjacencyList;
};





#endif // GRAPH_C
