#include<iostream>
#include"arrayBST.cpp"
using namespace std;

void result(bool info){
    if(info==true){
        cout<<"True \n";
    }
    else{
        cout<<"False \n";
    }
}

int main(){

    arrayBST tree(30);
    cout<<"Is Empty? :";result(tree.isEmpty());

    tree.add(0, 27);
    tree.add(0, 81);
    tree.add(0, 9);
    tree.add(0, 3);

    cout<<"After Adding Key"<<endl;
    cout<<"Is Empty? :";result(tree.isEmpty());
    
    cout<<"Searching\n"<<endl;
    cout<<" Is 27 in BST :";result(tree.exists(27));
    cout<<" IS 81 in BST :";result(tree.exists(81));
    cout<<" IS 9 in BST :";result(tree.exists(9));
    cout<<" IS 3 in BST :";result(tree.exists(3));


    tree.remove(27);
    tree.remove(81);
    tree.remove(9);
    tree.remove(3);

    cout<<"Searching \n"<<endl;
    cout<<"IS 27 in BST :";result(tree.exists(27));
    cout<<"IS 81 in BST :";result(tree.exists(81));
    cout<<"IS 9 in BST :";result(tree.exists(9));
    cout<<"IS 3 in BST :";result(tree.exists(3));
    return 0;
}