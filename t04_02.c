// Gideon Benedictus Panjaitan
// 11S24036

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {

char kata[20];
fgets(kata, 20, stdin);
kata[strlen(kata) - 1] = '\0';
int panjang = strlen(kata);

for (int i = 0; i < panjang ; i++)
{printf("%03d",kata[i]);}

  return 0;
}
