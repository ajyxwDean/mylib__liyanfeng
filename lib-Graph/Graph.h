#pragma once

#ifndef _GRAPH_H_
#define _GRAPH_H_


struct GraphNodeSTRU
{
    int to[110];
    int tonum;
    int pre[110];
    int prenum;
    int val;
    int ID;
};

#endif