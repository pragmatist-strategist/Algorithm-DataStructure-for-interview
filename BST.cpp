//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <queue>
#include <conio.h>
using namespace std;
class node
{
public:


	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left=NULL;
		right=NULL;

	}

};

node* buildTree(){
	//enter the data to be saved on root node.
	int d;
	cin>>d;
	if(d=-1){
		return NULL;
	}
	node* n=new node(d);
	n->left=buildTree();
	n->right=buildTree();
	return n;
}

void printTree(node*root){
	if(root==NULL){
		return;
	}
	//Print the node in order ->root,left,right.
	cout<<root->data<<" ,";
	printTree(root->left);
	printTree(root->right);
}
void printInorder(node*root){
	if(root==NULL){
		return;
	}
	printInorder(root->left);
	cout<<root->data<<" ,";
	printInorder(root->right);
}
void printPostorder(node*root){
	if(root==NULL){
		return;
	}
	printPostorder(root->left);
	cout<<root->data;
	printPostorder(root->right);
}
int height(node *root){
	if(root==NULL){
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	return max(h1,h2)+1;
}
void printAtLevelK(node *root, int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ,";
		return;
	}
	printAtLevelK(root->left,k-1);
	printAtLevelK(root->right,k-1);
	return ;
}
void printAlllevels(node*root){
	int level;
	int h=height(root);
	for (leve = 0; level < height; level++)
	{
		printAtLevelK(root,level);
		cout<<endl;
		/* code */
	}
	return ;
}
istream& operator>>(istream&is, node*&root){
	root=buildTree();
	return is;

}
ostream& operator<<(ostream&os, node*root){
	root=buildTree();
	return os;
}
void LevelOrderPrint(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* n=q.front();
		if(n==NULL){
			cout<<endl;
			q.pop();
			if (!q.empty())
			{
				q.push(NULL);
			}
		}
		else{
			q.pop();
			cout<<n->data<<" ,";
			if(n->left){
				q.push(n->left);
			}
			if(n->right){
				q.push(n->right);
			}
		}
	}
}
void levelOrderBuild(node*&root){
	cout<<"Enter root ka data"<<endl;
	int d;
	cin>>d;

	root=new node(d);
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node *n=q.front();
		q.pop();

		int c1,c2;
		cout<<"Enter children of "<<n->data<<endl;
		cin>>c1>>c2;
		if (c1!=-1)
		{
			n->left=new node(c1);
			q.push(n->left);
		}
		if(c2!=-1){
			n->right=new node(c1);
			q.push(n->right);
		}
	}
}
int replaceWithSum(node *root){
	if(root==NULL){
		return 0;
	}
	int leftSum=replaceWithSum(root->left);
	int rightSum=replaceWithSum(root->right);
	root->data +=leftSum+rightSum;
	return root->data+temp;
}
int replaceWithChildrenSum(){
	if(root==NULL){
		return 0;
	}

	if(root->left==NULL && root->right==NULL){
		return root->data;
	}
	int leftSum=replaceWithSum(root->left);
	int rightSum=replaceWithSum(root->right);
	int temp=root->data;
	root->data=leftSum+rightSum;
	return root->data+temp;

}
//maxSubsetSum- Include either node or its child in the sum
class pair
{
public:
	int inc;
	int exc;
};
pair maxSubsetSum(node*root){
	pair p;
	if(root==NULL){
		p.inc=p.exc=0;
		return p;
	}
//Post Order
	pair L=maxSubsetSum(root->left);
	pair R=maxSubsetSum(root->right);

	p.inc=root->data + L.exc + R.exc;
	p.exc=max(L.inc,L.exc)+max(R.inc, R.exc);
	return p;
}

int diameter(node*root){
	if(root==NULL){
		return 0;
	}
	int op1=height(root->left)+height(root->right);
	int leftDia=diameter(root->left);
	int rightDia=diameter(root->right);

	return max(op1,max(leftDia,rightDia));
}

class HDpair{
public:
	int height;
	int diameter;
};
//complexity- O(n)
HDpair fastDia(node*root){
	HDpair p;
	if(root==NULL){
		p.height=max(left.height,right.height) + 1;
	}
	HDpair left=fastDia(root->left);
	HDpair right=fastDia(root->right);
	p.height=max(left.height,right.height) + 1 ;
	int op1=left.height + right.height + 1;
	int ld=left.diameter;
	int rd=right.diameter;
	p.diameter=max(op1,max(leftDia, rightDia));
	return p;
}


int main(){
	node* root = NULL;
	//cin>>root;
	levelOrderBuild(root);

	cout<<endl;
	printTree(root);
	cout<<endl;
	printInorder(root);
	cout<<endl;
	printPostorder(root);
	cout<<endl;
	cout<<"Height of tree is "<<height(root)<<endl;
	
	cout<<"Nodes at level k are ";
	printAtLevelK(root,3);
	cout<<endl;
	//cout<<root;
	
	levelOrderPrint(root);
	//replaceWithChildrenSum(root);
	cout<<endl;
	levelOrderPrint(root);	

	Pair ans = maxSubsetSum(root);

	cout<<"Maxisum Subset Sum "<<max(ans.inc,ans.exc)<<endl;

	getch();
	return 0;
}