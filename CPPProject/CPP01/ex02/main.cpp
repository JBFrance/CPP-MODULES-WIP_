//
// Created by Joshua Franceschi on 10/28/23.
//
# include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *string_ptr= &string;
    std::string &string_ref= string;

    std::cout << "string address: " << &string << std::endl;
    std::cout << "stringPTR address: " << string_ptr << std::endl;
    std::cout << "stringREF address: " << &string_ref << std::endl;

    std::cout << "__________________________________" << std::endl;
    std::cout<< "" << std::endl;

    std::cout << "string value: " << string << std::endl;
    std::cout << "stringPTR value: " << *string_ptr << std::endl;
    std::cout << "stringREF value: " << string_ref << std::endl;
    return 0;
}