#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST{
    public:
    virtual bool isEmpty() = 0;
    virtual void add(int key, int value) = 0;
    virtual void remove(int keytoremove) = 0;
    virtual void max(int &output) = 0;
    virtual void min(int &output) = 0;
    virtual void inorder() = 0;
    virtual bool exists(int targetkey) = 0;
};
#endif