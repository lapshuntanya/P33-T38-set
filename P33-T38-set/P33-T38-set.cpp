#include "BinTree.h"

int main()
{
    BinTree<int> bin;
    bin.insert(13); //                             root(13)
    bin.insert(50);//                           /            50
    bin.insert(4);//                         4             /   \
    bin.insert(25); //                         \           25     \
    bin.insert(52);//                            \                  52 \
    bin.insert(149); //                            \                    149
    bin.insert(8);//                                 8                  /
    bin.insert(57);//                                                 57 \
    bin.insert(140);//                                                    140


    system("pause");
}
