// sql_c++_try1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Phone_No_details.h"

//for demonstration only.never save your password in the code!
//const string server = "tcp://127.0.0.1:3305"; // or change to 3306 if default
//const string username = "root";
//const string password = "password";

int main()
{
    Phone_No_Details ph_obj;
    ph_obj.connect();
    //ph_obj.install_contry_code_table();
    int coutry_code_no_length;
    std::string phone_no;
    std::cout << "enter the phone no" << std::endl;
    std::cin >> phone_no;
    std::cout << "enter the coutry_code_length no" << std::endl;
    std::cin >> coutry_code_no_length;
    ph_obj.installation_and_checking(phone_no, coutry_code_no_length);

    //std::cout << "enter the coutry_code_length no" << std::endl;
    //std::cin >> coutry_code_no_length;
   // ph_obj.checking_country_code(phone_no, coutry_code_no_length);
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
