#include <iostream>
#include "Main.h"
#include <fstream>
#include "Database.h"


int main() {
    std::cout << "Hello" << std::endl;
	// initialize the database
	Database::initialize();

	// This logic is highly simplified based on iteration 1 requirements and 
	// the assumption that the programs are valid.

	//Test data for user tabole
	string username = "Wong Chen";
	string password = "password123";
	string email = "wong@abc.com";
	Database::insertUser(username, password, email);
	username = "Zhong Chen";
	password = "abcdef";
	email = "Zhong@abc.com";
	Database::insertUser(username, password, email);
	username = "Li Jia";
	password = "hahahahahaha";
	email = "Li@abc.com";
	Database::insertUser(username, password, email);

	//test data for request table
	string url = "www.hackUrAccount.com";
	string raiseUser = "Li Jia";
	Database::insertRequest(url, raiseUser);

	//test change password
	string newpasssord = "This is newpassword1";
	
	Database::changePassword(raiseUser, "This is newpassword1");
	Database::changePassword(raiseUser, "This is newpassword2");
	Database::changePassword(raiseUser, "This is newpassword3");
	Database::changePassword(raiseUser, "This is newpassword4");
	Database::changePassword(raiseUser, "This is newpassword5");
	Database::changePassword(raiseUser, "This is newpassword6");
	Database::changePassword(raiseUser, "This is newpassword7");
	

    return 0;
}