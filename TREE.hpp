#ifndef _TREE_HPP_
#define _TREE_HPP_

#include <bits/stdc++.h>

using namespace std;

#define LEFTCHILD               0
#define RIGHTCHILD              1
#define MAX_TREE_VERTEX_NUM     1010
#define INF                     0x7fffffff

class MTree
{
private:
    int vexnum        = 1;
    int Tree_deep     = 1;
    /* NOTHING */
    #define ROOT_NODE TreeNodes[0]
public:
struct TNode{
        int id;
        int val;
        TNode* lchild;
        TNode* rchild;
        bool operator== (TNode a){
            if(this->id == a.id && this->val == a.val && this->lchild == a.lchild && this->rchild == a.rchild){
                return true;
            }else{
                return false;
            }
        }
        bool operator!= (TNode a){
            if(this->id != a.id || this->val != a.val || this->lchild != a.lchild || this->rchild != a.rchild){
                return true;
            }else{
                return false;
            }
        }
    }TreeNodes[MAX_TREE_VERTEX_NUM];
    MTree(int value);
    MTree(int value, TNode left, TNode right);
    ~MTree();
    void Insert_Node(TNode& dad, TNode node, int typ);       //insert a node of the tree
    bool search(TNode root);                                //search the tree
    int GetVexNum();                                        //size of the trees;
    bool empty();                                           //is_empty
    int GetDeep();                                          //always "ROOT_NODE"
    void UpdateDeep(TNode rt,int deep = 1){
	    if(rt.lchild != nullptr) UpdateDeep(*rt.lchild,deep+1);
	    if(rt.rchild != nullptr) UpdateDeep(*rt.rchild,deep+1);
	    Tree_deep = max(Tree_deep, deep);
    }
    TNode ROOT = TreeNodes[0];
};

MTree::MTree(int value)
{
    ROOT_NODE.id = 0;
    TreeNodes[0].val = value;
    TreeNodes[0].lchild = nullptr;
    TreeNodes[0].rchild = nullptr;
}

MTree::MTree(int value, TNode left, TNode right)
{
    ROOT_NODE.id = 0;
    TreeNodes[0].val = value;
    *TreeNodes[0].lchild = left;
    *TreeNodes[0].rchild = right;
}

MTree::~MTree()
{
    ROOT_NODE.val = -INF;
    ROOT_NODE.lchild = nullptr;
    ROOT_NODE.rchild = nullptr;
}

void MTree::Insert_Node(TNode& dad, TNode node, int typ){
    if(node.lchild == nullptr && node.rchild == nullptr){
        if(!search(node)){
            /* DO NOTHING */
        }else{
            if(dad.lchild == nullptr && dad.rchild == nullptr)
            {
                if(typ == RIGHTCHILD){
                    *dad.rchild = node;
                }else{
                    *dad.lchild = node;
                }
            }else if(dad.lchild != nullptr && dad.rchild == nullptr){
                *dad.rchild = node;
            }else{
                *dad.lchild = node;
            }
        }
        vexnum++;
        UpdateDeep(MTree::ROOT);
    }
    else{
        if(node.lchild != nullptr){
            Insert_Node(node, *node.lchild ,LEFTCHILD);
            vexnum++;
        }
        if(node.rchild != nullptr){
            Insert_Node(node, *node.rchild, RIGHTCHILD);
            vexnum++;
        }
    }
}

bool MTree::search(TNode root)
{
    if(ROOT_NODE == root)
    {
        return true;
    }else{
        if(root.lchild != nullptr){
            search(*root.lchild);
        }
        if(root.rchild != nullptr){
            search(*root.rchild);
        }
    }
    return false;
}

int MTree::GetVexNum(){
    return vexnum;
}

bool MTree::empty(){
    if(vexnum) return false;
    return true;
}

int MTree::GetDeep(){       //always input "ROOT_NODE"
    UpdateDeep(ROOT_NODE);
    return Tree_deep;
}


#endif // if not define _TREE_HPP_ 