#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
 char message[200];
 char lowerMessage[200];
 char *badWords[] = {"stupid", "fool", "idiot", "badword"};
 int found = 0;
 printf("Enter your WhatsApp message: ");
 fgets(message, sizeof(message), stdin);
 // Make a lowercase copy of the message
 for (int i = 0; message[i]; i++) {
 lowerMessage[i] = tolower(message[i]);
 lowerMessage[i+1] = '\0';
 }
 // Check for bad words
 for (int i = 0; i < 4; i++) {
 if (strstr(lowerMessage, badWords[i]) != NULL) {
 found = 1;
 break;
 }
 }
 // Show result
 if (found) {
 printf("\n■■ Warning: Your message contains bad language!\n");
 } else {
 printf("\n■ Your message is clean.\n");
 }
 return 0;
}
