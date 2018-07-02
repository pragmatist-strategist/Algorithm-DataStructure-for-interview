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
		data=d;
		left=NULL;
		right=NULL;
	}
};
node*buildTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;	
	}
	node* n=new node(d);
	n->left=buildTree();
	n->right=buildTree();

	return n;
}
void printTree(node* root){
	if(root==NULL){
		return;
	}
//Print root, left and right
	cout<<root->data<<" ,";
	printTree(root->left);
	printTree(root->right);
}
void printInorder(node* root){
	if(root==NULL){
		return ;
	}
	printInorder(root->left);
	cout<<root->data<<endl;
	printInorder(root->right);
}
void printPostOrder(node* root){
	if(root==NULL){
		return ;
	}
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ,";
}
int height(node* root){
	if(root==NULL){
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	return max(h1,h2)+1;

}
void printAtLevelK(node*root, int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ,";
		return;
	}
	printAtLevelK(root->left, k-1);
	printAtLevelK(root->right, k-1);
	return;
}
void printAllLevels(node* root){
	int level;
	int h=height(root);
	for (level = 1; level<=h; level++)
	{
		printAtLevelK(root,level);
		cout<<endl;
	}
	return;
}
istream& operator>>(istream&is, node*&root){
	root=buildTree();
	return is;
}
ostream& operator<<(ostream&os, node*root){
	printAllLevels(root);
	return os;
}

void levelOrderPrint(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* n=q.front();
		if(n==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
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
	cout<<" Enter root's data"<<endl;
	int d;
	cin>>d;

	root=new node(d);
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* n=q.front();
		q.pop();

		int c1,c2;
		cout<<"Enter children of "<<n->data<<endl;
		cin>>c1>>c2;
		if(c1!=-1){
			n->left=new node(c1);
			q.push(n->left);

		}
		if(c2!=-1){
			n->right;
		}
	}
}
int replaceWithSum(node* root){
	if(root==NULL){
		return 0;
	}
	int leftSum=replaceWithSum(root->left);
	int rightSum=replaceWithSum(root->right);
	root->data=leftSum+rightSum;
	return root->data+temp;
}
class pair
{
public:
	int inc;
	int exc;
};
pair maxSubsetSum(node* root){
	pair p;
	if(root==NULL){
		p.inc=p.exc=0;
		return p;
	}
	pair left=maxSubsetSum(root->left);
	pair right=maxSubsetSum(root->right);

	p.inc=root->data+left.exc+right.exc;
	p.exc=max(left.exc,left.inc)+max(right.inc, right.exc);
	return p;
}

int diameter(node* root){
	if (root==NULL)
	{
		return 0;
	}
	int op1=height(root->left)+ height(root->right);
	int leftDiameter=diameter(root->left);
	int rightDiameter=diameter(root->right);
	return max(op1,max(leftDiameter,rightDiameter));
}
class HDpair
{
public:
	int height;
	int diameter;
	
};
HDpair fastDiameter(node* root){
	HDpair p;
	if(root==NULL){
		p.height=p.diameter=0;
		return p;
	}
	HDpair left=fastDiameter(root->left);
	HDpair right=fastDiameter(root->right);

	p.height= max(left.height, right.height)+1;

	int op1=left.height+right.height;
	int leftDiameter=left.diameter;
	int rightDiameter=right.diameter;

	p.diameter=max(op1,max(leftDiameter,rightDiameter));
	return p;
}
int main(){
	node* root= NULL;
	levelOrderBuild(root);
	cout<<endl;
	printTree(root);
	cout<<endl;
	printInorder(root);
	cout<<endl;
	printPostOrder(root);
	cout<<endl;
	cout<<"Height of the given tree is  "<<height(root)<<endl;
	cout<<"Node at level K are ";
	printAtLevelK(root, 3);
	cout<<endl;
	levelOrderPrint(root);

	pair ans=maxSubsetSum(root);
	cout<<"Maximum Subset sum "<<max(ans.inc, ans.exc)<<endl;

//Your code comes here.
	getch();
	return 0;
}