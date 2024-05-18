#include <iostream>
using namespace std;

// uppercase, lowercase, swapcase

/**
 * This function takes a string as input and performs one of three operations based on user input.
 * The operations are uppercase, lowercase, and swapcase.
 *
 * The function asks the user to input an operation, and then iterates over each character in the input string.
 * For each character, it checks the operation and performs the appropriate operation.
 *
 * If the operation is 'uppercase', it checks if the character is lowercase. If it is, it converts it to uppercase.
 * If it is already uppercase, it prints a message saying that the uppercase character will be ignored.
 *
 * If the operation is 'lowercase', it checks if the character is uppercase. If it is, it converts it to lowercase.
 * If it is already lowercase, it prints a message saying that the lowercase character will be ignored.
 *
 * If the operation is 'swapcase', it converts the character to the opposite case (uppercase if it is lowercase, lowercase if it is uppercase).
 *
 * Finally, it returns the resulting string.
 *
 * @param str The string to be processed.
 * @return The resulting string after the operation.
 */
string upper_lower_swap(string str)
{
    string op = "", result = "";
    cout << "Choose an operation: (uppercase | lowercase | swapcase) : ";
    // ask the user for the operation
    cin >> op;
    for (int i = 0; i < str.length(); i++)
    {
        if (op == "uppercase")
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                // convert lowercase to uppercase
                result += char(int(str[i]) - 32);
            }
            else
            {
                // if character is already uppercase, ignore it
                cout << "Uppercase Character Has Been Found. Uppercase characters will be ignored" << endl;
            }
        }
        else if (op == "lowercase")
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                // convert uppercase to lowercase
                result += char(int(str[i]) + 32);
            }
            else
            {
                // if character is already lowercase, ignore it
                cout << "Lowercase Character Has Been Found. Lowercase characters will be ignored" << endl;
            }
        }
        else if (op == "swapcase")
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                // convert uppercase to lowercase
                result += char(int(str[i]) + 32);
            }
            else
            {
                // convert lowercase to uppercase
                result += char(int(str[i]) - 32);
            }
        }
    }
    return result;
}

int main()
{
    cout << upper_lower_swap("UpPer"); // uPpER
    return 0;
}