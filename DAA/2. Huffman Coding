#include <iostream>
#include<vector>
#include<queue>
using namespace std;

struct node
{
   char ch;
   int freq;
   node *left,*right;
   node(char ch,int freq)
   {
       left=right=nullptr;
       this->ch=ch;
       this->freq=freq;
   }
};


void print(struct node *root,string ans)
{
    if(root==nullptr)
     return;
    
    //preorder
    if(root->ch!='$')
     cout<<root->ch<<": "<<ans<<endl;
     
    print(root->left,ans+"0");
    print(root->right,ans+"1");
    
}
struct compare
{
    bool operator()( node *a, node *b)
    {
       return(a->freq > b->freq);   
    }
};


void huffmanCoding(char ch[],int freq[],int &size)
{
    //create a node
    struct node *left,*right,*temp;
    
    //arrange as per lowest freq /// just structure ,, adding data using for loop
    
    priority_queue<node*,vector<node*>,compare> minheap;
    
    /////////////////////push data into minheap
    for(int i=0;i<size;i++)
    {
        minheap.push(new node(ch[i],freq[i]));
    }
	
    
    ///till we get single node add left and right node freq 
    
    while(minheap.size()!=1)
    {
        //take min freq on left node
        left=minheap.top();
        minheap.pop();
        //take max freq on right node
        right=minheap.top();
        minheap.pop();
        
        //pass sum=left_freq+right_freq as freq, and $ as data;
        temp=new node('$',left->freq+right->freq);
        temp->left = left;
		temp->right = right;
        minheap.push(temp);
    }
    
    //pass root=top, empty str
    print(minheap.top(),"");
}

int main()
{
   char ch[]={'A','B','C','D'};
   int freq[]={23,12,34,10};
   int size=4;
   
   huffmanCoding(ch,freq,size);


    return 0;
}
