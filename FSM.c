/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


typedef enum {
    Idle_State,
    Card_Insert_State,
    Pin_Entered_State,
    Option_Selected_State,
    Amount_Entered_State,
    last_State
}enumState;

typedef enum {
    Card_Insert_Event,
    Pin_Enter_Event,
    Option_Select_Event,
    Amount_Enter_Event,
    Amount_Dispatch_Event,
    last_Event
}EnumEvent;


typedef enumState (*const afEventHandler[last_State][last_Event])(void);

typedef enumState (*pfEventHandler)(void*);

enumState AmountDispatchHnadler(void) {
    printf("In AmountDispatchHnadler\n");
    return Idle_State;
}

enumState EnterAmountHandler(void) {
    printf("In EnterAmountHandler\n");
    return Amount_Entered_State;
}

enumState OptionSelectHandler(void) {
    printf("OptionSelectHandler\n");
    return Option_Selected_State;
}

enumState EnterPinHandler(void) {
    printf("EnterPinHandler\n");
    return Pin_Entered_State;
}

enumState InsertCardHandler(void) {
    printf("InsertCardHandler\n");
    return Card_Insert_State;
}
EnumEvent ReadEvent()
{
    int  inEvent;
    printf("Enter the Event \n");
    scanf("%d\n", &inEvent);
    printf("Entered Event is %d\n", inEvent);
    return inEvent;
}

int main()
{
    enumState eNextState =Idle_State;
    EnumEvent eNextEvent;
    static afEventHandler stateMachine=
    {
        [Idle_State]={[Card_Insert_Event]=InsertCardHandler},
        [Card_Insert_State]={[Pin_Enter_Event]=EnterPinHandler},
        [Pin_Entered_State]={[Option_Select_Event]=OptionSelectHandler},
        [Option_Selected_State]={[Amount_Enter_Event]=EnterAmountHandler},
        [Amount_Entered_State]={[Amount_Dispatch_Event]=AmountDispatchHnadler}
    };
    while(1)
    {
        EnumEvent eNewEvent = ReadEvent();
        printf("Entered Event is : %d\n",eNewEvent );
        if( (eNextState<last_State) && (eNewEvent < last_Event) && stateMachine[eNextState][eNextEvent]!=NULL)
        {
            eNextState = (*stateMachine[eNextState][eNewEvent])();
        }
        else
        {
            //Invalid 
        }
    }
    return 0;
}
