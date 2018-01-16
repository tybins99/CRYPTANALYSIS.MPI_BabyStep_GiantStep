// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_385.hpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_381.hpp"
#include "../LIB/argv_385.hpp"



argv_1146::argv_1146 () {
	argv_1382 = "__201274__tar"; 
}

string argv_1146::argv_1757 () {
	return (argv_1382);
}


argv_4536 argv_1146::argv_708 (argv_4883& _type) {
	argv_4536 argv_2072	= argv_4867;
	_type		= argv_1468;

	if ((argv_2339[0] == 0x42) && (argv_2339[1] == 0x4D)) {
		_type = argv_1451;
	}
	else if ((argv_2339[0] == 0xFF) && (argv_2339[1] == 0xD8) && (argv_2339[2] == 0xFF) && (argv_2339[3]==0xE0)){
		_type = argv_1456;
	}
	else if((argv_2339[0]==0x49) && (argv_2339[1]==0x44) && (argv_2339[2]==0x33) && (argv_2339[3]==0x03)) {
		_type = argv_1458;
	}
	else if ((argv_2339[0]==0x30) && (argv_2339[1]==0x26) && (argv_2339[2]==0xB2) && (argv_2339[3]==0x75)) {
		_type = argv_1448;
	}
	else if ((argv_2339[0]==0x30) && (argv_2339[1]==0x26) && (argv_2339[2]==0xB2) && (argv_2339[3]==0x75)) {
		_type = argv_1470;
	}
	else if((argv_2339[0]== 0xEF) && (argv_2339[1]==0xBB) && (argv_2339[2]==0xBF)) {
		_type = argv_1466;
	}
	else if ((argv_2339[0]==0xFF) && (argv_2339[1] == 0xFE)) {
		_type = argv_1464;
	}
	else if ((argv_2339[0]==0xFE) && (argv_2339[1] == 0xFF)) {
		_type = argv_1465;
	}
	else if ((argv_2339[0]==0x4D) && (argv_2339[1]==0x5A)) {
		_type = argv_1453;
	}
	else if((argv_2339[0]==0x50) && (argv_2339[1]==0x4B) && (argv_2339[2]==0x03) && (argv_2339[3]==0x04)) {
		_type = argv_1471;
	}
	else if((argv_2339[0]==0x1F) && (argv_2339[1]==0x8B) && (argv_2339[2]==0x08)) {
		_type = argv_1455;
	}
	else if ((argv_2339[0]==0x47) && (argv_2339[1]==0x49) && (argv_2339[2]==0x46)) {
		_type = argv_1454;
	}
	else if((argv_2339[0]==0x52) && (argv_2339[1]==0x49) && (argv_2339[2]==0x46) && (argv_2339[3]==0x46)) {
		_type = argv_1449;
	}
	return (argv_2072);
}

void argv_1146::argv_910 (FILE * _fp, argv_4883& _type) {
	if (fseek (_fp, 257, SEEK_SET) == 0) {
		argv_4883 size = 6;
		char argv_825[MAX_PATH];
		char pattern[] = "ustar";
		int argv_3613 = fread (argv_825, 1, size, _fp);
		if (argv_3613 == size) {
			if (memcmp (argv_825, pattern, size) == 0) {
				_type = argv_1461;
			}
		}
	}
}

// __201274__tar (used by thumbnail)
void argv_1146::argv_911 (FILE * _fp, argv_4883& _type) {
	if (fseek (_fp, 257, SEEK_SET) == 0) {
		argv_4883 size = argv_1382.size();
		char argv_825[MAX_PATH];
		int argv_3613 = fread (argv_825, 1, size, _fp);
		if (argv_3613 == size) {
			if (memcmp (argv_825, argv_1382.c_str(), size) == 0) {
				_type = argv_1461;
			}
		}
	}
}

// a format is exotic when we can't determine it's argv_4860 by only looking
// at the first magic argv_837
void argv_1146::argv_902 (FILE * _fp, argv_4883& _type) {
	argv_4536 argv_2072	= argv_4867;
	argv_910 (_fp, _type);
	if (_type == argv_1468) {
		argv_911 (_fp, _type); // used in thumbnails
	}
}

argv_4536 argv_1146::argv_707 (argv_876 _filename, argv_4883& _type) {
	argv_4536 argv_2072	= argv_4867;
	_type		= argv_1468;

	if ((_filename == NULL) || (strlen(_filename) == 0)) {
		argv_2072 = argv_4866;
	}
	else {
		FILE * argv_1510 = fopen (_filename, "rb");
		
		if (! argv_1510) {
			argv_2072 = argv_4863;
		}
		else {
			int argv_3613 = fread (argv_2339, 1, argv_4862, argv_1510);

			if (argv_3613 < argv_4862) {
				if ( feof(argv_1510)) {
					argv_2072 = argv_4864;
				}
				else if(ferror(argv_1510) ) {
					_type = argv_4865;
				}
			}
			else { // argv_1178 succesfully read from argv_1424
				argv_2072 = argv_708 (_type);
				if (_type == argv_1468) {
					argv_902 (argv_1510, _type);
				}
			}
			fclose (argv_1510);		
		}
	}
	return (argv_2072);
}


argv_4536 argv_1146::argv_2076 (argv_876 _filename, bool& _archive_flag, argv_4883& _file_type) {
	argv_4536 argv_2072		= argv_4867;
	_archive_flag	= false;

	argv_2072 = argv_707 (_filename, _file_type);
	if (argv_2072 == argv_4867) {
		if (
			(_file_type==argv_1471) || 
			(_file_type==argv_1461) || 
			(_file_type==argv_1455)) {
			_archive_flag = true;
		}	
	}
	return (argv_2072);
}


argv_4536 argv_1146::argv_2078 (argv_876 _filename, bool& _result_flag, argv_4883& _file_type) {
	argv_4536 argv_2072		= argv_4867;
	_result_flag	= false;

	argv_2072 = argv_707 (_filename, _file_type);
	if (argv_2072 == argv_4867) {
		if (_file_type==argv_1471) {
			_result_flag = true;
		}	
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
