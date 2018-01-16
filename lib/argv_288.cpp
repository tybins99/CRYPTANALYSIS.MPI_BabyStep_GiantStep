// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ conf_punknet.cpp
// @@ punknet project's configuration argv_1424 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "stdafx.h"
#include "..\\Lib\\argv_347.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_872 argv_1084;
extern argv_891 argv_1798;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_872 
// @@
// @@ FUNCTION: argv_3841
// @@
// @@ INPUT: none
// @@
// @@ OUTPUT: none
// @@
// @@ IO: none
// @@
// @@ RETURN VALUE: 
// @@ - bool: true if initialization succeeded.
// @@ -       false otherwise.  
// @@
// @@ DESCRIPTION:
// @@ This function permits to parse and retrieve all 
// @@ necessary configuration veriables from the configuration
// @@ argv_1424 of a punknet Linux scanner.
// @@
// @@ CONTRACT: 
// @@ - the argv_1084 argv_1424 must contains no syntax error.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
[DATABASE]
server_name = 197.12.4545.23
login		= tybins99
password	= 123456

[NETWORK]
argv_4228 = 587

[FOLDER]
update_folder   = UPDATE
argv_4849	    = TEMP
sample_folder   = SAMPLE
tool_folder		= TOOL

[WEB]
tool		= wget.exe
param		=

[ZIP]
tool		= 7z.exe 
param		= x 

[SAMPLE]
temporary_sample_suffix = .in_progress
actual_sample_suffix    = .sample

[TIMEOUT]  
batch_processor_period  = 2
abort_scan_if_too_long  = 1
avx_max_scan_duration   = 60
update_period			= 10

[MD5]
enable_md5				= 1

[THREAD_QUEUE]
load_result_queue_size  = 10
avx_runner_queue_size   = 10
scan_result_queue_size  = 10
batch_result_queue_size = 10

