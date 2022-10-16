#include <iostream>
#include <stdlib.h>
using namespace std;

struct AdtArr{
    int size;
    int usize;
    int *arr;
};

void create(struct AdtArr *a, int tsize, int uisize)
{
    a->size = tsize;
    a->usize = uisize;
    a->arr = (int *)malloc(tsize*sizeof(int));    
}

void show(struct AdtArr *a){

    for(int i = 0; i<a->usize; i++)
    {
        cout << (a->arr)[i] << endl;
    }

}

void insert(struct AdtArr *a)
{
    for(int i = 0; i<a->usize; i++)
    {
        cin >> a->arr[i];
    }
}

int main()
{
    cout << "create array : \n";
    struct AdtArr s1;
    create(&s1, 10, 3);
    cout << "insert elements : \n";
    insert(&s1);
    cout << "show elements : \n";
    show(&s1);
    return 0;
}