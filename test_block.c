
#include "transactions.h"
#include "siggen.h"
//test create a pool and add a transaction with a label and print

int main() {
    int ID;
    int previous_ID;
    int num_transaction;
    unsigned char previous_sign;

    unsigned char nonce;
    unsigned char sign;
    printf("enter int ID       previous_ID    previous_sign     nonce    sign \n");//sign is generated by siggen.c
    scanf("%i %i 0x%8.8x %i 0x%8.8x 0x%8.8x", &ID, &previous_ID, &previous_sign, &num_transaction, &nonce, &sign);

  //may 19
  FILE * infile = NULL;
  infile = fopen("test.text","r");
char string[MAXLEN];
  while (fgets(string, MAXLEN, infile) > 0){
    //three parts, 
  }
  
  mempool_t *mempool = mempool_new();
  mempool_add(mempool, TID, payer, payee, amount, fee);
  
  printf("removing transaction:");
  remove_transaction(mempool->head);//remove transaction at the head
  print_transaction(mempool->head);//may need transaction number or TID?
  /*generate sig*/
   sig = siggen_new();              // start a new signature
  printf("Blockmined: %i 0x%8x %i"ID, previous_ID, previous_sign, num_transaction);
   sig = siggen_int(sig, id);
   sig = siggen_int(sig, prev_id);
   sig = siggen_int(sig, prev_sig);
   sig = siggen_int(sig, num_transactions);
  
 // for t in block_transactions:
   sig = siggen_int(sig, t.id);
   sig = siggen_string(sig, t.payer);
   sig = siggen_string(sig, t.payee);
   sig = siggen_int(sig, t.amount);
   sig = siggen_int(sig, t.fee);
 
 * sig = siggen_int(sig, nonce);           //  full signature is computed
  printf("%x %x", nounce, sign);

  

    //fscanf("%s %d", &label, &TID);
    return 0;
}