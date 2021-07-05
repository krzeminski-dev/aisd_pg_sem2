#include <iostream>
#include <string>
using namespace std;

struct graph
{
    int countOfVertex;
    string matrixIn;
    char **matrix;
    int maxDeg;
    bool result = false;
    bool isOddCycle = false;
    bool isFull = false;
};

bool isFullGraph(char **matrix, int dims)
{
    int countOfOnes = 0;
    for (int i = 0; i < dims; i++)
    {
        for (int j = 0; j < dims; j++)
        {
            if (matrix[i][j] == '1')
                countOfOnes++;
        }
    }
    if (countOfOnes == dims * (dims - 1))
        return true;
    return false;
}

bool isOddCycle(char **matrix, int dims)
{
    if (dims % 2 == 0)
        return false;
    else
    {
        for (int i = 0; i < dims; i++)
        {
            int localCountOfOnes = 0;
            for (int j = 0; j < dims; j++)
            {
                if (matrix[i][j] == '1')
                    localCountOfOnes++;
            }
            if (localCountOfOnes != 2)
                return false;
        }
    }
    return true;
}

void buildGraph(graph *graph)
{
    cin >> graph->countOfVertex;
    cin >> graph->matrixIn;
    int cOV = graph->countOfVertex;

    graph->matrix = new char *[cOV];
    for (int i = 0; i < cOV; i++)
    {
        graph->matrix[i] = new char[cOV];
    }

    graph->maxDeg = 0;

    int indexCounter = 0;
    for (int i = 0; i < cOV; i++)
    {
        int deg = 0;
        for (int j = 0; j < cOV; j++)
        {
            graph->matrix[i][j] = graph->matrixIn[indexCounter];
            if (graph->matrix[i][j] == '1')
                deg++;
            indexCounter++;
        }
        deg > graph->maxDeg ? graph->maxDeg = deg : graph->maxDeg = graph->maxDeg;
    }

    graph->isFull = isFullGraph(graph->matrix, cOV);
    graph->isOddCycle = isOddCycle(graph->matrix, cOV);
    if (graph->isFull || graph->isOddCycle)
        graph->result = true;
}

void printGraph(graph *graph)
{

    graph->result ? cout << "True" << endl : cout << "False" << endl;

    delete[] graph->matrix;
    graph->matrix = nullptr;
}

int main()
{
    int countOfTests;

    cin >> countOfTests;

    graph *graphs = new graph[countOfTests];
    graph *tmp = nullptr;

    for (int i = 0; i < countOfTests; i++)
    {

        tmp = &graphs[i];
        buildGraph(tmp);
    }

    for (int i = 0; i < countOfTests; i++)
    {
        tmp = &graphs[i];
        printGraph(tmp);
    }

    delete[] graphs;
    graphs = nullptr;

    return 0;
}