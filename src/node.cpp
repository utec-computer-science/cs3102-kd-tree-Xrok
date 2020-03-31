#define SPACER 8

template<typename T, int DIMENSIONS>
class Node
{
private:
    Node * left = nullptr;
    Node * rigth = nullptr;
    T data[DIMENSIONS];
public:
    Node(T data1, T data2){
        data[0]=data1;
        data[1]=data2;
    }

    void insert(Node * node,int act_dim){
        if ( node->data[act_dim] < this->data[act_dim] )
        {
            if (this->left)
            {
                this->left->insert(node, (act_dim+1)%DIMENSIONS );
            }else
            {
                this->left = node;
            }
        }else
        {
            if (this->rigth)
            {
                this->rigth->insert(node, (act_dim+1)%DIMENSIONS );
            }else
            {
                this->rigth = node;
            }
        }
    }

    void print(int space){

            space += SPACER;  

            if (this->rigth)
            {
                this->rigth->print(space);
            }else
            {
                std::cout<<" ";
            }

            std::cout<<std::endl;

            for (int i = SPACER; i < space; i++)  
                std::cout<<" "; 

            std::cout<<"("<<data[0]<<","<<data[1]<<")"<<"\n";  
         
            if (this->left)
            {
                this->left->print(space);  
            }else
            {
                std::cout<<" ";
            }
            
    }

    ~Node();
};


