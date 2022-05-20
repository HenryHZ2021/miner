#include "transactions.h"



extern mempool_t* mempool_new() {//create a new linkmempool
    mempool_t* mempool = calloc(1, sizeof(mempool_t));//allocate memory for the structure, initiallize memory to zero
    assert(mempool != NULL);
    return mempool;
}

extern void mempool_add(mempool_t* mempool, int TID, char* payer, char* payee, int amount, int fee) {
    transaction_t* transaction = calloc(1, sizeof(transaction_t));

    assert(mempool != NULL);
    assert(transaction != NULL);

    /*adding data*/
    //strcpy(transaction->label,label);
    transaction->TID = TID;
    strcpy(transaction->payer, payer);
    strcpy(transaction->payee, payee);
    transaction->amount = amount;
    transaction->fee = fee;

    if (mempool->head == NULL) {
        mempool->head = transaction;
        mempool->tail = transaction;
    }
    else {
        mempool->tail->next = transaction;

    }
    mempool->tail = transaction;
}

extern transaction_t* remove_transaction(transaction_t* head) {
    transaction_t* current_transaction = head;
    transaction_t* prev_transaction;
    int cnt = 0;

    head = current_transaction->next;

    prev_transaction = current_transaction;
    current_transaction = current_transaction->next;

    return(head);
}

extern void print_transaction(transaction_t* head) {
    transaction_t* current_transaction = head;
    while (current_transaction != NULL) {
        printf("%i ", current_transaction->TID);
        printf("%s ", current_transaction->payer);
        printf("%s ", current_transaction->payee);
        printf("%i ", current_transaction->amount);
        printf("%i ", current_transaction->fee);

        current_transaction = current_transaction->next;
    }
}





//extern int mempool_contains(mempool_t *mempool,char *word) {
//    assert(mempool !=NULL);
//    assert(word !=NULL);
//
//    for(transaction_t *ptr = mempool ->head;ptr !=NULL;ptr =ptr->next){
//        if(!strcmp(word,ptr->word)){//strcmp(word, ptr-word) == 0;0 the samne
//        return 1;
//        }
//    }
//    return 0;
//}
