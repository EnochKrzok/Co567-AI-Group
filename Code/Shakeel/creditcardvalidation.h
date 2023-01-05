#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class creditcardvalidation
{



// Return this number if it is a single digit, otherwise,
// return the sum of the two digits
int getDigit(int number)
{
  if (number < 9)
    return number;
  return number / 10 + number % 10;
}
 
// Return the number of digits in d
int getSize(std::int64_t d)
{
  string num = to_string(d);
  return num.length();
}
 
// Return the first k number of digits from
// number. If the number of digits in number
// is less than k, return number.
std::int64_t getPrefix(std::int64_t number, int k)
{
  if (getSize(number) > k)
  {
    string num = to_string(number);
    return stol(num.substr(0, k));
  }
  return number;
}
 
// Return true if the digit d is a prefix for number
bool prefixMatched(std::int64_t number, int d)
{
  return getPrefix(number, getSize(d)) == d;
}
 
// Get the result from Step 2
int sumOfDoubleEvenPlace(std::int64_t number)
{
  int sum = 0;
  string num = to_string(number) ;
  for (int i = getSize(number) - 2; i >= 0; i -= 2)
    sum += getDigit(int(num[i] - '0') * 2);
 
  return sum;
}
 
// Return sum of odd-place digits in number
int sumOfOddPlace(std::int64_t number)
{
  int sum = 0;
  string num = to_string(number) ;
  for (int i = getSize(number) - 1; i >= 0; i -= 2)
    sum += num[i] - '0';
  return sum;
}
 
// Return true if the card number is valid
public:bool isValid(std::int64_t number)
{
  return (getSize(number) >= 13 &&
          getSize(number) <= 16) &&
    (prefixMatched(number, 4) ||
     prefixMatched(number, 5) ||
     prefixMatched(number, 37) ||
     prefixMatched(number, 6)) &&
    ((sumOfDoubleEvenPlace(number) +
      sumOfOddPlace(number)) % 10 == 0);
}


void is_valid_Run()
{
// If the credit card number is valid, check the expiration month
    // If the credit card number is not valid, prompt the user to enter a new number
    // tested on card number 5196081888500645
 std::int64_t cardnumber;
std::cout << "Please enter credit card number." << std::endl;
     cin >> cardnumber;


  if(isValid(cardnumber)==true)
  {
    cout << cardnumber << " credit card number is " << "valid"<<std::endl;
    check_Month();
  }
  else
  {
    cout << cardnumber << " credit card is " << "invalid"<<std::endl;
    cardnumber=0;
    is_valid_Run();
  }
}

void check_Month()
{
  // Prompts the user to enter the expiration month of the credit card
    // If the month is between 1 and 12 (inclusive), check the expiration year
    // If the month is not between 1 and 12, prompt the user to enter a new month
    // checking month between 1 and 12
    std::cout << "Please enter expiry date month." << std::endl;
    int month = 0;
    std::cin >> month;
    if (month >= 1 && month <= 12) {
        std::cout << "The month is accepted." << std::endl;
        check_Year();
    } else {
        std::cout << "The month is not accepted." << std::endl;
        check_Month();
    }
    
}

void check_Year()
{
  // Prompts the user to enter the expiration year of the credit card
    // If the year is between 23 and 27 (inclusive), check the CVV
    // If the year is not between 23 and 27, prompt the user to enter a new year
    // usialy credit card have 4 to 5 years of expiry
    std::cout << "Please enter expiry date year like 23,24,25 and 26." << std::endl;
    int year = 0;
    std::cin >> year;
    if (year >= 23 && year <= 27) {
        std::cout << "The year is accepted." << std::endl;
        check_CVV();
    } else {
        std::cout << "The year is not accepted." << std::endl;
        check_Year();
    }
    
}


void check_CVV()
{
  // Prompts the user to enter the CVV of the credit card
    // If the CVV is between 100 and 999 (inclusive), accept the credit card
    // If the CVV is not between 100 and 999, prompt the user to enter a new CVV
    // usialy credit card have length 3 cvv number
    std::cout << "Please enter 3 digit CVV usualy on card back side." << std::endl;
    int cvv = 0;
    std::cin >> cvv;
    if (cvv >= 100 && cvv <= 999) {
        std::cout << "The cvv is accepted." << std::endl;
        std::cout << "Your card successfully accepted." << std::endl;
    } else {
        std::cout << "The cvv is not accepted." << std::endl;
        check_CVV();
    }
    
}

};