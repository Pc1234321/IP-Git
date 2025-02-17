#pragma once

#include <string>
#include <vector>
#include "sqlite3.h"
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

// The Database has to be a static class due to various constraints.
// It is advisable to just add the insert / get functions based on the given examples.
class Database {
public:
	// method to connect to the database and initialize tables in the database
	static void initialize();

	// method to close the database connection
	static void close();

	// insert methods
	static void insertUser(string username, string password, string email);
	static void insertPassword(int user_id, string used_password);
	static void overwritePassword(int user_id, string used_password); // function to use when change password
	static void insertRequest(string url, string username);

	// get methods
	static int getUserIdByUsername(const string& username);

	static void exportApprovedURLs();

	// set methods
	static void changePassword(const string& username, const string& newPassword);


	


private:
	// the connection pointer to the database
	static sqlite3* dbConnection; 
	// a vector containing the results from the database
	static vector<vector<string>> dbResults; 
	// the error message from the database
	static char* errorMessage;
	// callback method to put one row of results from the database into the dbResults vector
	// This method is called each time a row of results is returned from the database
	static int callback(void* NotUsed, int argc, char** argv, char** azColName);
};

