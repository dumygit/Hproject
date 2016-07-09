#include <string>
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
void ldFile(int len, const char* str)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	fstream inp(output, ios::in | ios::binary); //load file if exists
	if(!inp.good())
	{
		cout << "inp.good #NOT" << endl;
		inp.open(output, ios::out);   // file does not exist - create file
		inp.close();
	}else if (!tD->ParseFromIstream(&inp))
	{
		cout << "ParseFromIstream good #NOT" << endl;
	}else
	{
		cout << "all is well" << endl;
		tD->set_cluster(str, len);   // save the new data to a message
		fstream out(output, ios::out | std::ios::app | ios::binary); // open file to store output
		if(!out.good())
		{
			cout << "out.good #NOT" << endl;
			// may be superfluous since it should have been created above - added to be safe.
			// may end up being source of missing input
			out.open(output, ios::out);   // file does not exist - create file
			out.close();
		}
		
		if (!tD->SerializeToOstream(&out)) 
		{
                	cout << "SerializeToOstream good #NOT" << endl;
    		}else{
			cout << "Saved Message to File successfully" << endl;
		}
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
