#include <stdio.h>
#include <string.h>
//max 90 bytes?
#define MAXLEN 100
#define TRX 1
#define BLK 2



int main(void) {
  char transaction_label[MAXLEN], payer[MAXLEN], payee[MAXLEN];
  int TID, amount, fee, event;//transaction ID
  
  //scanf("%u %s %i", unsigned_int, string, hex_int);
  scanf("%s %i %s %i %i", &transaction_label, &TID, &payer, &payee, &amount, &fee);

  // identify input
  if (strcmp(transaction_label, "TRX")){
    event = TRX;
  }else if(strcmp(transaction_label, "BLK")){
    event = BLK;
    
  }else{
    printf("error");
  }
//end input identification
  
  switch (event)
  printf("Hello World\n");
  return 0;
}