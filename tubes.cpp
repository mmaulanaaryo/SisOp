#include "header.h"

void createList(List &L) {
    first(L) = NULL;
}

void insertFirst(List &L, adr P) {
    if (first(L) != NULL && Last(L) != NULL) {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    } else {
        first(L) = P;
        last(L) = P;
    }
}

void insertAfter(adr prec, adr P) {
    next(P) = next(prec);
    prev(P) = prec;
    prev(next(prec)) = P;
    next(prec) = P;
}

void insertLast(List &L, adr P) {
    prev(P) = last(L);
    next(last(L)) = P;
    last(L) = P;
}

void deleteFirst(List &L, adr P) {
    P = first(L);
    if (first(L) != last(L)) {
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    } else {
        first(L) = NULL;
        last(L) = NULL;
    }
}

void deleteLast(List &L, adr P) {
    P = last(L);
    last(L) = prev(last(L));
    prev(P) = NULL;
    next(last(L)) = NULL;
}

void deleteAfter(adr prec, adr P) {
    P = next(prec);
    next(prec) = next(P);
    prev(next(P)) = prec;
    prev(P) = NULL;
    next(P) = NULL;
}
