#pragma once

#ifndef _GRAPH_H_
#define _GRAPH_H_

class GraphCLA
{
private:
    /* data */
public:
    GraphCLA(/* args */);
    ~GraphCLA();
    void CreateGraph();             // create Graph
    void DestroyGraph(GraphCLA &G); // delete G
    void LocateVex(GraphCLA &G);    //
    void GetVex();
    void PutVex(GraphCLA &G, int v, int value);
};

GraphCLA::GraphCLA(/* args */)
{
}

GraphCLA::~GraphCLA()
{
}

#endif