//
// Created by Henry on 2022-05-16.
//
#define _CRT_SECURE_NO_WARNINGS

#ifndef ASSN1_TRANSACTIONS_H
#define ASSN1_TRANSACTIONS_H
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#define MAXLEN 100

typedef struct transaction {//node
    struct transaction* next;
    char label[MAXLEN];
    int TID;
    char payer[MAXLEN];
    char payee[MAXLEN];
    int amount;
    int fee;

} transaction_t;

typedef struct mempool {//list
    transaction_t* head;
    transaction_t* tail;
} mempool_t;

extern mempool_t* mempool_new();
extern void mempool_add(mempool_t* mempool, int TID, char* payer, char* payee, int amount, int fee);//no return type
extern int mempool_contains(mempool_t* mempool, char* word);
extern void print_transaction(transaction_t*);
extern transaction_t* remove_transaction(transaction_t* head);



#endif //ASSN1_TRANSACTIONS_H
