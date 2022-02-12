#include "stack.h"


void Create(Stacktype *s)
{
    s->top = 0;
}

void Push(Stacktype *s , Entrytype item)
{
    s->arr[s->top++] = item;
}

void Pop(Stacktype *s , Entrytype *item)
{
    *item = s->arr[--s->top];
}

int Stackempty(Stacktype s)
{
    return(s.top == 0);
}

int Stackfull(Stacktype s)
{
    return(s.top == Size);
}

int first(Stacktype s , Entrytype *item)
{
    return *item = s.arr[0];
}

int last(Stacktype s , Entrytype *item)
{
    return *item = s.arr[Size - 1];
}

void destroy(Stacktype *s)
{
    s->top = 0;
}

void copystacks(Stacktype *s , Stacktype *s2)
{
    int i;
    for(i = 0 ; i < Size ; i++)
    {
        s2->arr[i] = s->arr[i];
        s2->top ++;
    }
}

int stacksize(Stacktype *s)
{
    return s->top;
}
void TraverseStack(Stacktype *s,void(*pf)(Entrytype e)){

        for(int i=s->top;i>0;i--){
                (*pf)(s->arr[i]);
        }

}
