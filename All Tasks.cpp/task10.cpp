#include <iostream>
#include <string>
using namespace std;
string tenToText(int num);
string getNumberToText(int num);
main()
{
int number;
cout << "Enter a number (1-99): "; cin >> number;
cout << getNumberToText(number);
}
string getNumberToText(int num)
{
 string number;
if ((num > 0) && (num < 10)) number = tenToText(num);
if (num == 10) number = "Ten";
if (num == 11) number = "Eleven";
if (num == 12) number = "Twelve";
if (num == 13) number = "Thirteen";
if (num == 14) number = "Fourteen";
if (num == 15) number = "Fifteen";
if (num == 16) number = "Sixteen";
if (num == 17) number = "Seventeen";
if (num == 18) number = "Eighteen";
if (num == 19) number = "Nineteen";
if ((num >= 20) && (num < 30)) number = "Twenty" + tenToText(num % 10);
if ((num >= 30) && (num < 39)) number = "Thirty" + tenToText(num % 10);
if ((num >= 40) && (num < 49)) number = "Fourty" + tenToText(num % 10);
if ((num >= 50) && (num < 59)) number = "Fifty" + tenToText(num % 10);
if ((num >= 60) && (num < 69)) number = "Sixty" + tenToText(num % 10);
if ((num >= 70) && (num < 79)) number = "Seventy" + tenToText(num % 10);
if ((num >= 80) && (num < 89)) number = "Eighty" + tenToText(num % 10);
if ((num >= 90) && (num < 99)) number = "Ninety" + tenToText(num % 10);
return number;
}
string tenToText(int num)
{
string number;
if (num == 0) number = "";
if (num == 1) number = "One";  
if (num == 2) number = "Two";
if (num == 3) number = "Three";
if (num == 4) number = "Four";
if (num == 5) number = "Five";
if (num == 6) number = "Six";
if (num == 7) number = "Seven";
if (num == 8) number = "Eight";
if (num == 9) number = "Nine";
return number;
}
