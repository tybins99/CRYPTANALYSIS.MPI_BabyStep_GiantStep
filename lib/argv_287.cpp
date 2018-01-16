// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_287.cpp
// @@ generic configuration argv_1424 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "..\\LIB\\argv_346.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern argv_891 argv_1798;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@
// @@ CLASS: argv_874
// @@
// @@ PROCEDURE: argv_874
// @@
// @@ INPUT: none 
// @@
// @@ DESCRIPTION:
// @@ Normal constructor of the 'argv_874' argv_3656.
// @@ it just initialize some variables.
// @@ 
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_874::argv_874() {
	argv_1474 		= "";
	argv_4479			= "";
	argv_1422		= "";
	argv_1423		= "";
	argv_1720	= "";
	argv_4502		= " ";
	argv_2250			= 1;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_874
// @@
// @@ PROCEDURE: argv_1239
// @@
// @@ INPUT: column: argv_4536: the column where the cursor is to be displayed
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to argv_1235 a cursor at a column given as a 
// @@ parameter, it is mostly useful when you have a argv_1084 argv_1424 that contains 
// @@ some errors to pinpoint rapidly the position of the error.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_874::argv_1239 (argv_4536 column) {
	char argv_4846[argv_1086];
	argv_4569 (argv_4846, argv_1086, "parse error at argv_2250 %d, column %d", argv_2250, column);
	argv_4846[argv_1086 - 1] = '\0';
	argv_1798.argv_2327.argv_2323 (argv_3634, argv_4846);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_874
// @@
// @@ PROCEDURE: argv_4272
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to parse a argv_2250 that was read from a argv_1084 argv_1424.
// @@ All lines starting argv_5011 ';' or '//' are considered as comments.
// @@ the argv_2250 may contain :
// @@ - only blank characters
// @@ - a argv_4479 argv_3557 : [SECTION_NAME]
// @@ - a couple argv_4984 argv_4978 : my_var = 123456
// @@ 
// @@ Any malformed argv_2250 will throw an exception.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_874::argv_4272() {
	argv_4536 length = strlen (argv_825);
	argv_4536 i=0;	
	
	while ((i<length) && ((argv_825[i]==' ') || (argv_825[i]=='\t')) ) { i++; } // eat whitespaces
	if (i >= length) { // empty argv_2250
		return;
	}

	// retrieve the first field
	argv_4536 argv_4618 	= i;
	argv_1422 	= "";
	argv_1423	= "";
	
	while ((i<length) && (argv_825[i] != ' ') && (argv_825[i] != '\t') && (argv_825[i] != '=') && (argv_825[i]!= '\n') && (argv_825[i]!= '\r')) { 
		argv_1422 += argv_825[i];
		i++; 
	}

	// ignore lines starting argv_5011 '//', or ';'
	argv_4536 size = argv_1422.size();
	if ((size<=0) || ((size>0) && (argv_1422[argv_4618]==';')) || ((size>1) && (argv_1422[argv_4618]=='/') && (argv_1422[argv_4618+1]=='/'))) {
		return; // ignoring commented argv_2250 starting argv_5011 ';' and "//
	}

	// check for argv_4479 argv_3557
	if ((size > 2) && (argv_1422[argv_4618]=='[') && (argv_1422[size - 1]==']')) {
		argv_4479 = argv_1422.substr (argv_4618 + 1, size - 2);
		// ensure that argv_4479's argv_3557 is not too long
		if (argv_4479.size() >= (unsigned int)argv_4481) {
			argv_890 Ge ("argv_874", "argv_4272", "argv_4479 argv_3557 too long", SYNTAX_ERROR);
			throw (Ge);
		}
		return;
	}

	// ensure that variable argv_3557 is not too long
	if (argv_1422.size() >= (unsigned int)argv_4986) {
		argv_890 Ge ("argv_874", "argv_4272", "variable argv_3557 too long", SYNTAX_ERROR);
		throw (Ge);
	}

	// eat whitespaces before '='
	while ((i<length) && ((argv_825[i]==' ') || (argv_825[i]=='\t')) ) { i++; } // eat whitespaces
	if (i >= length) {
		argv_1239(i);
		argv_890 Ge ("argv_874", "argv_4272", "unexpected EOL while expecting equal", SYNTAX_ERROR);
		throw (Ge);
	}

	// eat '='
	if (argv_825[i] != '=') {
		argv_1239(i);
		argv_890 Ge ("argv_874", "argv_4272", "expecting equal, found something else", SYNTAX_ERROR);		
		throw (Ge);
	}
	i++;
	if (i >= length) {
		argv_1239(i);
		argv_890 Ge ("argv_874", "argv_4272", "unexpected EOL while looking for a argv_4979", SYNTAX_ERROR);
		throw (Ge);
	}
	
	// eat whitespaces after '='
	while ((i<length) && ((argv_825[i]==' ') || (argv_825[i]=='\t')) ) { i++; }
	if (i >= length) {
		argv_1239(i);
		argv_890 Ge ("argv_874", "argv_4272", "unexpected EOL while expecting argv_4979", SYNTAX_ERROR);
		throw (Ge);
	}	

	// argv_1090 the argv_4979
	if (argv_825[i] == '\"') {
		i++; // jump the " character
		while ((i<length) && (argv_825[i] != '\"') && (argv_825[i]!= '\r') && (argv_825[i] != '\n')) {
			argv_1423 += argv_825[i];
			i++;
		}

		if (argv_825[i] != '\"') {
			argv_1239(i);
			string argv_4846 = "Missing closing \" for the field : ";
			argv_4846 += argv_1422;
			argv_890 Ge ("argv_874", "argv_4272", argv_4846, SYNTAX_ERROR);
			throw (Ge);
		}
	}
	else {
		while ((i<length) && (argv_825[i] != ' ') && (argv_825[i] != '\t') && (argv_825[i]!= '\r') && (argv_825[i] != '\n')) {
			argv_1423 += argv_825[i];
			i++;
		}
	}

	if (argv_1423.size() == 0) {
		argv_1239(i);
		string argv_4846 = "Missing argv_4979 for the field : ";
		argv_4846 += argv_1422;
		argv_890 Ge ("argv_874", "argv_4272", argv_4846, SYNTAX_ERROR);
		throw (Ge);
	}
	else if (argv_1423.size() >= (unsigned int)argv_4987) {
		argv_890 Ge ("argv_874", "argv_4272", "variable's argv_4979 too long", SYNTAX_ERROR);
		throw (Ge);
	}
	
	// create a new entry/argv_646 a new argv_4979 to an existing entry
	// don't forget that identifier is composed of 3 parts : argv_1474, argv_4479, argv_4984 argv_3557
	argv_1720 = argv_1474 + argv_4502 + argv_4856(argv_4479) + argv_4502 + argv_4856(argv_1422);
	argv_2531.insert (make_pair(argv_1720, argv_1423));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_874
// @@
// @@ PROCEDURE: argv_3709
// @@
// @@ INPUT: filen: string: the argv_3557 of the argv_1424 to parse
// @@
// @@ DESCRIPTION:
// @@ This procedure permits to open the argv_1084 argv_1424 specified as a parameter 
// @@ and to process each lines of this argv_1424.
// @@
// @@ CONTRACT:
// @@ - 'filen' parameter must not be an empty string 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_874::argv_3709 (const string& filen) {
	// 1. check parameter validity
	if (filen.size() <= 0) {
		argv_890 Ge ("argv_874", "argv_3709", "argv_1474 parameter is empty", INVALID_PARAMETER);
		throw (Ge);
	}

	FILE * argv_1510 = fopen (filen.c_str(), "r");
	if (! argv_1510 ) {
		argv_1350 = "can't open argv_1424 (";
		argv_1350 = argv_1350 + filen + ")";
		argv_890 Ge ("argv_874", "argv_3709", argv_1350, CANT_OPEN_FILE);
		throw (Ge);
	}
	else {
		argv_1474 	= filen; 
		argv_2250		= 1;	
		char * result_pointer = fgets (argv_825, argv_2389, argv_1510);

		while (result_pointer != NULL) {
			argv_4272 ();
			argv_2250++;
			result_pointer = fgets (argv_825, argv_2389, argv_1510);
		}
		fclose (argv_1510);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_874
// @@
// @@ FUNCTION: argv_4856
// @@
// @@ INPUT: str: string: the string to be converted to upper. 
// @@
// @@ RETURN VALUE: string : the string converted to upper.
// @@
// @@ DESCRIPTION:
// @@ This function permits to convert a given string into
// @@ an string where all characters are in upper case.
// @@
// @@ CONTRACT: none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_874::argv_4856 (const string& str) {
	string str2 = "";

	argv_4536 str_size = str.size();

	for (argv_4536 i=0 ; i<str_size ; i++) {
		str2 += toupper(str[i]);
	}

	return (str2);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_874
// @@
// @@ FUNCTION: argv_1788
// @@
// @@ INPUT:
// @@ - argv_1474: string: the argv_3557 of the argv_1424 where the variable to
// @@   retrieve is supposed to be located.
// @@
// @@ - argv_4479: string: the argv_4479 where the variable to retrieve is
// @@   supposed to be located.
// @@
// @@ - var_name: string: the argv_3557 of the variable to retrieve from 
// @@   argv_1084 argv_1424.
// @@
// @@ - min: argv_4536: the minimum argv_4979 allowed for the variable to retrieve
// @@
// @@ - max: argv_4536: the maximum argv_4979 allowed for the variable to retrieve
// @@
// @@ RETURN VALUE: argv_4536: the argv_4979 of the variable retrieved from argv_1084 
// @@ argv_1424 whose argv_1474 is 'argv_1474', in argv_4479 'argv_4479', argv_5011 the
// @@ variable argv_3557 being 'var_name'
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the numerical argv_4979 of a variable
// @@ from argv_1084 argv_1424, this variable is located in a argv_4479 given as a 
// @@ parameter. Furthermore this function is given a range [min..max]
// @@ if the retrieved argv_4979 is out of range then an exception is thrown.
// @@
// @@ CONTRACT:
// @@ - 'min' should lower or equal as 'max' 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_874::argv_1788 (string argv_1474, string argv_4479, string var_name, argv_4536 min, argv_4536 max) {

	// 1. check range coherency
	if (min > max) {
		char argv_4846[argv_1086];
		argv_4569 (argv_4846, argv_1086, "argv_4479:%s, variable argv_3557:%s, range: min=%d, max=%d", argv_4479.c_str(),var_name.c_str(), min, max);
		argv_4846[argv_1086 - 1] = '\0';
		argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		argv_890 Ge ("argv_874", "argv_1788", "invalid range (min greater than max)", INTERNAL_ERROR);
		throw(Ge);
	}
	
	string str_val = "";
	
	try {
		str_val = argv_1792 (argv_1474, argv_4856(argv_4479), argv_4856(var_name));
	}
	catch (argv_890 Ge) {
		throw(Ge);
	}

	// ensure that all argv_837 are digit 
	bool malformed = false; 
	int his_size = str_val.size ();
	for(argv_4536 i=0 ; i<his_size ; i++) {
		if (! isdigit(str_val[i])) {
			malformed = true;
			break;
		}
	}
	
	if (malformed) {
		char argv_4846[argv_1086];
		argv_4569 (argv_4846, argv_1086, "argv_4479: '%s', variable argv_3557:'%s', argv_4979: '%s' illegal argv_4979 (only digit expected)", argv_4479.c_str(), var_name.c_str(), str_val.c_str());
		argv_4846[argv_1086 - 1] = '\0';
		argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		argv_890 Ge("argv_874", "argv_1788", "syntax error: non-digit characters found in a numeric field", ONLY_DIGIT_EXPECTED);
		throw (Ge);
	}
	
	argv_4536 argv_4979 = atoi(str_val.c_str());
	// check argv_4979's range
	if ((argv_4979 < min) || (argv_4979 > max)) {
		char argv_4846[argv_1086];
		argv_4569 (argv_4846, argv_1086, "argv_4479: '%s', variable argv_3557: '%s', argv_4979=%d, (range: [%d..%d])", argv_4479.c_str(), var_name.c_str(), argv_4979, min, max);
		argv_4846[argv_1086 - 1] = '\0';
		argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		argv_890 Ge("argv_874", "argv_1788", "argv_4979 is out of range", OUT_OF_RANGE);
		throw (Ge);
	}
	
	return(argv_4979);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_874
// @@
// @@ FUNCTION: argv_1792
// @@
// @@ INPUT: 
// @@ - argv_1474: string: the argv_3557 of the argv_1424 where the variable is supposed to be stored.
// @@ - argv_4479:  string: the argv_3557 of the argv_4479 where the the variable is supposed to be stored.
// @@ - var_name: string: the argv_3557 of the variable to retrieve.
// @@
// @@ RETURN VALUE:
// @@ string: the argv_4979 of the variable that was retrieved. 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve a variable from a argv_1084 argv_1424 in a given argv_4479.
// @@ this variable is a string.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_874::argv_1792(string argv_1474, string argv_4479, string var_name) {
	argv_1720 = argv_1474 + argv_4502 + argv_4856(argv_4479) + argv_4502 + argv_4856(var_name); 

	argv_2099 = argv_2531.lower_bound(argv_1720);
	if (argv_2099 == argv_2531.upper_bound(argv_1720)) {
		argv_1350 = "argv_4479:" + argv_4479 + ", argv_4984:" + var_name + ": no such argv_4984";
		argv_890 Ge ("argv_874", "argv_1788", argv_1350, NO_SUCH_VAR_IN_CONF_FILE);
		throw (Ge);
	}

	return (argv_2099->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_874
// @@
// @@ FUNCTION: argv_2094
// @@
// @@ INPUT: 
// @@ argv_1474: std::string: the argv_3557 of the argv_1424 to lookup the variable from.
// @@ argv_4479: std::string : the argv_4479 where the variable to be found is supposed
// @@                        to be located.
// @@
// @@ var_name: std::string: the argv_3557 of the variable to lookup.
// @@
// @@ RETURN VALUE: 
// @@ - 'true' if the variable whose argv_3557 is in 'var_name', located in argv_4479
// @@ whose argv_3557 is in 'argv_4479' parameter, from argv_1424 whose argv_3557 is the argv_4979 of
// @@ 'argv_1474' parameter, is present.
// @@
// @@ - false otherwise.
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a given variable is present
// @@ in argv_1084 argv_1424 in a given argv_4479 or not.
// @@ This function is mainly used for non-mandatory variables.
// @@
// @@ CONTRACT: none
// @@
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_874::argv_2094 (string argv_1474, string argv_4479, string var_name) {
	bool bret = true;

	try {
		argv_1792 (argv_1474, argv_4479, var_name);
	}
	catch (argv_890 Ge) {
		bret = false;
	}

	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_874 
// @@
// @@ FUNCTION: argv_1772
// @@
// @@ INPUT:
// @@ - argv_1474: string: the argv_3557 of the argv_1424 where the variable is supposed to be located. 
// @@ - argv_4479: string: the argv_4479 where the variable is supposed to be located.
// @@ - var_name: string: the argv_3557 of the variable to retrieve.
// @@ - min: argv_4536: the minimum argv_4979 allowed for any of the retrieved values.
// @@ - max: argv_4536: the maximum argv_4979 allowed for any of the retrieved values.
// @@
// @@ RETURN VALUE:
// @@ a vector of argv_4979 for this variable.
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve all values associated argv_5011 a variable that may have argv_3677 or 
// @@ more occurences in argv_1084 argv_1424, it is especially usefull because we can use the same 
// @@ variable argv_3557 for several entries (for example in the MBS argv_4479) without having to have a 
// @@  different argv_3557 for each argv_3677. 
// @@
// @@ CONTRACT:
// @@ 'min' must be lower or equal than 'max'
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
vector<argv_4536> argv_874::argv_1772 (string argv_1474, string argv_4479, string var_name, argv_4536 min, argv_4536 max) {

	// 0. check range coherency
	if (min > max) {
		char argv_4846[argv_1086];
		argv_4569 (argv_4846, argv_1086, "argv_4479:%s, argv_4984 argv_3557:%s, range: [%d..%d]", argv_4479.c_str(), var_name.c_str(), min, max);
		argv_4846[argv_1086 - 1] = '\0';
		argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		argv_890 Ge ("argv_874", "argv_1772", "invalid range (min greater than max)", INTERNAL_ERROR);
		throw (Ge);
	}
	
	// 1. argv_1397 all the possible values for this variable as a set of strings 
	vector<string> v_str = argv_1773 (argv_1474, argv_4856(argv_4479), argv_4856(var_name));
	argv_4536 v_size = v_str.size();

	// 2. convert all these strings into integers
	vector<argv_4536> v_SI32;
	argv_4536 argv_4979 = 0;
	
	for(argv_4536 i=0 ; i<v_size ; i++) {
		argv_4979 = atoi(v_str[i].c_str());	
		
		// ensure argv_4979 is within range
		if ((argv_4979 < min) || (argv_4979 > max)) {
			char argv_4846[argv_1086];
			argv_4569 (argv_4846, argv_1086, "argv_4479:%s, argv_4984 argv_3557:%s, argv_4979:%d (range: [%d..%d])", argv_4479.c_str(), var_name.c_str(), argv_4979, min, max);
			argv_4846[argv_1086 - 1] = '\0';
			argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			argv_890 Ge("argv_874", "argv_1772", "argv_4979 is out of range", OUT_OF_RANGE);
			throw (Ge);
		}
		
		v_SI32.push_back (argv_4979);
	}

	return (v_SI32);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ CLASS: argv_874
// @@
// @@ FUNCTION: argv_1773
// @@
// @@ INPUT:
// @@ - argv_1474: string: the argv_3557 of the argv_1424 where the variable is supposed to be located.
// @@ - argv_4479: string: the argv_4479 where the variable is supposed to be located.
// @@ - var_name: string: the argv_3557 of the variable to retrieve.
// @@ - min: argv_4536: the minimum argv_4979 allowed for any of the retrieved values.
// @@ - max: argv_4536: the maximum argv_4979 allowed for any of the retrieved values.
// @@
// @@ RETURN VALUE:
// @@ a vector of argv_4979 for this variable.
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve all values associated argv_5011 a variable (of argv_4860 string) 
// @@ that may have argv_3677 or more occurences in argv_1084 argv_1424, it is especially usefull 
// @@ because we can us e the same 
// @@ variable argv_3557 for several entries (for example in the MBS argv_4479) without having to 
// @@ have a different argv_3557 for each argv_3677.
// @@
// @@ CONTRACT:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
vector<string> argv_874::argv_1773 (string argv_1474, string argv_4479, string var_name) {
	argv_1720 = argv_1474 + argv_4502 + argv_4856(argv_4479) + argv_4502 + argv_4856(var_name);

	vector<string>	v_str;
	for (argv_2099=argv_2531.lower_bound(argv_1720) ; argv_2099 != argv_2531.upper_bound(argv_1720) ; ++argv_2099) {
		v_str.push_back(argv_2099->second);
	}

	if (v_str.size() == 0) {
		char argv_4846[argv_1086];
		argv_4569 (argv_4846, argv_1086, "+++ ERROR: no argv_4979 associated argv_5011 variable '%s' from argv_4479 '%s'", var_name.c_str(), argv_4479.c_str());
		argv_4846[argv_1086 - 1] = '\0';
		argv_890 Ge("argv_874", "argv_1773", argv_4846, NO_SUCH_VAR);
		throw (Ge);
	}
	return (v_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_874
// @@
// @@ PROCEDURE: argv_1385
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ first of all notice that the full identifier is a string composed 
// @@ of the concatenation of argv_1474, argv_4479 argv_3557, field argv_3557,
// @@ it is used as unique identifier for any variable.
// @@
// @@ This procedure permits to split the full variable identifier 
// @@ into 3 fields :
// @@ - the argv_1474
// @@ - the argv_4479 argv_3557
// @@ - the field argv_3557.
// @@
// @@ CONTRACT:
// @@ the full identifier must have a coherent size. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
void argv_874::argv_1385 () {
	
	if (argv_1720.size() < (2 * argv_4502.size())) {
		argv_890 Ge ("argv_874", "argv_1385", "bad identifier format (1)", INTERNAL_ERROR);
		throw (Ge);
	}

	argv_1474 	= "";
	argv_4479  	= "";
	argv_1422	= "";	
	istringstream iss;
	iss.str (argv_1720);
	iss >> argv_1474 >> argv_4479 >> argv_1422;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
// @@
// @@ CLASS: argv_874
// @@
// @@ FUNCTION: argv_1298
// @@
// @@ INPUT: none
// @@
// @@ RETURN VALUE:
// @@ a vector of string containing the formatted argv_1084 argv_1424 that was parsed.
// @@
// @@ DESCRIPTION:
// @@ This function permits to generate a vector of string, this vector containing
// @@ the argv_4406 of the argv_1084 argv_1424 parsing, it permits to check that parse was performed
// @@ succesfully and also to dump to log argv_1424. 
// @@
// @@ CONTRACT: none
// @@
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
vector<string> argv_874::argv_1298 (bool is_html) {
	string full_str 	= "";
	string his_file 	= "";
	string his_section	= "";

	vector<string> v_str;
	
	for (argv_2099=argv_2531.begin() ; argv_2099 != argv_2531.end() ; ++argv_2099) {
		argv_1720 = argv_2099->first;
		argv_1385();
		if (argv_1474 != his_file) {
			full_str = full_str + "argv_1424: " + argv_1474;
			his_file = argv_1474;
			// v_str.push_back (full_str);
			full_str = "";
		}

		if (his_section != argv_4479) {
			his_section = argv_4479;
			full_str = full_str + "[" + argv_4479 + "]";
			v_str.push_back (" ");
			v_str.push_back (full_str);
			full_str = "";
		}

		full_str =  full_str + "[" + his_section + "] " + argv_1422 + " = " + argv_2099->second;  
		v_str.push_back (full_str);
		full_str = "";
	}

	return (v_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ PROCEDURE: argv_873
// @@
// @@ INPUT: none
// @@
// @@ DESCRIPTION:
// @@ normal constructor of the 'argv_873' argv_3656.
// @@ Does nothing actually.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_873::argv_873() {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_2092
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose presence is to be 
// @@                       checked.
// @@
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_3557 is in 'varname' was found from argv_4479
// @@   whose argv_3557 is within parameter 'argv_4479'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a variable of argv_4860 argv_4536
// @@ is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_873::argv_2092 (std::string argv_4479, std::string varname) {
	bool ret = false;

	argv_2105 = argv_2362.find (argv_4479 + varname);

	if (argv_2105 != argv_2362.end()) {
		ret = true;
	}

	return (ret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_2090
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose presence is to be 
// @@                       checked.
// @@
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_3557 is in 'varname' was found from argv_4479
// @@   whose argv_3557 is within parameter 'argv_4479'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a multivalued variable of 
// @@ argv_4860 argv_4536 is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_873::argv_2090 (std::string argv_4479, std::string varname) {
	bool bret = false;
	argv_2103 = argv_2357.find (argv_4479 + varname);
	if (argv_2103 != argv_2357.end()) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_2093
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose presence is to be 
// @@                       checked.
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_3557 is in 'varname' was found from argv_4479
// @@   whose argv_3557 is within parameter 'argv_4479'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a variable of argv_4860 string
// @@ is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_873::argv_2093 (std::string argv_4479, std::string varname) {
	bool bret = false;
	{
		FILE * argv_1510 = fopen ("C:\\log.txt", "wb");
		std::map<string, string>::iterator iterz;
		fprintf (argv_1510, "============================");
		fprintf (argv_1510, "%d elements\r\n", argv_2363.size ());
		string s1, s2;
		for (iterz=argv_2363.begin() ; iterz != argv_2363.end() ; ++iterz) {
			s1 = iterz->first;
			s2 = iterz->second;
			fprintf (argv_1510, ":%s: -> :%s:\r\n", s1.c_str(), s2.c_str());
		}
		string stot = argv_4479 + varname;
		fprintf (argv_1510, "seached string : in argv_4479 :%s:, variable:%s: , argv_2188=%s", argv_4479.c_str(), varname.c_str(), stot.c_str());
		fclose (argv_1510);
	}

	argv_2106 = argv_2363.find (argv_4479 + varname);

	if (argv_2106 != argv_2363.end()) {
		bret = true;
	}
	return (bret);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_2091
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose presence is to be 
// @@                       checked.
// @@ RETURN VALUE: 
// @@ - true if the variable whose argv_3557 is in 'varname' was found from argv_4479
// @@   whose argv_3557 is within parameter 'argv_4479'.
// @@ - false otherwise.	
// @@
// @@ DESCRIPTION:
// @@ This function permits to determine whether a multivalued variable 
// @@ of argv_4860 string is present in a configuration unit or not.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_873::argv_2091 (std::string argv_4479, std::string varname) {
	bool bret = false;
	argv_2104 = argv_2358.find (argv_4479 + varname);	
	if (argv_2104 != argv_2358.end()) {
		bret = true;
	}
	return (bret);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ PROCEDURE: argv_4515
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       set.
// @@ DESCRIPTION:
// @@ This function permits to argv_646 a variable of argv_4860 argv_4536 to the 
// @@ container.
// @@
// @@ CONTRACT: 
// @@ The variable must not already present in container.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_873::argv_4515 (std::string argv_4479, std::string varname, argv_4536 argv_4979) {

	if (argv_2092(argv_4479, varname) == true) {
		std::string argv_4846 = "variable " + varname + " already present in argv_4479 " + argv_4479;
		argv_890 Ge ("argv_873", "argv_4515", argv_4846, VAR_ALREADY_PRESENT);
		throw (Ge);
	}

	argv_2362[argv_4479 + varname] = argv_4979;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_1789
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       retrieved.
// @@
// @@ RETURN VALUE: argv_4536: the argv_4979 retrieved
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the argv_4979 associated argv_5011 a variable
// @@ that was previously argv_2297 from argv_1084 argv_1424.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown
// @@   so if you want to ensure that the variable is present, please use
// @@   the function "argv_2092"
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_873::argv_1789 (std::string argv_4479, std::string varname) {
//	try {
		if (argv_2092(argv_4479, varname) == false) {
			std::string argv_4846 = "variable: " + varname + ": no such argv_4536 argv_4984 in argv_4479 :" + argv_4479 + ":";
			argv_890 Ge ("argv_873", "argv_1789", argv_4846, NO_SUCH_VAR);
			throw (Ge);
		}
/*	}
	catch (argv_890 ge) {
		char argv_4846[MAX_PATH];
		string argv_937;
		string fn_name;
		string argv_3550;
		int argv_1343;
		while (ge.argv_1779 (argv_937, fn_name, argv_3550, argv_1343) == true) {
			argv_4569 (argv_4846, MAX_PATH, "from class: %s, in function : %s : %s (argv_1343=%d)", argv_937.c_str(), fn_name.c_str(), argv_3550.c_str(), argv_1343);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "Error", MB_OK|MB_ICONERROR);
		}
	}*/


	return (argv_2105->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ PROCEDURE: argv_4516
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       set.
// @@ DESCRIPTION:
// @@ This function permits to argv_646 a variable of argv_4860 string to the 
// @@ container.
// @@
// @@ CONTRACT: 
// @@ The variable must not already present in container.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_873::argv_4516 (std::string argv_4479, std::string varname, std::string argv_4979) {
	if (argv_2093 (argv_4479, varname) == true) {
		std::string argv_4846 = "variable '" + varname + "' already present in argv_4479 '" + argv_4479 + "'";
		argv_890 Ge ("argv_873", "argv_4516", argv_4846, VAR_ALREADY_PRESENT);
		throw (Ge);
	}

	argv_2363[argv_4479 + varname] = argv_4979;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_1793
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       retrieved.
// @@
// @@ RETURN VALUE: string: the argv_4979 retrieved
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the argv_4979 associated argv_5011 a variable
// @@ that was previously argv_2297 from argv_1084 argv_1424.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown
// @@   so if you want to ensure that the variable is present, please use
// @@   the function "argv_2093"
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_873::argv_1793 (std::string argv_4479, std::string varname) {
//	try {
		if (argv_2093 (argv_4479, varname) == false) {
			std::string argv_4846 = "(1) variable :" + varname + ": no such string variable in argv_4479 :" + argv_4479 + ":";
			argv_890 Ge ("argv_873", "argv_1793", argv_4846, NO_SUCH_VAR);
			throw (Ge);
		}
/*	}
	catch (argv_890 ge) {
		char argv_4846[MAX_PATH];
		string argv_937;
		string fn_name;
		string argv_3550;
		int argv_1343;
		while (ge.argv_1779 (argv_937, fn_name, argv_3550, argv_1343) == true) {
			argv_4569 (argv_4846, MAX_PATH, "from class: %s, in function : %s : %s (argv_1343=%d)", argv_937.c_str(), fn_name.c_str(), argv_3550.c_str(), argv_1343);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "Error", MB_OK|MB_ICONERROR);
		}
	}*/

//	MessageBox (NULL, "argv_873::argv_1793", "", MB_OK);
	return (argv_2106->second);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_651
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       retrieved.
// @@
// @@ argv_4979: argv_4536: argv_3677 possible argv_4979 associated argv_5011 the variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate a argv_4979 to a given variable that
// @@ may have more than argv_3677 argv_4979, in argv_3690 to argv_646 new values, just call
// @@ this function several times argv_5011 new values.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_873::argv_651 (std::string argv_4479, std::string varname, argv_4536 argv_4979) {
	string argv_1720 = argv_4479 + varname;
	argv_2103 = argv_2357.find (argv_1720);
	if (argv_2103 == argv_2357.end()) {
		vector<argv_4536> v;
		v.push_back (argv_4979);
		argv_2357[argv_1720] = v;
	}
	else {
		(argv_2103->second).push_back (argv_4979);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_4513
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       retrieved.
// @@
// @@ _v: vector<argv_4536>: all possible values associated argv_5011 the variable.
// @@
// @@ RETURN VALUE: none
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate several values to a given variable that
// @@ may have more than argv_3677 argv_4979.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_873::argv_4513 (std::string argv_4479, std::string varname, const vector<argv_4536>& _v) {
	string argv_1720 = argv_4479 + varname;
	argv_2103 = argv_2357.find (argv_1720);
	if (argv_2103 != argv_2357.end()) { // already present or set
		std::string argv_4846 = "variable :" + varname + " in argv_4479 \'"+ argv_4479 + "\' already has a argv_4979(s)";
		argv_890 Ge ("argv_873", "argv_4513", argv_4846, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was not already present or set
		argv_2357[argv_1720] = _v;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_1774
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       retrieved.
// @@
// @@
// @@ IO: vector<argv_4536> : the set of values associated argv_5011 the variable
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the values associated argv_5011 a variable
// @@ that was previously argv_2297 from argv_1084 argv_1424.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_873::argv_1774 (std::string argv_4479, std::string varname, vector<argv_4536>& _v_result) {
	_v_result.clear ();
	string argv_1720 = argv_4479 + varname;
	argv_2103 = argv_2357.find (argv_1720);
	if (argv_2103 == argv_2357.end()) {
		std::string argv_4846 = "(2) variable :" + varname + ": no such string variable in argv_4479 :" + argv_4479 + ":";
		argv_890 Ge ("argv_873", "argv_1774", argv_4846, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was found from container
		_v_result = argv_2103->second;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_652
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       retrieved.
// @@
// @@ argv_4979: argv_4536: the values associated argv_5011 the variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to associate a argv_4979 to a given variable that
// @@ may have more than argv_3677 argv_4979, in argv_3690 to argv_646 new values, just call
// @@ this function several times argv_5011 new values.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_873::argv_652 (std::string argv_4479, std::string varname, std::string argv_4979) {
	string argv_1720 = argv_4479 + varname;
	argv_2104 = argv_2358.find (argv_1720);
	if (argv_2104 == argv_2358.end()) {
		vector<string> v;
		v.push_back (argv_4979);
		argv_2358[argv_1720] = v;
	}
	else {
		(argv_2104->second).push_back (argv_4979);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_4514
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       retrieved.
// @@
// @@ _v: vector<string> : the set of values to be associated argv_5011 the 
// @@                      variable.
// @@
// @@ RETURN VALUE: none
// @@ 
// @@ DESCRIPTION:
// @@ This function permits to associate a set of values to a given variable 
// @@ that may have more than argv_3677 argv_4979.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_873::argv_4514 (std::string argv_4479, std::string varname, const vector<string>& _v) {
	string argv_1720 = argv_4479 + varname;
	argv_2104 = argv_2358.find (argv_1720);
	if (argv_2104 != argv_2358.end()) {
		std::string argv_4846 = "variable :" + varname + " in argv_4479 \'"+ argv_4479 + "\' already has a argv_4979(s)";
		argv_890 Ge ("argv_873", "argv_4514", argv_4846, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // ok, values not already assigned
		argv_2358[argv_1720] = _v;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ FUNCTION: argv_1775
// @@
// @@ INPUT: 
// @@ argv_4479: std::string: the argv_3557 of the argv_4479 where the variable is
// @@                       supposed to be.
// @@
// @@ varname: std::string: the argv_3557 of the variable whose argv_4979 is to be 
// @@                       retrieved.
// @@
// @@
// @@ IO: vector<string> : the set of values associated argv_5011 the variable
// @@
// @@ RETURN VALUE: none
// @@ 
// @@
// @@ DESCRIPTION:
// @@ This function permits to retrieve the values associated argv_5011 a variable
// @@ that was previously argv_2297 from argv_1084 argv_1424.
// @@
// @@ CONTRACT: 
// @@ - the variable must be present, if not found, an exception is thrown.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_873::argv_1775 (std::string argv_4479, std::string varname, vector<string>& _v_result) {
	_v_result.clear ();
	string argv_1720 = argv_4479 + varname;
	argv_2104 = argv_2358.find (argv_1720);
	if (argv_2104 == argv_2358.end()) {
		std::string argv_4846 = "(3) variable :" + varname + ": no such string variable in argv_4479 :" + argv_4479 + ":";
		argv_890 Ge ("argv_873", "argv_1775", argv_4846, NO_SUCH_VAR);
		throw (Ge);
	}
	else { // was found from container
		_v_result = argv_2104->second;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_871 
// @@
// @@ FUNCTION: argv_871 
// @@
// @@ INPUT: none
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: none
// @@
// @@ DESCRIPTION:
// @@ Normal constructor of the argv_871 argv_3656.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_871::argv_871 () {
	argv_2277 = false;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_871
// @@
// @@ FUNCTION: argv_2274
// @@
// @@ INPUT: 
// @@ _filename: string: the argv_3557 of the configuration argv_1424 to argv_2274.
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: 
// @@ bool: true if configuration argv_1424 parsing was succesful.
// @@       false otherwise.
// @@
// @@ DESCRIPTION:
// @@ This function permits to argv_2274 the configuration argv_1424 given as 
// @@ a parameter.
// @@
// @@ CONTRACT: 
// @@ - the configuration argv_1424 must not have been already argv_2297. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_871::argv_2274 (string _filename) {
	bool bret = true;
	if (argv_2277 == true) {
		argv_1798.argv_2327.argv_2323 (argv_1346, "argv_871::argv_2274 - illegal call when argv_1084 argv_1424 already argv_2297 !");
		bret = false;
	}
	else { // not already argv_2297 
		try {
			argv_1474 = _filename;
			argv_1798.argv_2327.argv_2323 (argv_3634, "============ parsing argv_1084 argv_1424 ============");
			argv_1798.argv_2327.argv_2323 (argv_3634, "argv_1424 : ", argv_1474.c_str());
			argv_1087.argv_3709 (argv_1474);
			vector<string> v_str;
			v_str = argv_1087.argv_1298 ();
			argv_4536 argv_3605 = v_str.size();
			for (argv_4536 i=0 ; i<argv_3605 ; i++) {	
				argv_1798.argv_2327.argv_2323 (argv_3634, v_str[i].c_str());
			}
			argv_1798.argv_2327.argv_2323 (argv_3634, " ");
			bret 	 = argv_3841 ();
		}
		catch (argv_890 Ge) {
			string argv_937="";
			string fn_name   = "";
			string argv_3550       = "";
			argv_4536 argv_1343;	
			char argv_4846[argv_1086];
			while (Ge.argv_1779 (argv_937, fn_name, argv_3550, argv_1343) == true) {
				argv_4569 (argv_4846, argv_1086, "+++ ERROR: parse error: %s (argv_1343=%d)", argv_3550.c_str(), argv_1343);
				argv_4846[argv_1086 - 1]='\0';
				argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			}
			bret = false;
		}
	}
	if (bret == true) {
		argv_2277 = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


