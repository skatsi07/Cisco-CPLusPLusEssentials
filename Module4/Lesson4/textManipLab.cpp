#include <string>
#include <iostream>

int main()
{
    std::string password;
    std::getline(std::cin, password);

    bool validPassword = true;

    //check password 8 char long
    if (password.length() < 8) {
        std::cout << "The password must be 8 characters long" << std::endl;
        validPassword = false;
    }

    //check it has at least 1 upper case letter
    bool hasUpper = false;
    for (int i = 0; i < password.length(); i++) {
        if (isupper(password[i])) {
            hasUpper = true;
            break;
        }
    }
    if (!hasUpper) {
        std::cout << "The password must contain at least one uppercase letter" << std::endl;
        validPassword = false;
    }

    //check it has one lower case letter
    bool hasLower = false;
    for (int i = 0; i < password.length(); i++) {
        if (islower(password[i])) {
            hasLower = true;
            break;
        }
    }
    if (!hasLower) {
        std::cout << "The password must contain at least one lowercase letter" << std::endl;
        validPassword = false;
    }

    //check it has at least one digit
    bool hasDigit = false;
    for (int i = 0; i < password.length(); i++) {
        if (isdigit(password[i])) {
            hasDigit = true;
            break;
        }
    }
    if (!hasDigit) {
        std::cout << "The password must contain at least one digit" << std::endl;
        validPassword = false;
    }

    //check it has at least one special char
    bool hasSpecial = false;
    for (int i = 0; i < password.length(); i++) {
        if (!isalnum(password[i])) {
            hasSpecial = true;
            break;
        }
    }
    if (!hasSpecial) {
        std::cout << "The password must contain at least one special character" << std::endl;
        validPassword = false;
    }

    if (validPassword) {
        std::cout << "Password is valid" << std::endl;
    }

    return 0;
}