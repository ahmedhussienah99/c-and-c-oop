#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define Size 10

typedef int Entrytype;

typedef struct
{
    int top;
    Entrytype arr[Size];

}Stacktype;

void Create(Stacktype *s);
void Push(Stacktype *s , Entrytype item);
void Pop(Stacktype *s , Entrytype *item);
int Stackfull(Stacktype s);
int Stackempty(Stacktype s);


int first(Stacktype s , Entrytype *item); //1
int last(Stacktype s , Entrytype *item);  //2

void destroy(Stacktype *s);  //3

void copystacks(Stacktype *s , Stacktype *s2);

int stacksize(Stacktype *s);


#endif // STACK_H_INCLUDED

















