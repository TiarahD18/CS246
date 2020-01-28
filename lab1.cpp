/******************************************
 * Lab 01: String Manipulation
 * Before you begin compile the code to
 * make sure the code is working properly.
 *****************************************/
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
#include <cstdio>
using namespace std;

std::string RandStr(int n)
{
    int l = (n <= 0)?(20):(n);
    std::string values = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*(){}:;,.?";
    std::string result = "";
    int m = values.length();
    for(int i = 0;i < l;i += 1)
    {
        result += values[rand() % m];
    }

    return result;
}

int main()
{

void validate(char *);
bool lower(char *, int size);
bool upper(char *, int size);


int main();

bool isUpper(const char *pass){
 
     bool upper;
     for (int i = 0; i < strlen(pass); i++)
     {
         upper = isupper(pass[i]);
         if (upper == true)
         {
             return true;
             break;
         }
     }
     return false;
 }

bool isLower(const char *pass){
 
     bool lower;
     for (int i = 0; i < strlen(pass); i++)
     {
         lower = islower(pass[i]);
         if (lower == true)
         {
             return true;
             break;
         }
     }
     return false;
  
}

int letterCount()
{
  std::string str (" ");
  std::cout << "The size of str is " << str.length() << " bytes.\n";
  return 0;
}

string toUpper(){

    char str[] = " ";
    cout << "The uppercase version of \"" << str << "\" is " << endl;
    for (int i=0; i<strlen(str); i++) {
        putchar(toupper(str[i]));
    }
    return 0;
}

string toLower(){
  char str[] = " ";
    cout << "The lowercase version of \"" << str << "\" is " << endl;
    for (int i=0; i<strlen(str); i++) {
        putchar(tolower(str[i]));
    }
    return 0;
}

string Substr(){
   
   
    string s1 = " "; 
    string r = s1.substr(1, 3);  
    cout << "String is: " << r; 
  
    return 0; 
 
}
}