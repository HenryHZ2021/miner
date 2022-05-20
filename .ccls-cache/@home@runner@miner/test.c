
#include "transactions.h"
//test create a pool and add a transaction with a label and print

int main1() {
    char label[MAXLEN];
    char payer[MAXLEN], payee[MAXLEN];
    int TID, amount, fee, event;//transaction ID
    printf("enter TID payer,  payee,  amount,  fee\n");
    scanf("%i %s %s %i %i",  &TID, &payer, &payee, &amount, &fee);
    //fscanf("%s %d", &label, &TID);
    mempool_t *mempool = mempool_new();
    mempool_add(mempool, TID, payer, payee, amount, fee);
    print_transaction(mempool->head);
    return 0;
}