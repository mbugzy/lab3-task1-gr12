/* main.c */
#include <stdio.h>
#include <string.h>

int countLetter(char *str, char letter) {
  int count = 0;
  for (int i = 0; i < strlen(str); i++)
    if (str[i] == letter)
      count++;
  return count;
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: ./main <letter>\n");
    return 1;
  }
  char *str = argv[1];
  char letter;
  printf("Enter letter to count: ");
  scanf("%c", &letter);
  printf("Letter %c occurs %d times\n", letter, countLetter(str, letter));
  return 0;
}
