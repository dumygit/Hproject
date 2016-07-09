#include <iostream>  // cout
#include <fstream>   // file manip
#include "buf.pb.h"  // protobuf header
//#include "buf.pb.cc" // protobuf code

using namespace std;

/***** Func declarations *****/
void ldFile(int len, const char* str);

/** Global Variables **/

const char* output = "output"; // arbitrary file to (read from)||(save to)
thread_msg::Thread_Data* tD;   // pointer to msg

/****************************  Functions *****************/
void ldFile(size_t len, const char* str)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	cout << "1" << endl;
	ifstream inp(output, ios::in | ios::binary); //load file if exists
	cout << "1" << endl;
	if(!inp.good())
	{
		cout << "inp.good #NOT" << endl;
		inp.open(output, ios::out);   // file does not exist - create file
		cout << inp << endl;
		//inp.close();
	}
	cout << "1" << endl;
	cout << inp << endl;
	if (!tD->ParseFromIstream(&inp))
	{
		cout << "ParseFromIstream good #NOT" << endl;
	}//else

	{
		cout << "all is well" << endl;
		cout << "str : " << str << endl;
		cout << "len : " << len << endl;
		tD->set_cluster(str);//, len);   // save the new data to a message
		cout << "aaa" << endl;
		fstream out(output, ios::out | ios::app | ios::binary); // open file to store output
		if(!out.good())
		{
			cout << "out.good #NOT" << endl;
		}else if (!tD->SerializeToOstream(&out)) 
		{
                	cout << "SerializeToOstream good #NOT" << endl;
    		}else{
			cout << "Saved Message to File successfully" << endl;
		}
		out.close();
	}

	// Optional:  Delete all global objects allocated by libprotobuf. - from protobuf Documentation
	google::protobuf::ShutdownProtobufLibrary();
}

/*************************** dummy Main for testing only ************************/
/*
int main()
{
	// test
	const char * str = "Hello Protobuf.";
	ldFile(strlen(str), str);

	return 0;
}
//*/
