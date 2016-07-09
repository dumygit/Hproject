#include <string>
#include <iostream>  // cout
#include <fstream>   // file manip
#include "buf.pb.h"  // protobuf header
//#include "buf.pb.cc" // protobuf code

using namespace std;

/***** Func declarations *****/
void loadFile(int len, const char* str);
void ldFile(int len, const char* str);
void saveToBuffer(int len, const char* str, fstream& fs);
void testWrite();

/** Global Variables **/

const char* output = "output"; // arbitrary file to (read from)||(save to)
thread_msg::Thread_Data* tD;

/****************************  Functions *****************/

void saveToBuffer(int len, const char* str, fstream& fs)
{
	//GOOGLE_PROTOBUF_VERIFY_VERSION;

	cout << "saving to buffer.." << endl;
	fs << "files saved";
	tD->set_cluster(str, len);
}

void ldFile(int len, const char* str)
{
	fstream inp(output, ios::in | ios::binary);
	if(!inp.good())
	{
		cout << "inp.good #NOT" << endl;
	}else if (!tD->ParseFromIstream(&inp))
	{
		cout << "ParseFromIstream good #NOT" << endl;
	}else
	{
		cout << "all is well" << endl;
	}
}

/*
// loads the predefined arbitrary file "output"
// if it does not exist, it is created
// wrapper function for saveToBuffer()
void loadFile(int len, const char* str)
{
	fstream inp(output, ios::in | ios::binary); // loads file

	if (!tD->ParseFromIstream(&inp)){
		cout << "Failed to write thread_msg" << endl;
	}

	if(!inp.good())
	{
		// file does not exist - create file
		inp.open(output, ios::out);
		inp << "files saved";
		// Debug 
		//cout << "now? " << inp.good() << endl;
		//cout << inp << endl;
		
	}else // file exists - add data at the EoF
	{
		cout << inp.good() << endl;
		//inp.open(output, std::ios::app);
				
		inp.close();
		ofstream out;
		out.open(output, ios::out | std::ios::app);

		//out << endl;
//		out << "qfqf";
		//out << endl;
		//saveToBuffer(len, str, out);


		//cout << inp.good() << endl << inp << endl;
		
//	}
//	saveToBuffer(len, str, inp);

	cout << inp 
	inp.close();

}
*/

/*************************** Tests ***********************/
void testWrite()
{
	string str = "Tis a test";
	//loadFile(str.length(), str.c_str());
	//ldFile(str.length, str.c_str());
	cout << "1" << endl;
	fstream inp(output, ios::in | ios::binary);
	cout << "2" << endl;
	cout << inp << endl;
	if(!inp.good())
	{
		cout << "inp.good #NOT" << endl;
	}
	//inp.close();
	inp << "sdfsd" << endl;
	int temp = tD->cluster.ParseFromIstream(&inp);
	cout << "3" << endl;

	if (!temp)
	{
		cout << "temp #NOT" << endl;
	}

	{
		cout << "all is well" << endl;
	}
	cout << "last" << endl;
}

/*************************** Main ************************/
/*
int main()
{
	// test
	testWrite();

	return 0;
}
*/
