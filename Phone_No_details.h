#pragma once
#include"Common.h"

struct connection
{
	const std::string server = "tcp://127.0.0.1:3305"; // or change to 3306 if default
	const std::string username = "root";
	const std::string password = "password";
	sql::Driver* driver;
	sql::Connection* con;
	sql::Statement* stmt;
	sql::PreparedStatement* pstmt;
	sql::ResultSet* res;
	std::vector<sql::ResultSet*> res_vector;
};
struct county_code_detail
{
	std::vector<int> code_no;
	std::vector<std::string> country_name;
};
class Phone_No_Details
{ 
	connection connector;
	std::map<int, std::string> Country_Detail_map;
	county_code_detail Country_obj;
public:
	void connect();
	void install_contry_code_table();
	void checking_country_code(const std::string &str, int n );
	void installation_and_checking(const std::string& str,int code_length);
};

