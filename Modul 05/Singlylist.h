#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED
#include <iostream>

using namespace std;

typedef int infotype;
struct ElmList;
typedef ElmList* address;

struct ElmList{
    infotype info;
    address next;
};

struct List{
    address First;
};

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

address findElm(List L, infotype x);
int sumInfo(List L);

#endif