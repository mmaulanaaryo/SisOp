#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define first(L) (L).first
#define next(P) (P)->next

typedef data_MK infotype;
typedef data_mhs infotype;
typedef struct elmList *adr;

struct data_MK {
    string nama_MK;
    string kelas;
    int kuota_max;
    int jumlah;
    string jenis_mhs;
};

struct data_mhs {
    string nama;
    char nim;
    string kelas;
    string jenis_mhs;
};

struct elmList {
    infotype info;
    adr next;
    adr prev;
};

struct List {
    adr first;
    adr last;
};

void createList(List &L);
void insertFirst(List &L, adr P);
void insertLast(List &L, adr P);
void insertAfter(adr prec, adr P);
void deleteFirst(List &L, adr P);
void deleteLast(List &L, adr P)

#endif // HEADER_H_INCLUDED
