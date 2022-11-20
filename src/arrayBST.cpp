#include "arrayBST.h"
#include <iostream>
using namespace std;

bool arrayBST::isEmpty(){
    if(BST[1]==0){
        return true;
        }
    else{
        return false;
        }
};

void arrayBST::add(int key, int value){
    int temp = 1;
    while(true){
        if(BST[temp]==0){
            BST[temp]=key;return;
            }
        else if(BST[temp]>key){
              temp=temp*2;
        }
        else if(BST[temp]<key){
            temp=temp*2+1;
            }
    }
};

void arrayBST::remove(int key){
    int temp1 = 1;
    while(temp1<size){
        if(BST[temp1]==key){
            break;
            }
        else if(BST[temp1]==0){
            return;
            }
        else if(BST[temp1]>key){
            temp1=temp1*2;
            }
        else if(BST[temp1]<key){
            temp1=temp1*2+1;
            }
    }

    if(BST[temp1*2]==0 && BST[temp1*2+1]==0){
        BST[temp1]=0;
        return;
    }
    else if(BST[temp1*2]!=0 && BST[temp1*2+1]==0){
        while(true){
            if(temp1*2>size){
                BST[temp1]=0;
                break;
            }
            BST[temp1]=BST[temp1*2];
            temp1=temp1*2;
            
        }
    }else if(BST[temp1*2]==0 && BST[temp1*2+1]!=0){
        while(true){
            if(temp1*2+1>size){
                BST[temp1]=0;
                break;
            }
            BST[temp1]=BST[temp1*2+1];
            temp1=temp1*2+1;
            
        }
    }else{
        int temp2 = temp1*2;
        while(temp1<size){
            if (BST[temp2*2+1]==0){
                break;
            }
            temp2=temp2*2+1;
        }
        int tempkey = BST[temp2];
        BST[temp2]=BST[temp1];
        BST[temp1]=tempkey;
        BST[temp2]=0;
    }
};

bool arrayBST::exists(int key){
    int temp = 1;
    while(temp<size){
        if(BST[temp]==key){
            return true;
        }else if(BST[temp]>key){
            temp=temp*2;
        }else{
            temp=temp*2+1;
        }
    }
    return false;
};

    