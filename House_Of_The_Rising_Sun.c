#include <stdio.h>
#include <string.h>

int main() {
  const char *houseOfTheRisingSun;

  if (strcmp(houseOfTheRisingSun, "Line One") == 0) {
    printf("Well, mother, tell your children");
  }
  else if (strcmp(houseOfTheRisingSun, "Line Two") == 0) {
    printf("Not to do what I have done");
  }
  else if (strcmp(houseOfTheRisingSun, "Line Three") == 0) {
    printf("Spend your lives in sin and misery");
  }
  else if (strcmp(houseOfTheRisingSun, "Line Four") == 0) {
    printf("In the house of the Rising Sun");
  }

  return 0;
}