[AVX]
argv_1424 = hauri.txt
argv_1424 = ahnlab.txt
*/
bool argv_872::argv_3841 () {
	bool bret = true;
	string svalue;
	argv_4883   argv_4979;
	argv_4516 ("DATABASE", "server_name",				argv_1087.argv_1792 (argv_1474, "DATABASE", "server_name"));	
	argv_4516 ("DATABASE", "db_identifier",				argv_1087.argv_1792 (argv_1474, "DATABASE", "db_identifier"));	
	argv_4516 ("DATABASE", "packet_rule_db_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "packet_rule_db_name"));	
	argv_4515   ("DATABASE", "db_filename_max_length",		argv_1087.argv_1788   (argv_1474, "DATABASE", "db_filename_max_length", 1, MAX_PATH));
	argv_4515   ("DATABASE", "max_filesize",				argv_1087.argv_1788   (argv_1474, "DATABASE", "max_filesize", 1, 31457280)); // 30 Mb
	argv_4516 ("DATABASE", "login",						argv_1087.argv_1792 (argv_1474, "DATABASE", "login"));	
	argv_4515   ("DATABASE", "max_query_answer",			argv_1087.argv_1788   (argv_1474, "DATABASE", "max_query_answer", 1, INT_MAX));	
	argv_4515   ("DATABASE", "ancilate_default_max_delta",	argv_1087.argv_1788   (argv_1474, "DATABASE", "ancilate_default_max_delta", 0, 8760)); // hours (max 365 days)

	argv_4516 ("DATABASE", "password",					argv_1087.argv_1792 (argv_1474, "DATABASE", "password"));
	argv_4516 ("DATABASE", "accident_table_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "accident_table_name"));	

	argv_4516 ("DATABASE", "accident_image_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "accident_image_name"));
	argv_4516 ("DATABASE", "pe_string_table_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "pe_string_table_name"));
	argv_4516 ("DATABASE", "avx_result_table_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "avx_result_table_name"));
	argv_4516 ("DATABASE", "ancilate_table_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "ancilate_table_name"));
	argv_4516 ("DATABASE", "db_config_table_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "db_config_table_name"));
	argv_4516 ("DATABASE", "maillist_table_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "maillist_table_name"));

	argv_4516 ("DATABASE", "pck_rule_server_name",		argv_1087.argv_1792 (argv_1474, "DATABASE", "pck_rule_server_name"));
	argv_4516 ("DATABASE", "pck_rule_login",				argv_1087.argv_1792 (argv_1474, "DATABASE", "pck_rule_login"));
	argv_4516 ("DATABASE", "pck_rule_password",			argv_1087.argv_1792 (argv_1474, "DATABASE", "pck_rule_password"));
	argv_4516 ("DATABASE", "pck_rule_db_identifier",		argv_1087.argv_1792 (argv_1474, "DATABASE", "pck_rule_db_identifier"));
	argv_4515	 ("DATABASE", "save_test_sample_enabled",	argv_1087.argv_1788 (argv_1474, "DATABASE", "save_test_sample_enabled", 0, 1)); 

	argv_4515 ("NETWORK",   "argv_4228",						argv_1087.argv_1788 (argv_1474, "NETWORK", "argv_4228",0, 65536));
	argv_4515 ("NETWORK",   "observer_port",				argv_1087.argv_1788 (argv_1474, "NETWORK", "observer_port",0, 65536));
	argv_4515 ("NETWORK",   "reporter_port",				argv_1087.argv_1788 (argv_1474, "NETWORK", "reporter_port",0, 65536));

	argv_4516 ("FOLDER", "update_folder",				argv_1087.argv_1792 (argv_1474, "FOLDER", "update_folder"));	
	argv_4516 ("FOLDER", "argv_4849",					argv_1087.argv_1792 (argv_1474, "FOLDER", "argv_4849"));	
	argv_4516 ("FOLDER", "tmp_folder_1",					argv_1087.argv_1792 (argv_1474, "FOLDER", "tmp_folder_1"));	
	argv_4516 ("FOLDER", "tmp_folder_2",					argv_1087.argv_1792 (argv_1474, "FOLDER", "tmp_folder_2"));	
	argv_4516 ("FOLDER", "tmp_folder_3",					argv_1087.argv_1792 (argv_1474, "FOLDER", "tmp_folder_3"));	
	argv_4516 ("FOLDER", "tmp_folder_4",					argv_1087.argv_1792 (argv_1474, "FOLDER", "tmp_folder_4"));	

	argv_4516 ("FOLDER", "sample_folder",				argv_1087.argv_1792 (argv_1474, "FOLDER", "sample_folder"));	
	argv_4516 ("FOLDER", "extracted_sample_folder",		argv_1087.argv_1792 (argv_1474, "FOLDER", "extracted_sample_folder"));
	argv_4516 ("FOLDER", "tool_folder",					argv_1087.argv_1792 (argv_1474, "FOLDER", "tool_folder"));	
	svalue = argv_1793 ("FOLDER", "tool_folder");
	argv_1798.dns.set_tool_folder (svalue.c_str());

	argv_4516 ("SAMPLE", "temporary_sample_suffix",		argv_1087.argv_1792 (argv_1474, "SAMPLE", "temporary_sample_suffix"));	
	argv_4516 ("SAMPLE", "actual_sample_suffix",			argv_1087.argv_1792 (argv_1474, "SAMPLE", "actual_sample_suffix"));	
	argv_4516 ("SAMPLE", "zip_sample_suffix",			argv_1087.argv_1792 (argv_1474, "SAMPLE", "zip_sample_suffix"));	
	argv_4515   ("SAMPLE",   "received_file_max_size",		argv_1087.argv_1788 (argv_1474, "SAMPLE", "received_file_max_size", 1, 30)); // 30 Mega max
	argv_4515   ("SAMPLE",   "max_nb_string",				argv_1087.argv_1788 (argv_1474, "SAMPLE", "max_nb_string",	1, 255)); // 30 Mega max
	argv_4515   ("SAMPLE",   "max_string_size",			argv_1087.argv_1788 (argv_1474, "SAMPLE", "max_string_size",	1, 255));

	argv_4979 = argv_1789 ("SAMPLE",   "received_file_max_size");
	argv_1798.dns.set_received_file_max_size (argv_4979);

	argv_4516 ("WEB", "tool",							argv_1087.argv_1792 (argv_1474, "WEB", "tool"));	
	argv_4516 ("WEB", "param",							argv_1087.argv_1792 (argv_1474, "WEB", "param"));	

	argv_4515 ("ZIP", "verbose_zip",						argv_1087.argv_1788 (argv_1474,   "ZIP", "verbose_zip", 0, 1));
	argv_4515 ("ZIP", "max_nb_file_in_archive",			argv_1087.argv_1788 (argv_1474,   "ZIP", "max_nb_file_in_archive", 1, 60));

	argv_4516 ("ZIP", "tool",							argv_1087.argv_1792 (argv_1474, "ZIP", "tool"));	
	argv_4516 ("ZIP", "param",							argv_1087.argv_1792 (argv_1474, "ZIP", "param"));	
	svalue = argv_1793("WEB", "tool"); 
	argv_1798.dns.set_web_tool	(svalue.c_str());
	svalue = argv_1793("WEB", "param");
	argv_1798.dns.set_web_param (svalue.c_str());
	svalue = argv_1793("ZIP", "tool");
	argv_1798.dns.set_zip_tool	(svalue.c_str());
	svalue = argv_1793("ZIP", "param");
	argv_1798.dns.set_zip_param (svalue.c_str());

	argv_4515 ("TIMEOUT",   "update_period",				argv_1087.argv_1788 (argv_1474, "TIMEOUT", "update_period", 0, 172800)); // 48h00 max
	argv_4979 = argv_1789 ("TIMEOUT",   "update_period");
	argv_1798.dns.set_update_period (argv_4979);

	argv_4515 ("TIMEOUT",   "ancilate_default_period",		argv_1087.argv_1788 (argv_1474, "TIMEOUT", "ancilate_default_period", 0, 240)); // 240 hours max (10 days)
	argv_4979 = argv_1789 ("TIMEOUT",   "ancilate_default_period");
	argv_1798.dns.set_ancilate_default_period (argv_4979);

	argv_4515 ("TIMEOUT",   "ancilate_fast_mode_enabled",	argv_1087.argv_1788 (argv_1474, "TIMEOUT", "ancilate_fast_mode_enabled", 0, 1)); 
	argv_4979 = argv_1789 ("TIMEOUT",   "ancilate_fast_mode_enabled");
	argv_1798.dns.set_ancilate_fast_mode_enabled(false);
	if (argv_4979 == 1) {
		argv_1798.dns.set_ancilate_fast_mode_enabled(true);
	}

	argv_4515 ("TIMEOUT",   "socket_max_inactivity_time",				argv_1087.argv_1788 (argv_1474, "TIMEOUT", "socket_max_inactivity_time", 1, 36000)); // seconds
	argv_4979 = argv_1789 ("TIMEOUT",   "socket_max_inactivity_time");
	argv_1798.dns.set_socket_max_inactivity_time (argv_4979);

	argv_4515 ("TIMEOUT",   "observer_refresh_period",				argv_1087.argv_1788 (argv_1474, "TIMEOUT", "observer_refresh_period", 1, 7200)); // max: 2 hours
	argv_4979 = argv_1789 ("TIMEOUT",   "observer_refresh_period");
	argv_1798.dns.set_observer_refresh_period (argv_4979);

	argv_4515 ("TIMEOUT",   "batch_processor_period",		argv_1087.argv_1788 (argv_1474, "TIMEOUT", "batch_processor_period", 0, 864000)); // 240h00 max
	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "abort_scan_if_too_long", 0, 1);
	bool bval = true;
	if (argv_4979 == 0) {
		bval = false;
	}

	argv_4515 ("TIMEOUT",   "batch_processor_enabled",	argv_1087.argv_1788 (argv_1474, "TIMEOUT", "batch_processor_enabled", 0, 1)); 
	argv_4979 = argv_1789 ("TIMEOUT",   "batch_processor_enabled");
	argv_1798.dns.set_batch_processor_enabled(false);
	if (argv_4979 == 1) {
		argv_1798.dns.set_batch_processor_enabled(true);
	}

	argv_4515 ("TIMEOUT",   "ancilate_enabled",	argv_1087.argv_1788 (argv_1474, "TIMEOUT", "ancilate_enabled", 0, 1)); 
	argv_4979 = argv_1789 ("TIMEOUT",   "ancilate_enabled");
	argv_1798.dns.set_ancilate_enabled(false);
	if (argv_4979 == 1) {
		argv_1798.dns.set_ancilate_enabled(true);
	}

	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "nb_retry_log_file", 0, 9999999);
	argv_4515 ("TIMEOUT", "nb_retry_log_file", argv_4979);

	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "sleep_time_before_retry_log", 0, 120000); // 2 minutes max
	argv_4515 ("TIMEOUT", "sleep_time_before_retry_log", argv_4979);

	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "nb_retry_scan", 0, 9999999);
	argv_4515 ("TIMEOUT", "nb_retry_scan", argv_4979);

	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "sleep_time_before_retry_scan", 0, 24000000); // 400 minutes max
	argv_4515 ("TIMEOUT", "sleep_time_before_retry_scan", argv_4979);

	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "symantec_max_log_wait_timeout", 0, 7200); // in seconds
	argv_4515 ("TIMEOUT", "symantec_max_log_wait_timeout", argv_4979);
	
	argv_1798.dns.set_abort_scan_if_too_long (bval);
	argv_4515 ("TIMEOUT",   "abort_scan_if_too_long",		bval); 
	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "avx_max_scan_duration", 2, 86400);
	argv_1798.dns.set_avx_max_scan_duration (argv_4979);
	argv_4515 ("TIMEOUT",   "avx_max_scan_duration",		argv_4979); // 24h00 max

	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "unzip_maximum_duration", 1, 3600); // 1 second to 1 hour
	argv_4515 ("TIMEOUT",   "unzip_maximum_duration",		argv_4979); // 1 hour max
	argv_1798.dns.set_unzip_maximum_duration (argv_4979);
	
	argv_4979 = argv_1087.argv_1788 (argv_1474, "TIMEOUT", "maximum_update_duration", 1, 3600); // 1 second to 1 hour
	argv_4515 ("TIMEOUT",   "maximum_update_duration",		argv_4979); // 1 hour max
	argv_1798.dns.set_max_update_duration (argv_4979);

	argv_4515 ("MD5",   "enable_md5",   argv_1087.argv_1788 (argv_1474, "MD5", "enable_md5",0,1));

	argv_4515 ("THREAD_QUEUE",   "load_result_queue_size",	argv_1087.argv_1788 (argv_1474, "THREAD_QUEUE", "load_result_queue_size", 1, 655360));
	argv_4515 ("THREAD_QUEUE",   "avx_runner_queue_size",  argv_1087.argv_1788 (argv_1474, "THREAD_QUEUE", "avx_runner_queue_size",  1, 655360));
	argv_4515 ("THREAD_QUEUE",   "scan_result_queue_size", argv_1087.argv_1788 (argv_1474, "THREAD_QUEUE", "scan_result_queue_size", 1, 655360));
	argv_4515 ("THREAD_QUEUE",   "batch_result_queue_size",argv_1087.argv_1788 (argv_1474, "THREAD_QUEUE", "batch_result_queue_size",1, 655360));
	argv_4515 ("THREAD_QUEUE",   "zip_queue_size",         argv_1087.argv_1788 (argv_1474, "THREAD_QUEUE", "zip_queue_size",         1, 655360));

	argv_4515   ("AVX", "nb_instance_per_avx",		argv_1087.argv_1788 (argv_1474, "AVX", "nb_instance_per_avx", 1 ,1)); // feature disabled.
	argv_4515	 ("AVX", "view_dos_window",			argv_1087.argv_1788 (argv_1474, "AVX", "view_dos_window", 0,1));	
	argv_4516 ("AVX", "kill_command",			argv_1087.argv_1792 (argv_1474, "AVX", "kill_command"));
	argv_4516 ("AVX", "ps_command",				argv_1087.argv_1792 (argv_1474, "AVX", "ps_command"));
	argv_4515	 ("AVX", "synchronous_mode",		argv_1087.argv_1788 (argv_1474, "AVX", "synchronous_mode", 0,1));	
	
	// retrieve the AVX runners list
	vector<string> v_values;
	v_values = argv_1087.argv_1773 (argv_1474, "AVX", "argv_1424");
	argv_4514 ("AVX", "argv_1424", v_values);
	argv_4883 i = 0;
	argv_4883 nb_avx = v_values.size ();
	// argv_4243 to parse avx runners configuration files
	Cconf_avx_runner conf_avx_runner;
	argv_1798.dns.set_nb_avx (nb_avx); // set the number of scanners into DNS
	argv_1798.dns.set_nb_instance_per_avx (argv_1789 ("AVX", "nb_instance_per_avx"));

	for (i=0 ; i<nb_avx ; i++) {
		argv_4970.push_back (conf_avx_runner);
	}

	string full_conf_filename;
	string base_dir = argv_1798.dns.get_base_folder (); 
	for (i=0 ; i<nb_avx ; i++) { // now perform parse
		full_conf_filename = base_dir + "\\" + v_values[i];
		// MessageBox (NULL, full_conf_filename.c_str(), "", MB_OK);
		bret = argv_4970[i].argv_2274 (full_conf_filename);
		if (bret == false) {
			argv_1798.argv_2327.argv_2323 (argv_1346, "+++ failed to parse argv_1084 argv_1424 : ", full_conf_filename.c_str());
			break;
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
