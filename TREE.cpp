#include "TREE.hpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    MTree tree(1);
    MTree::TNode nd;
    MTree::TNode no;
    nd.lchild      = nullptr;
    nd.rchild      = nullptr;
    nd.val         = 1;
    no.rchild      = &nd;
    no.lchild      = nullptr;
    no.val         = 2;
    no.id          = 0;
    nd.id          = 1;
    tree.Insert_Node(tree.ROOT, no, LEFTCHILD);
    cout << tree.GetDeep() << " ";
    cout << tree.GetVexNum() << " ";
    if(tree.empty())
        cout << "empty";
    else
        cout << "not empty";
    return 0;
}