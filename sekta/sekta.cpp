#include <iostream>
using namespace std;

struct Node
{
    int Id;
    int Order;
    int OrderReverse;
    Node *Next = nullptr;
};

struct Test
{
    unsigned int AmountOfPeople;
    int WantedId;
    Node *Killed = nullptr;
};

void showList(Node *Current)
{
    Node *El;
    El = Current;
    do
    {
        cout << El->Id << " " << endl;
        El = El->Next;
    } while (El != Current);
}

void LoadTest(Test *test)
{
    cin >> test->AmountOfPeople;
    cin >> test->WantedId;
}

void SolveTest(Test *test)
{
    int Amount = test->AmountOfPeople;
    test->Killed = new Node[Amount];
    Node *Current;
    Node *First;
    Node *Killer;

    Current = nullptr;
    First = nullptr;
    Killer = nullptr;

    //creating a reverse list

    Node *NewNode = new Node;
    NewNode->Id = 1;
    Current = NewNode;
    First = Current;
    Current->Next = First;

    Killer = First;

    for (int i = 2; i <= test->AmountOfPeople; i++)
    {
        Node *NewNode = new Node;
        NewNode->Id = i;
        NewNode->Next = Current->Next;
        Current->Next = NewNode;
        Current = NewNode;
    }

    //deleting nodes

    int counter = 0;
    int counterReverse = test->AmountOfPeople;
    while (Killer != Killer->Next)
    {
        Node *temp;
        temp = Killer->Next;
        if (Killer->Next == First)
            First = Killer->Next->Next;
        Killer->Next = Killer->Next->Next;
        Killer = Killer->Next;
        temp->Order = counter + 1;
        temp->OrderReverse = -counterReverse;
        test->Killed[counter] = *temp;
        delete[] temp;
        counter++;
        counterReverse--;
    }

    //adding survivor to array

    First->Order = test->AmountOfPeople;
    First->OrderReverse = -1;
    test->Killed[test->AmountOfPeople - 1] = *First;

    //displaying final result

    for (int i = 0; i < test->AmountOfPeople; i++)
    {
        if (test->Killed[i].Order == test->WantedId || test->Killed[i].OrderReverse == test->WantedId)
        {
            cout << test->Killed[i].Id << endl;
        }
    }

    delete[] test->Killed;
    delete[] First;
}

int main()
{
    int AmountOfTests;
    cin >> AmountOfTests;
    Test *tests = new Test[AmountOfTests];
    Test *tempoPtr = nullptr;

    for (int i = 0; i < AmountOfTests; i++)
    {
        tempoPtr = &tests[i];
        LoadTest(tempoPtr);
    }

    for (int i = 0; i < AmountOfTests; i++)
    {
        tempoPtr = &tests[i];
        SolveTest(tempoPtr);
    }
    delete[] tests;
    return 0;
}