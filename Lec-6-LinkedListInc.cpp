//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//Basics of linked list.. without using header file of linked list.
// This code condatins some errors... plz fix them before using it further this part of code ->@ps signing off 
#include <iostream>
#include <conio.h>
using namespace std;

class node
{
public:
	int data;
	node*next;

	node(int d){
		next=NULL;	
	}

	~node(){
		if(next!=NULL){
			delete next;
		}
	}
};
void insertAtHead(node*&head ,int data){
	if(head==NULL){
		head=new node(data);
		return;
	}
	else{
		node *n = new node(data);
		n->next=head;
		head=n;
	}
}
void insertAtTail(node*&head, int data){
	if (head==NULL)
	{
		head=new node(data);
	}
	else{
		node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
	}
}
int length(node *head){
	int len=0;
	while(head){
		len++;
		head=head->next;
	}
	return len;
}

void insertInMiddle(node*&head, int data,int p){
	if(p==0){
		insertAtHead(head,data);
		return;
	}
	else if(p>=length(head)){
		insertAtTail(head,data);
		return;
	}
	else{
		node*temp = head;
		int jump=1;
		while(jump<=p-1){
			temp=temp->next;
			jump++;
		}
		node*n= new node(data);
		n->next=temp->next;
		temp->next=n;
	}
	return;
}
void print(node *head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<endl;
}
ostream& operator<<(ostream &no, node*head){
	print(head);
	return os;
}
istream& operator>>(istream&is, node*&head){
	int d;
	is>>d;
	while(d!=-1){
		insertAtTail(head,d);
		is>>d;
	}
	return is;
}

node* search(node*head, int key){
	if(head==NULL){
		return NULL;
	}
	if(head->data==key){
		return head;
	}
	return search(head->next,key);
}
void reverse(node *&head){
	node* current=head;
	node* N;
	node* prev=NULL;

	while(current!=NULL){
			//save the next node.
		N=current->next;
			//update the current node.
		current->next=prev;

			//Shift prev and current
		prev=curent;
		current =N;
	}
	head=prev;
} 
bool detectCycle(node*head){
	node*slow=head;
	node*fast=head;
	int ans= false;

	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;

		if(slow==fast){
			ans=true;
			break;
		}
	}
	slow=head;
	while(slow!=fast){
		slow=slow->next;
		fast=fast->next;
	}
	cout<<"Loop starts at "<<Slow->data;
//Break the loop.
	return ans;
}
node* midPoint(node*head){
	node* slow=head;
	node*fast=head->next;

	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}

node* getTail(node* head){
	while(head->next!=NULL){
		head=head->next;
	}
	return head;
}
node* reverseRec(node*head){
	if(head->next!=NULL){
		return head;
	}
	node* shead=reverseRec(head->next);
	node* temp=head->next;
	temp->next=head;
	head->next=NULL;
	return shead;
}

node* merge(node*a, node*b){
	if(a=NULL){
		return b;
	}
	else if(b==NULL){
		return a;
	}
	node* c;
	if (a->data < b->data)
	{
		c=a;
		c->next=merge(a->next,b);
			/* code */
	}
	else{
		c=a;
		c->next=merge(a->next,b);
	}
	return c;
}
node* mergesort(node *head){
	if(head==NULL||head->next==NULL){
		return head;
	}
		//recursive case
	node* mid=midPoint(head);
	node* a=head;
	node *b=mid->next;
	mid->next=NULL;

		//Sorting the two halves
	a=mergesort(a);
	b=mergesort(b);

	return merge(a,b);
}

int main(){
	node*head=NULL;
	node*head1=NULL;
	cin>>head;
	head=mergesort(head);
	cout<<head;
	delete head;
//Your code comes here.
	getch();
	return 0;
}
