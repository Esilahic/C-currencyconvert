#include <stdio.h>

int main() {
  float amount;
  float dollar, euro, bosmark, swedkrona;
  int selection;

  printf("Amount to convert? \n");
  scanf("%f", &amount);

  printf("Which currency is the amount specified in? \n");

  printf("Enter 1 for Dollars\n");
  printf("Enter 2 for Euros\n");
  printf("Enter 3 for Bosnian Marks\n");
  printf("Enter 4 for Swedish Krona\n");
  scanf("%d", &selection);

  switch (selection) {
  case 1:
    euro = amount * 0.91;
    printf("%.2f Dollars are ~%.2f Euro\n", amount, euro);

    bosmark = amount * 1.78;
    printf("%.2f Dollars are ~%.2f Bosnian Marks\n", amount, bosmark);

    swedkrona = amount * 10.02;
    printf("%.2f Dollars are ~%.2f Swedish Krona\n", amount, swedkrona);

    break;

  case 2:
    dollar = amount * 1.10;
    printf("%.2f Euros are ~%.2f Dollars\n", amount, dollar);

    bosmark = amount * 1.96;
    printf("%.2f Euros are ~%.2f Bosnian Marks\n", amount, bosmark);

    swedkrona = amount * 11.03;
    printf("%.2f Euros are ~%.2f Swedish Krona\n", amount, swedkrona);

    break;

  case 3:
    dollar = amount * 0.56;
    printf("%.2f Bosnian Marks are ~%.2f Dollars\n", amount, dollar);

    euro = amount * 0.51;
    printf("%.2f Bosnian Marks are ~%.2f Euros\n", amount, euro);

    swedkrona = amount * 5.64;
    printf("%.2f Bosnian Marks are ~%.2f Swedish Krona\n", amount, swedkrona);

    break;

  case 4:
    dollar = amount * 0.56;
    printf("%.2f Swedish Krona are ~%.2f Dollars\n", amount, dollar);

    euro = amount * 0.51;
    printf("%.2f Swedish Krona are ~%.2f Euros\n", amount, euro);

    bosmark = amount * 5.64;
    printf("%.2f Swedish Krona are ~%.2f Bosnian Marks\n", amount, bosmark);

    break;

  default:
    printf("Incorrect Selection\n");
  }

  return 0;
}
