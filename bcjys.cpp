
#include <iostream>
#include <queue>
using namespace std;
 
 
template <class T> class BinaryTree;
 
 
template <class T>
class TreeNode
{
	template <class T>
	friend class BinaryTree;
public:
 
	TreeNode(const T & d):data(d)
	{
		leftChild = rightChild = NULL;
	}
//private:
	T data;
	TreeNode *leftChild;
	TreeNode *rightChild;
 
};
 
template <class T>
class BinaryTree
{
public:
	void InOrder(); //中序遍历    左->中->右
	void InOrder(TreeNode<T> * current);  
	void PreOrder(); //前序遍历  中->左->右
	void PreOrder(TreeNode<T> *current);
	void PostOrder();//后序遍历  左->右->中
	void PostOrder(TreeNode<T>*current);
	void LevelOrder(); //层序遍历
	void Visit(TreeNode<T>*current);
 
	int getTreeHight(TreeNode<T>* root);  //计算思路:树的深度=左链的深度和右链深度的最大值 +1
 
	TreeNode<T> *  getRoot()
	{
		return root;
	}
 
//private:
	TreeNode<T> *root;
 
};
 
template <class T>
void BinaryTree< T>::Visit(TreeNode<T>*current)
{
	if (current)
		cout << current->data << " ";
}
template <class T>
void BinaryTree< T>::InOrder(TreeNode<T>*current)
{
	if (current)
	{
		InOrder(current->leftChild);
		Visit(current);
		InOrder(current->rightChild);
	}
}
template <class T>
void BinaryTree< T>::InOrder()
{
	InOrder(root);
}
template <class T>
void BinaryTree<T>::PreOrder()
{
	PreOrder(root);
}
template <class T>
void BinaryTree<T>::PreOrder(TreeNode<T> *current)
{
	if (current)
	{
		Visit(current);
		PreOrder(current->leftChild);
		PreOrder(current->rightChild);
	}
}
 
template <class T>
void BinaryTree<T>::PostOrder()
{
	PostOrder(root);
}
 
template <class T>
void BinaryTree<T>::PostOrder(TreeNode<T> *current)
{
	if (current)
	{
		PostOrder(current->leftChild);
		PostOrder(current->rightChild);
		Visit(current);
	}
}
 
template <class T>
void BinaryTree<T>::LevelOrder()
{
	//层序遍历，充分利用了queue先进先出的特点
	queue<TreeNode<T>* > q;
 
	TreeNode<T>* current = root;
 
	while (current)
	{
		Visit(current);
		if (current->leftChild) q.push(current->leftChild); //先把左子节点放到队列
		if (current->rightChild) q.push(current->rightChild); //再把右子节点放到队列
 
		if (q.empty()) return;  //到队列空的时候就返回
 
		current = q.front(); //当前指针指向先放进去的指针
		q.pop();  //将上边这个弹出队列
	}
}
 
template <class T>
int BinaryTree<T>::getTreeHight(TreeNode<T>* root) 
{
	if (NULL == root)
		return 0;
 
	int leftHigh = getTreeHight(root->leftChild);
	int rightHigh = getTreeHight(root->rightChild);
 
	int maxHigh = leftHigh >= rightHigh ? leftHigh + 1 : rightHigh + 1;
 
	return maxHigh;
 
}
 
int main()
{
	TreeNode<char> node1('+'),node2('-'), node3('*'), node4('/'), node5('A'), node6('B'), node7('C'), node8('D'), node9('E');
 
	BinaryTree<char> tree;
	
 
	tree.root = &node1;
 
	node1.leftChild = &node2;
	node1.rightChild = &node9;
 
	node2.leftChild = &node3;
	node2.rightChild = &node8;
 
	node3.leftChild = &node4;
	node3.rightChild = &node7;
 
	node4.leftChild = &node5;
	node4.rightChild = &node6;
 
	//中序遍历
	cout << "中序遍历:   ";
	tree.InOrder();
	cout << endl;
 
	//前序遍历
	cout << "前序遍历:   ";
	tree.PreOrder();
	cout << endl;
 
	//后序遍历
	cout << "后序遍历:  ";
	tree.PostOrder();
	cout << endl;
 
	//层序遍历
	cout << "层序遍历  ";
	tree.LevelOrder();
	cout << endl;
 
 
	cout << "树的深度 ";
	cout << tree.getTreeHight(tree.getRoot())<<endl;
 
	return 0;
}