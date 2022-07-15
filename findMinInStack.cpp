/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Stack
{
    private:
    struct stack_node
    {
        int val;
        stack_node *next;
    };
    stack_node *top;
    stack_node *min_top;
    public:
    Stack() {
    top=nullptr;
    min_top=nullptr;
    }
    void push(int num)
    {
        stack_node *new_node=nullptr;
        new_node=new stack_node;
        new_node->val=num;
        if(is_empty())
        {
            top=new_node;
            new_node->next=nullptr;
            min_top=new_node;
        }
        else
        {
            new_node->next=top;
            top=new_node;
            if(new_node->val<=min_top->val) {
                new_node->next=min_top;
                min_top=new_node;
            }
        }
    }
    void pop(int &num)
    {
        stack_node *temp_node=nullptr;
        stack_node *min_tmp =nullptr;
        if(is_empty())
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        else
        {
            num=top->val;
            if(top->val == min_top->val)
            {
                min_tmp=min_top->next;
                delete min_top;
                min_top=min_tmp;
            }
            temp_node=top->next;
            delete top;
            top=temp_node;
        }
    }
    bool is_empty()
    {
        return !top;
    }
    void get_min(int &item)
    {
        item= min_top->val;
    }
};
int main()
{
#if 0
    int n=100; //0110 0100
    int temp1, temp2;
    temp1=n&0x0f;
    temp2=(n&0xf0)>>4;
    cout<<temp1<<endl<<temp2<<endl;;
    cout<<"Hello World";
#endif 
    int pop, min_el;
    Stack my_stack;

    my_stack.push(4);
    my_stack.push(6);
    my_stack.push(88);
    my_stack.push(1);
    my_stack.push(234);
    my_stack.push(2);

    my_stack.get_min(min_el);
    cout << "Min: " << min_el << endl;

    my_stack.pop(pop);
    cout << "Popped stock element: " << pop << endl;

    my_stack.pop(pop);
    cout << "Popped stock element: " << pop << endl;

    my_stack.pop(pop);
    cout << "Popped stock element: " << pop << endl;

    my_stack.get_min(min_el);
    cout << "Min: " << min_el << endl;


    return 0;
}
