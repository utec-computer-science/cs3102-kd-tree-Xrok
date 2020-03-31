#include "node.cpp"

template<typename T,int DIMENSIONS = 2>
class Tree
{
    typedef Node<T, DIMENSIONS> _Node;
    
private:
    _Node *root = nullptr;
public:
    Tree(){};

    
    ~Tree(){};

    void insert(T data1,  T data2){
        _Node * newNode = new _Node(data1,data2);

        if (root)
        {
            root->insert(newNode,0);
        }else
        {
            root = newNode;
        }
    }

    void print(){
        if (!root)  
            return; 
            
        this->root->print(0);
    }
};

