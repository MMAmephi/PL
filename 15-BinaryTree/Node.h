
template<typename T>
class Node{
public:
    Node();
    Node(T value);

    T key;
    Node *left;
    Node *right;
    int height;
};

template<typename T>
Node<T>::Node(){}

template<typename T>
Node<T>::Node(T value): key(value), left(nullptr), right(nullptr), height(0){}