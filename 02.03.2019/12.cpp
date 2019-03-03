//программа, считающая уровни-куча ошибок
struct Node
{
    Node *left, *right;
    int result;
};
int Depth (Node*)
{
    if (Node -> left ==NULL && Node -> right == NULL)
    {
        return 1;
    }
    else return 1 + maximum(Depth (Node -> left),(Depth (Node -> right));
}
int maximum( int a, int b)
                            {
                                if ( a > b) return a;
                                else return b;
                            }
// колличество элементов на уровне level
        int nelem (struct btree *p, int level)
                            {
                                static int i = 0,  cnt = 0;
                                if ( p == NULL )
                                    return 0;
                                else if (i == level)
                                    return p -> elem;
                                else
                                {
                                    i++;
                                    cnt += nelem (p -> left, level);
                                    cnt += nelem (p -> right, level);
                                }
                                return cnt;
                            };
