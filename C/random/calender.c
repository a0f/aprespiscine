#include <stdio.h>
#include <stdbool.h>

// point of program is to give it a date and then days to add and for it to return the date.

const int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leapcheck(int year)
{
  if (year % 4 != 0)
  {
    return false;
  }
  else if (year % 100 == 0 && year % 400 != 0)
  {
    return false;
  }
  return true;
  }

int get_monthdays(int index)
{
  int monthdays = days_in_month[index];

  return monthdays;
}

// just need to add leapcheck to this and it should be good
void add_days_to_date(int *dd, int *mm, int *yyyy, int days_left_to_add)
{ 

  int monthdays = get_monthdays(*mm);

  printf("%i\n", monthdays);

  while(days_left_to_add > 0)
  {
      if(*mm == 12 & *dd == monthdays)
      {
        *dd = 1;
        *mm = 1;
        monthdays = get_monthdays(*mm);

        *yyyy += 1;

        --days_left_to_add;
      }

      else if (*dd == monthdays && *mm == 2 && leapcheck(*yyyy) == true)
      {
        *dd = 1;
        *mm += 1;
        monthdays = get_monthdays(*mm);

        // double de-increment for leap year
        --days_left_to_add;
        --days_left_to_add;
      }
      
      else if (*dd == monthdays)
      {
      *dd = 1;
      *mm += 1;
      monthdays = get_monthdays(*mm);

      --days_left_to_add;
      }
      else 
      {
         ++*dd;
         --days_left_to_add;
      }
  }


}

int main() {
  int day;
  int month;
  int year;

  int *pday = &day;
  int *pmonth = &month;
  int *pyear = &year;

  int days_left_to_add;
  printf("Enter dd (dd/mm/yyyy): ");
  scanf("%d", &day);
  while(day < 0 || day > 31)
  {
    printf("Incorrect response, format is dd in digits (ie. 19)\n");
    printf("Enter dd (dd/mm/yyyy): ");
    scanf("%d", &day);
  }
  printf("Enter mm (dd/mm/yyyy): ");
  scanf("%d", &month);
  while(month < 0 || month > 12)
  {
  printf("Incorrect response, format is dd in digits (ie. 12)\n");
  printf("Enter mm (dd/mm/yyyy): ");
  scanf("%d", &month);
  }
  printf("Enter yyyy (dd/mm/yyyy): ");
  scanf("%d", &year);
  while(year < 0 || year > 9999)
  {
  printf("Incorrect response, format is yyyy in digits (ie. 1990): \n");
  printf("Enter yyyy (dd/mm/yyyy): ");
  scanf("%d", &year);
  }

  printf("Enter how many days you would like to add: ");
  scanf("%d", &days_left_to_add);
  while(days_left_to_add < 0)
  {
    printf("Incorrect response. Enter a positive interger: ");
    scanf("%d", &days_left_to_add);
  }

  leapcheck(year);

  printf("DEBUG: Start date: %i/%i/%i\n", day, month, year);
  add_days_to_date(pday, pmonth, pyear, days_left_to_add);  
  printf("DEBUG: End date: %i/%i/%i\n", day, month, year);


}
