#include <iostream>
#include "Gtaph.h"

Graph::Graph()
{
}

Graph::~Graph()
{
}

istream& operator>>(istream& _istream, Graph& _graph)
{
    cout "Number of nodes: ";
    int n;
    _istream >> n;

    _graph.m_AdjacencyList.resize(n);

    cout "Number of edges: ";
    int m;
    _istream >> m;

    for (int i = 0; i < m; ++i)
    {
        cout << "Edge " << i + 1 << ": ";
        int x, y;

        _istream >> x >> y;
        _graph.m_AdjacencyList[x].push_back(y);
        _graph.m_AdjacencyList[y].push_back(x);
    }

    _graph.DumpAdjacencyList();

    return _istream;
}

void Graph::DumpAdjacencyList()
{
    cout << endl << "### DUMP LIST ###" << endl;

    for (size_t i = 0; i < NumberOfNodes(); ++i)
    {
        cout << i << ": ";
        for(size_t j = 0; j < m_AdjacencyList[i].size(); ++j)
        {
            cout << m_AdjacencyList[i][j] << " ";
        } 
        cout << endl;
    }
}