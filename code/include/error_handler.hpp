/*************************************************************************************************************************************\
|
|		Error Handler - This file handles the errors from all the created code files.
|
\*************************************************************************************************************************************/

using namespace std;

//	Standard libraries
#include <sstream>
#include <iostream>
#include <cstdint>

//  Non-Standard headers and libraries
#include "system_defines.h"

<<<<<<< HEAD
enum class ErrorLevel{
//	System Error Levels
	ERROR_FILE_LOAD
}
enum class WarningLevel{
//	System Warning Levels
	WARNING_ORGANISM_SIZE_MISMATCH,
	WARNING_NEURONAL_SIZE_MISMATCH,
	WARNING_CONNEXION_SIZE_MISMATCH,
	WARNING_SYNAPSE_SPIKING_SIZE_MISMATCH,
	WARNING_SYNAPSE_NONSPIKING_SIZE_MISMATCH,
	WARNING_SYNAPSE_ELECTRICAL_SIZE_MISMATCH
}

class ErrorHandler {
    private:
    	unsigned char origin_byte;
    	unsigned char error_byte;
=======
class error_handler {
    private:
      unsigned char origin_byte:8;
      unsigned char error_byte:8;
>>>>>>> origin/master

    public:
        //	Error Handler Functions
        int config_parser_error_handler(uint8_t err);
        int encoding_nn_error_handler(uint8_t err);
        int main_system_error_handler(uint8_t err);
        int unknown_sys_error(uint8_t err);
};

int error_handler(uint16_t err) {
<<<<<<< HEAD
uint8_t n = 8;
uint16_t err_bit_format = 16;
=======
>>>>>>> origin/master

err_bit_format * n = &err;
uint8_t err_origin = n->origin_byte;
uint8_t err_type = n->error_byte;

	switch(err_origin){
		case ERR_CFG_PRSR:
			config_parser_error_handler(err << ERROR_BYTE);
			break;
		case ERR_ENCODING_NN:
			encoding_nn_error_handler(err << ERROR_BYTE);
			break;
		case ERR_MAIN_SYS:
			main_system_error_handler(err << ERROR_BYTE);
			break;
		default:
			unknown_sys_error(err << ERROR_BYTE);
			break;
	}
    return 0;
}

int config_parser_error_handler(uint8_t err) {

	switch (err){
		case  ERROR_FILE_LOAD:
			cout << "File or file path corrupt." << endl;
			cout << "Unable to locate or load project configuration asim file." << endl;
			cout << "Please check files, correct issue and try again." << endl;
			return -1;
		case  WARNING_ORGANISM_SIZE_MISMATCH:
			cout << "Warning, organism vector size counted vs. loaded do not match." << endl;
			return -1;
		case  WARNING_NEURONAL_SIZE_MISMATCH:
			cout << "Warning, neuronal vector size counted vs. loaded do not match." << endl;
			return -1;
		case  WARNING_CONNEXION_SIZE_MISMATCH:
			cout << "Warning, connexion vector size counted vs. loaded do not match." << endl;
			return -1;
		case  WARNING_SYNAPSE_SPIKING_SIZE_MISMATCH:
			cout << "Warning, spiking synapse vector size counted vs. loaded do not match." << endl;
			return -1;
		case  WARNING_SYNAPSE_NONSPIKING_SIZE_MISMATCH:
			cout << "Warning, non-spiking synapse vector size counted vs. loaded do not match." << endl;
			return -1;
		case  WARNING_SYNAPSE_ELECTRICAL_SIZE_MISMATCH:
			cout << "Warning, electrical synapse vector size counted vs. loaded do not match." << endl;
			return -1;
		default:
			// Should not reach this state, else unknown error occured.
			cout << "Unknown error occured." << endl;
			return -1;
	}
	return -1;
}
