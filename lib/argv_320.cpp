// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_320.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the necessary objects
// @@ to communicate via a argv_2420 link 
// @@ (argv_4570 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_378.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	none		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ copy constructor of the 'argv_1106' argv_3656.
// @@ Does nothing as the copy constructor is private and
// @@ thus should never be called.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1106::argv_1106 (const argv_1106& _p) {
	;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	operator=
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ argv_1106& : packet to use to perform the copy.
// @@	
// @@ RETURN VALUE	:
// @@ argv_1106& : the argv_1148 argv_3656's instance.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ assignment operator of the argv_1106 argv_3656.
// @@ does nothing because it is private and thus should
// @@ never be used.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1106& argv_1106::operator= (argv_1106& _p) {
	return (*this);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1106		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bring the argv_1106 argv_3656 
// @@ back to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1106::argv_1106 () {
	argv_1643				= NULL;
	argv_1645				= NULL;
	argv_4849			= "";
#if defined (__WIN32_OS__)
	argv_4502			= "\\";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	argv_4502			= "/";
#endif // #if defined (__LINUX_OS__)
	argv_830			= NULL;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4405		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called after a argv_1106 was used
// @@ and before another use. It resets some important fields
// @@ to their initial argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4405 () {
	argv_4536 argv_2072				= argv_3778;
	argv_3604					= 0;
	nb_remaining			= 0;
	offset					= 0;
	argv_4622					= argv_3770;
	argv_817				= 0;
	argv_1444				= 0;
	argv_4346		= "";
	argv_1476			= false;
	argv_771			= false;
	argv_1222	= false;
	argv_1446			= "";
	
	if (argv_1643 != NULL) {
		fclose (argv_1643);
		argv_1643 = NULL;
	}
	if (argv_1645 != NULL) {
		fclose (argv_1645);
		argv_1645 = NULL;
	}
	if (argv_830 != NULL) {
		delete [] argv_830;
		argv_830 = NULL;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	reset		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bring the argv_1106 argv_3656
// @@ back to it's virgin argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::reset () {
	argv_4536 argv_2072		= argv_3778;
	argv_4753		= argv_3817;
	argv_4966		= argv_3817;
	argv_4405 ();

	// associate the argv_1982 argv_5011 it's corresponding part of the argv_826 
	argv_2072 = argv_1982.init (&argv_826[0], argv_3701);
	if (argv_2072 == argv_3740) { // argv_1982 init was succesful
		// associate the argv_815 argv_5011 it's corresponding part of the argv_826 
		argv_2072 = argv_815.init (&argv_826[argv_3701], argv_3699 - argv_3701);
	}

	if (argv_2072 == argv_3740) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4517		
// @@
// @@ INPUT			:	
// @@ _tmp_folder: argv_876: argv_3557 of the directory to use
// @@   when a argv_1424 packet is received.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set the temporary folder
// @@ that is required because the packet may receive
// @@ a argv_1424, and thus a temporary argv_1424 must be created
// @@ for reception, and this temporary argv_1424 is created
// @@ in the temporary folder '_tmp_folder'.
// @@
// @@ CONTRACT 		:	
// @@ - '_tmp_folder' parameter should not be NULL.
// @@ - '_tmp_folder' should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4517 (argv_876 _tmp_folder) {
	argv_4536 argv_2072 = argv_3778;
	if ((_tmp_folder == NULL) || (strlen (_tmp_folder) == 0)) {
		argv_2072 = argv_3757;
	}
	else {
		argv_4849 = _tmp_folder;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4495		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1148 packet was totally sent,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the
// @@ argv_1148 packet was entirely sent or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1106::argv_4495 () {
	return (argv_4622 == argv_3775);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4341		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the packet was fully received,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the
// @@ argv_1148 packet was entirely received or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1106::argv_4341 () {
	return (argv_4622 == argv_3771);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1790		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _size: argv_4883&: the size of the packet : argv_1982 size + argv_815 size.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the packet size, the 
// @@ packet size being the sum of the argv_1982 size and the 
// @@ argv_815 size.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_1790 (argv_4883& _size) {
	argv_4536 argv_2072			= argv_3778;
	argv_4883 header_size	= 0;
	argv_4883 argv_817		= 0;
	_size				= 0;

	argv_2072 = argv_1982.argv_1790 (header_size);
	if (argv_2072 == argv_3740) {
		argv_2072 = argv_815.argv_1790 (argv_817);
		if (argv_2072 == argv_3740) {
			_size = header_size + argv_817;	
		}
	}

	if (argv_2072 == argv_3740) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_3698		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 the packet for 
// @@ sending by updating the argv_1982's fields. This function
// @@ is necessary because we need to tell the packet that
// @@ we won't argv_646 more argv_1178 into it's argv_815.
// @@ 
// @@ Notice : 'argv_3698' function is not called if the packet 
// @@   is to argv_4490 a argv_1424.
// @@
// @@ CONTRACT 		:	
// @@ - the packet argv_4860 should have been set prior to this call.
// @@ - the packet argv_815 should contain some argv_1178.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_3698 () {
	argv_4536 argv_2072	= argv_3778;
	if (argv_4966 == argv_3817) {
		argv_2072 = argv_3750; 
	}
	else { // packet argv_4860 is OK
		argv_2072 = argv_815.argv_1790 (argv_817);
		if (argv_2072 == argv_3740) {
			if (argv_817 == 0) {
				argv_2072 = argv_3754;
			}
			else { // packet argv_815 is not empty
				argv_4753 = argv_3779;
				// insert the packet argv_4749 argv_4860 into the argv_1982
				argv_2072 = argv_1982.insert (argv_4753);
				if (argv_2072 == argv_3740) {
					// insert the packet user argv_4860 into the argv_1982
					argv_2072 = argv_1982.insert (argv_4966);
					if (argv_2072 == argv_3740) {
						// insert the argv_815 size into the argv_1982
						argv_2072 = argv_1982.insert (argv_817);
						if (argv_2072 == argv_3740) {
							argv_4622 = argv_3769;
						}
					}
				}
			}
		}
	}

	if (argv_2072 == argv_3740) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4518		
// @@
// @@ INPUT			:	
// @@ _type: argv_4881: the user argv_4860 to be assigned to the packet.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a user argv_4860 to the argv_1106
// @@ notice that the argv_4749 argv_4860 is hidden for the argv_1106's user.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4518 (argv_4881 _type) {
	argv_4536 argv_2072	= argv_3778;
	argv_4966	= _type;
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1794		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _extracted_type: argv_4881&: user argv_4860 of the argv_1106.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the user argv_4860 associated
// @@ argv_5011 the argv_1106.
// @@
// @@ CONTRACT 		:	
// @@ - user argv_4860 of the argv_1106 should have been set prior to
// @@   this call using the 'argv_4518' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_1794 (argv_4881& _extracted_type) {
	argv_4536 argv_2072 = argv_3778;
	if (argv_4966 == argv_3817) {
		argv_2072 = PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET; 
	}
	else {
		_extracted_type	= argv_4966;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_4881: the 1 byte argv_1178 to insert into the packet's argv_815.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 1 byte argv_1178 into the argv_1106.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::insert (argv_4881 _data) {
	argv_4536 argv_2072	= argv_3778;
	argv_2072 = argv_815.insert (_data);
	if (argv_2072 == argv_3740) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data&: argv_4881 : the 1 byte argv_1178 extracted from the argv_1106.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 a 1 byte argv_1178 from
// @@ the argv_1106 argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_1397 (argv_4881& _data) {
	argv_4536 argv_2072	= argv_3778;
	if (argv_4622 != argv_3771) {
		argv_2072 = argv_3755;
	}
	else { // packet argv_4622 is OK
		argv_2072 = argv_815.argv_1397 (_data);
		if (argv_2072 == argv_3740) { // remap error argv_976
			argv_2072 = argv_3778;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_4882: the 2 argv_837 argv_1178 to insert into the packet's argv_815.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 2 argv_837 argv_1178 into the argv_1106.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::insert (argv_4882 _data) {
	argv_4536 argv_2072 = argv_3778;
	argv_2072 = argv_815.insert (_data);
	if (argv_2072 == argv_3740) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data: argv_4882& : the 2 argv_837 argv_1178 extracted from the argv_1106.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 a 2 argv_837 argv_1178 from
// @@ the argv_1106 argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_1397 (argv_4882& _data) {
	argv_4536 argv_2072 = argv_3778;
	if (argv_4622 != argv_3771) {
		argv_2072 = argv_3755;
	}
	else { // packet argv_4622 is OK
		argv_2072 = argv_815.argv_1397 (_data);
		if (argv_2072 == argv_3740) { // remap error argv_976
			argv_2072 = argv_3778;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_4883: the 4 argv_837 argv_1178 to insert into the packet's argv_815.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert a 4 argv_837 argv_1178 into the argv_1106.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::insert (argv_4883 _data) {
	argv_4536 argv_2072	= argv_3778;
	argv_2072 = argv_815.insert (_data);
	if (argv_2072 == argv_3740) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _data: argv_4883& : the 4 argv_837 argv_1178 extracted from the argv_1106.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 a 4 argv_837 argv_1178 from
// @@ the argv_1106 argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_1397 (argv_4883& _data) {
	argv_4536 argv_2072	= argv_3778;
	if (argv_4622 != argv_3771) {
		argv_2072 = argv_3755;
	}
	else { // packet argv_4622 is OK
		argv_2072 = argv_815.argv_1397 (_data);
		if (argv_2072 == argv_3740) { // remap error argv_976
			argv_2072 = argv_3778;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_876: the string to insert into the argv_1106.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string pointed to by
// @@ the '_data' parameter into the argv_1106 argv_3656.
// @@
// @@ CONTRACT 		:	
// @@ - '_data' parameter should not be a NULL pointer.
// @@ - '_data' parameter should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::insert (argv_876 _data) {
	argv_4536 argv_2072 = argv_3778;
	if ((_data == NULL) || (strlen(_data) == 0)) {
		argv_2072 = argv_3757;
	}
	else { // parameter is OK
		argv_2072 = argv_815.insert (_data);
		if (argv_2072 == argv_3740) { // remap error argv_976
			argv_2072 = argv_3778;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data : const string&: the string to insert into
// @@   the argv_1106.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string '_data'
// @@ into the argv_1106 argv_3656.
// @@
// @@ CONTRACT 		:	
// @@ - the '_data' should not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::insert (const string& _data) {
	argv_4536 argv_2072	= argv_3778;
	argv_2072 = argv_815.insert (_data);
	if (argv_2072 == argv_3740) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: string&: string extracted from the argv_1106.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 a string from the 
// @@ argv_1106.
// @@
// @@ CONTRACT 		:	
// @@ - a full packet should have been received.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_1397 (string& _data) {
	argv_4536 argv_2072	= argv_3778;
	if (argv_4622 != argv_3771) {
		argv_2072 = argv_3755;
	}
	else { // packet argv_4622 is OK
		argv_2072 = argv_815.argv_1397 (_data);
		if (argv_2072 == argv_3740) { // remap error argv_976
			argv_2072 = argv_3778;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1745		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique argv_1474
// @@ using the temporary folder that was previously set
// @@ by another function.
// @@
// @@ CONTRACT 		:	
// @@ - the temporary folder should have been set prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_1745 (string& _tmp_filename) {
	argv_4536 argv_2072 = argv_3778;
	_tmp_filename = "";
	if (argv_4849 == "") {
		argv_2072 = PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET;
	}
	else { // argv_4622 is coherent argv_5011 the requested operation
		char argv_4846[MAX_PATH];
	#if defined (__WIN32_OS__)
		GetLocalTime (&argv_4842);
		argv_4569 (argv_4846, MAX_PATH, "%s%s%d_%d_%d_%d_%d_%d_%d.argv_4846", argv_4849.c_str(), argv_4502.c_str(), argv_4842.wYear, argv_4842.wMonth, argv_4842.wDay, argv_4842.wHour, argv_4842.wMinute, argv_4842.wSecond, argv_4842.wMilliseconds);
	#endif // #if defined (__WIN32_OS__)
	#if defined (__LINUX_OS__)
		argv_1160 = argv_4843 (NULL);
		argv_4845 = localtime (&argv_1160);
		gettimeofday (&argv_4758, NULL);
		//srand ( argv_4758.tv_usec );
		argv_4569 (argv_4846, MAX_PATH, "%s%s%d_%d_%d_%d_%d_%d_%d.argv_4846", argv_4849.c_str(), argv_4502.c_str(), argv_4845->tm_year, argv_4845->tm_mon, argv_4845->tm_mday, argv_4845->tm_hour, argv_4845->tm_min, argv_4845->tm_sec, (argv_4883) argv_4758.tv_usec);
	#endif // #if defined (__LINUX_OS__)
		argv_4846[MAX_PATH - 1] = '\0';
		_tmp_filename = argv_4846;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4239		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to ensure that after a packet was
// @@ entirely received, everything  is coherent.
// @@ the following steps are performed :
// @@ - ensure that the packet's argv_4749 argv_4860 is coherent.
// @@ - ensure that no argv_1424 was received if the argv_1424 transfert
// @@   feature was not enabled.
// @@ - the temporary argv_1474 should be empty.
// @@
// @@ Furthermore, if a packet was received, then a unique
// @@ temporary argv_1474 is chosen and this argv_1424 is opened
// @@ so that the received content can be saved.
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4239 () {
	argv_4536 argv_2072 = argv_3778;
	if ((argv_4753 != argv_3779) && (argv_4753 != argv_3780)) {
		argv_2072 = argv_3758;
	}
	else if (argv_4753 == argv_3780) {
		if (argv_1476 == false) {
			argv_2072 = argv_3749;
		}
		else if ((argv_771==true) && (argv_4346 != "")) { 
			// the argv_1474 should be empty
			argv_2072 = argv_3782;	
		}
		else if (argv_1643 != NULL) {
			argv_2072 = argv_3756;
		}
		else { // all conditions are met
			if (argv_771 == true) {
				// choose a temporary argv_1474
				 argv_2072 = argv_1745 (argv_4346);
			}

			if (argv_2072 ==  argv_3778) {
				// open the temporary receive argv_1424
				argv_1643 = fopen (argv_4346.c_str(), "wb");
				if ( ! argv_1643) {
					argv_2072 = argv_3743;
				}
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4269		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the important fields
// @@ from a received packet :
// @@ - the argv_4749 argv_4860.
// @@ - the user argv_4860.
// @@ - the argv_815 size.
// @@ The argv_4622 of the argv_1106 argv_3656 is modified accordingly.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4269 () {
	argv_4536 argv_2072			= argv_3778;
	argv_817			= 0;

	// argv_1397 the packet's argv_4749 argv_4860 from the argv_1982
	argv_2072 = argv_1982.argv_1397 (argv_4753);

	if (argv_2072 == argv_3740) { // the argv_4749 argv_4860 was retrieved succesfully
		argv_2072 = argv_4239 ();

		if (argv_2072 == argv_3778) { 
			// argv_1397 the packet's user argv_4860 from the argv_1982
			argv_2072 = argv_1982.argv_1397 (argv_4966);
			if (argv_2072 == argv_3740) {
				// argv_1397 the packet's argv_815's size from the argv_1982
				argv_2072 = argv_1982.argv_1397 (argv_817);

				if (argv_2072 == argv_3740) {
					// argv_4243 the packet to perform the reception of the argv_815
					argv_3604			= 0;
					nb_remaining	= argv_817;
					if (nb_remaining > (argv_3699 - argv_3701)) {
						argv_2072		= argv_3734;
					}
					else { // the argv_815 size is coherent
						offset		= argv_3701;
						argv_4622		= argv_3772; // update the argv_4622 
						// adjust the argv_815's coder so that overflow can be detected
						argv_2072 = argv_815.init (&argv_826[argv_3701], argv_817);
					}
				}
			}
		}
	}

	if (argv_2072 == argv_3740) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4345		
// @@
// @@ INPUT			:	
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_972&: the argv_2420 to use for reception (connection).
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive a argv_1424 via the connection
// @@ established argv_5011 the '_media' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4345 (argv_972& _media, argv_4536 _timeout_second) {
	argv_4536 argv_2072			= argv_3778;
	argv_4883 actual_nb_recv	= 0;
	bool finished		= false;

	while ((finished==false) && (total_nb_remaining > 0)) {
		argv_2072 = _media.argv_4338 (&argv_830[argv_3604], nb_remaining, actual_nb_recv, _timeout_second);

		if (argv_2072 == argv_2448) {
			argv_3604			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_1148 argv_795 fully received
				// dump this argv_795 to the argv_1424
				if (fwrite (argv_830, 1, argv_3604, argv_1643) != argv_3604) {
					argv_2072 = argv_3765;
					finished = true;
				}
				else { // argv_795 succesfully dumped to the destination argv_1424
					argv_4854		+= argv_3604;
					total_nb_remaining	-= argv_3604;
					if (total_nb_remaining > 0) {
						if (total_nb_remaining < argv_3699) {
							nb_remaining = total_nb_remaining;	
						}
						else { // the remaining amount of argv_1178 is larger than the argv_795 size
							nb_remaining = argv_3699;
						}
						argv_3604 = 0;
					}
					else { // all blocks succesfully received and dumped to destination argv_1424.
						argv_4622		= argv_3771;
						finished	= true;
					}
				}
			}
		}
		else { // argv_4337 error occured
			finished = true;
		}
	}

	if ((argv_2072 == argv_2448) || (argv_2072 == argv_3740)) { // remap error argv_976 
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4344		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the necessary steps
// @@ when a given argv_1424 was entirely received.
// @@ the following steps are performed :
// @@ - the temporary argv_1424 descriptor is closed.
// @@ - the input/output argv_826 is deallocated.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4344 () {
	argv_4536 argv_2072 = argv_3778;
	if (argv_4753 == argv_3780) {
		if (argv_1643 != NULL) {
			if (fclose (argv_1643) != 0) {
				argv_2072 = argv_3742;
			} 
			argv_1643 = NULL;
		}
	}

	if (argv_830 != NULL) {
		delete [] argv_830;
		argv_830 = NULL;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4266		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the packet argv_4622 after the
// @@ packet's argv_815 was fully received.
// @@ If the argv_4749 argv_4860 of the packet is argv_3780, 
// @@ then the function allocates the IO argv_826 to argv_4243 the
// @@ argv_1424 transfert.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4266 () {
	argv_4536 argv_2072 = argv_3778;
	if (argv_4753 == argv_3779) {
		argv_4622 = argv_3771;
	}
	else if (argv_4753 == argv_3780) {
		argv_4854		= 0;
		argv_3604				= 0;	

		// argv_1397 the unique field of the argv_815 (the argv_1424 size, on 4 argv_837)
		argv_2072 = argv_815.argv_1397 (total_nb_remaining);

		if (argv_2072 == argv_3740) {
			argv_4622 = argv_3773;
			// divide the argv_1424 into blocks to be received
			if (total_nb_remaining < argv_3699) {
				nb_remaining = total_nb_remaining;	
			}
			else { // the remaining amount of argv_1178 is larger than the argv_795 size
				nb_remaining = argv_3699;
			}

			// allocate the IO argv_826
			if (argv_830 != NULL) {
				argv_2072 = argv_3753;
			}
			else { // IO argv_826 not allocated yet
				argv_830 = new (std::nothrow) argv_4881[argv_3702];
				if (argv_830 == NULL) {
					argv_2072 = argv_3759;
				}
			}
		}
	}

	if ((argv_2072 == argv_2448) || (argv_2072 == argv_3740)) { // remap error argv_976 
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4347		
// @@
// @@ INPUT			:	
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_972&: the communication channel to use for
// @@  argv_1178 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a kind of dispatcher that permits to 
// @@ perform the adequate process considering the argv_1148
// @@ argv_4622 of the argv_1106 argv_3656.
// @@ This scheme is necessary when using sockets in non-blocking
// @@ mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4347 (argv_972& _media, argv_4536 _timeout_second) {
	argv_4536 argv_2072 = argv_3778;
	argv_4883 actual_nb_recv = 0;

	if (argv_4622 == argv_3770) {
		argv_4622			= argv_3774;
		nb_remaining	= argv_3701;
		argv_3604			= 0;
		offset			= 0;
	}

	if ((argv_2072 == argv_3778) && (argv_4622 == argv_3774)) {
		argv_2072 = _media.argv_4338 (&argv_826[offset + argv_3604], nb_remaining, actual_nb_recv, _timeout_second);
		if (argv_2072 == argv_2448) {
			argv_2072			 = argv_3778;
			argv_3604			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_1982 fully read
				argv_2072 = argv_4269 ();
			}
		}
	}

	if ((argv_2072 == argv_3778) && (argv_4622 == argv_3772)) {
		argv_2072 = _media.argv_4338 (&argv_826[offset + argv_3604], nb_remaining, actual_nb_recv, _timeout_second);
		if (argv_2072 == argv_2448) {
			argv_2072			 = argv_3778;
			argv_3604			+= actual_nb_recv;
			nb_remaining	-= actual_nb_recv;
			if (nb_remaining == 0) { // argv_815 fully read
				argv_2072 = argv_4266 ();
			}
		}
	}

	if ((argv_2072 == argv_3778) && (argv_4622 == argv_3773)) {
		argv_2072 = argv_4345 (_media, _timeout_second);
	}

	if ((argv_2072 == argv_3778) && (argv_4622 == argv_3771)) {
		argv_2072 = argv_4344 ();
	}

	if (argv_2072 == argv_2448) { // remap error argv_976 
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4340		
// @@
// @@ INPUT			:	
// @@ _dest_filename: argv_876: argv_3557 of the argv_1424 where the received
// @@   argv_1178 must be saved.	
// @@
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_972&: the communication channel to use for
// @@   the argv_1178 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive a remote argv_1424 and to 
// @@ save it to the local argv_1424 whose argv_3557 was given as 
// @@ a parameter.
// @@
// @@ CONTRACT 		:	
// @@ - packet argv_4622 must be coherent argv_5011 the operation.
// @@ - '_dest_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4340 (argv_972& _media, argv_4536 _timeout_second, argv_876 _dest_filename) {
	argv_4536 argv_2072 = argv_3778;
	if ((argv_4622 != argv_3770) && 
		(argv_4622 != argv_3774) &&
		(argv_4622 != argv_3772)   &&
		(argv_4622 != argv_3773) ) {
		argv_2072 = argv_3751;
	}
	else if ((_dest_filename == NULL) || (strlen(_dest_filename) == 0)) {
		argv_2072 = argv_3757;
	}
	else { // status and parameters are OK
		argv_771		= false;
		argv_1476		= true;
		argv_4346	= _dest_filename;

		argv_2072 = argv_4347 (_media, _timeout_second);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	none		
// @@
// @@ INPUT			:	
// @@ _files_allowed: bool: true if the packet is allowed to receive
// @@                 remote files,
// @@                 false otherwise.	
// @@
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_972&: the communication channel to use for
// @@   the argv_1178 reception.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive either argv_1178, 
// @@ or a remote argv_1424.
// @@ in case of a argv_1424, the flag '_files_allowed' must have been 
// @@ enabled and the packet will generate a temporary argv_1474 for 
// @@ the received argv_1424, the user must then call the "argv_1785" 
// @@ function to obtain the argv_3557 of the temporary argv_1424 chosen 
// @@ by the packet.
// @@
// @@ CONTRACT 		:	
// @@ - packet's argv_4622 must be coherent argv_5011 the operation.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4337 (argv_972& _media, argv_4536 _timeout_second, bool _files_allowed) {
	argv_4536 argv_2072 = argv_3778;
	if ((argv_4622 != argv_3770) && 
		(argv_4622 != argv_3774) &&
		(argv_4622 != argv_3772)   &&
		(argv_4622 != argv_3773) ) {
		argv_2072 = argv_3751;
	}
	else { // packet argv_4622 is OK
		argv_1476		= _files_allowed;
		if (argv_1476 == true) {
			argv_771	= true; // temp argv_1474 will be chosen randomly
		}

		if ((argv_771 == true) && (argv_4849 == "")) {
			argv_2072 = PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET;
		}
		else { // conditions are met for argv_1424 reception
			argv_2072 = argv_4347 (_media, _timeout_second);
		}
	}
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_1785		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _file_received: bool&: set to true if a argv_1424 was received,
// @@                  set to false if argv_1178 was received instead.
// @@
// @@ _user_type: argv_4881&: the user argv_4860 associated argv_5011 the 
// @@    received packet
// @@
// @@ _tmp_filename: string&: the argv_3557 of the temporary argv_1424
// @@   chosen by the argv_1106 if the '_file_received' flag
// @@   is true.
// @@ 
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the reception report
// @@ after a given packet was succesfully received.
// @@ As a packet can either receive some argv_1178 or a argv_1424,
// @@ the flag '_file_received' tells whether a argv_1424, or some
// @@ argv_1178 were received.
// @@ Then the argv_4966 is also returned.
// @@ and eventually if '_file_received' was set to true, it
// @@ means that a argv_1424 was received, and the argv_3557 of received
// @@ argv_1424 was automatically chosen by the argv_1106 itself, and
// @@ the argv_3557 of this temporary argv_1424 is returned via the
// @@ '_tmp_filename' argument.
// @@
// @@ CONTRACT 		:	
// @@ - argv_1106 must be in argv_3771 argv_4622.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_1785 (bool& _file_received, argv_4881& _user_type, string& _tmp_filename) {
	argv_4536 argv_2072 = argv_3778;
	if (argv_4622 != argv_3771) {
		argv_2072 = argv_3751;	
	}
	else { // status is OK to proceed
		_file_received = false;
		if (argv_4753 == argv_3780) {
			_file_received = true;
		}
		_user_type		= argv_4966;

		if (argv_4753 == argv_3780) {
			_tmp_filename = argv_4346;
			// reset the temporary argv_1474
			argv_4346 = "";
		}
		else { // the packet received was a argv_1178 packet, not a argv_1424 packet
			_tmp_filename = "";	
		}
	}
	return (argv_2072);
}



// lightweigh retrieval of the packet's user argv_4860.
void argv_1106::argv_1795 (argv_4881& _user_type) {
	_user_type = argv_4966;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4274		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to update the argv_1106 argv_4622 after
// @@ the packet was totally sent.
// @@ Notice that if the packet was a argv_1424 packet, then
// @@ the packet itself is followed by the remote argv_1424's content,
// @@ Thus in that case, the function allocates an IO argv_826.
// @@
// @@ Notice that the argv_1424 content (if any) is not considered
// @@ a part of the packet (it is outside of the argv_815).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4274 () {
	argv_4536 argv_2072 = argv_3778;
	if (argv_4753 == argv_3779) {
		argv_4622 = argv_3775;
	}
	else if (argv_4753 == argv_3780) {
		argv_4622 = argv_3776; 

		argv_4854		= 0;
		total_nb_remaining	= argv_1444;
		argv_3604				= 0;
		if (total_nb_remaining < argv_3699) {
			nb_remaining	= argv_1444;
		}
		else {
			nb_remaining	= argv_3699;
		}

		// allocate the IO argv_826
		if (argv_830 != NULL) {
			argv_2072 = argv_3753;
		}
		else { // IO argv_826 not allocated yet
			argv_830 = new (std::nothrow) argv_4881[argv_3702];
			if (argv_830 == NULL) {
				argv_2072 = argv_3759;
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4500		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_972&: the communication channel to use for
// @@   the transfert.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4490 a given argv_1424 through the 
// @@ '_media' communication channel.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4500 (argv_972& _media) {
	argv_4536 argv_2072			= argv_3778;
	argv_4883 actual_nb_sent	= 0;
	bool finished		= false;
	argv_4883 nb_tmp			= 0;
	argv_4883 prior_file_pos = 0;

	while ((finished == false) && (total_nb_remaining > 0)) {
		prior_file_pos = ftell (argv_1645);

		nb_tmp = fread (argv_830, 1, nb_remaining, argv_1645);
		if (nb_tmp != nb_remaining) {
			argv_2072		= argv_3747;
			finished	= true;
		}
		else { // fread succeeded
			argv_2072 = _media.argv_4491 (&argv_830[argv_3604], nb_remaining, actual_nb_sent);

			if (argv_2072 == argv_2448) {
				argv_3604			+= actual_nb_sent;
				nb_remaining	-= actual_nb_sent;

				if (nb_remaining == 0) {
					argv_4854		+= argv_3604;
					total_nb_remaining	-= argv_3604;

					if (total_nb_remaining == 0) {
						argv_4622		= argv_3775;
						finished	= true;
					}
					else { // the argv_1424 was not fully sent yet
						argv_3604	= 0;
						if (total_nb_remaining < argv_3699) {
							nb_remaining = total_nb_remaining;
						}
						else {
							nb_remaining = argv_3699;
						}
					}
				}
			}
			else { // argv_4490 error occured
				if (argv_2072 == argv_2430) { // reposition the argv_1424
					if (fseek (argv_1645, prior_file_pos, SEEK_SET) != 0) {
						argv_2072 = argv_3748;
					}
				}
				finished = true; 
			}
		}
	}

	if (argv_2072 == argv_2448) { // remap error argv_976 
		argv_2072 = argv_3778;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4268		
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the necessary steps
// @@ after a argv_1424 was sent to a remote entity.
// @@ it does the following steps :
// @@ - argv_967 the argv_1424 descriptor of the argv_1424 that was sent.
// @@ - deallocate the IO argv_826.
// @@ - delete the argv_1424 sent if necessary
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4268 () {
	argv_4536 argv_2072 = argv_3778;
	if (argv_1645 != NULL) {
		if (fclose (argv_1645) != 0) {
			argv_2072 = argv_3745;
		}
		argv_1645 = NULL;

		// if the argv_1424 that was sent is to be deleted, then delete it
		if (argv_1222 == true) {
			if (argv_1221 (argv_1446.c_str()) == false) {
				if (argv_2072 == argv_3778) { // do not overwrite the argv_1148 error argv_976
					argv_2072 = argv_3741;
				}
			}
		}
	}

	if (argv_830 != NULL) {
		delete [] argv_830;
		argv_830 = NULL;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4490		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _media: argv_972& : the communication channel to use
// @@  for transfert.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4490 the argv_1148 packet to
// @@ the entity whose connection was established by the 
// @@ '_media' argv_3656.
// @@ if the argv_2420 is in non-blocking mode, the argv_4490 function
// @@ may not be able to argv_4490 the entire packet in a row, thus
// @@ the caller may have to call the argv_4490 function several argv_4843.
// @@ To determine whether the packet was entirely sent, the user
// @@ must use the 'argv_4495' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4490 (argv_972& _media) {
	argv_4536 argv_2072			= argv_3778;
	argv_4883 actual_nb_sent	= 0;
	if ((argv_4622 != argv_3769) && 
		(argv_4622 != argv_3777) && 
		(argv_4622 != argv_3776)) {
		argv_2072 = argv_3751;
	}
	else { // valid argv_4622 for this operation
		if (argv_4622 == argv_3769) { // argv_4490 operation not started yet
			argv_3604					= 0;
			argv_4883 header_size_tmp	= 0;
			argv_4883 body_size_tmp		= 0;
			argv_2072 = argv_1982.argv_1790 (header_size_tmp);
			if (argv_2072 == argv_3740) {
				argv_2072 = argv_815.argv_1790 (body_size_tmp);
				if (argv_2072 == argv_3740) {
					nb_remaining	= header_size_tmp + body_size_tmp;
					argv_4622			= argv_3777;
					argv_2072			= argv_3778;
				}
			}
		}

		// argv_4490 both argv_1982 & argv_815 in a row
		if ((argv_2072 == argv_3778) && (argv_4622 == argv_3777)) { 
			argv_2072 = _media.argv_4491 (&argv_826[argv_3604], nb_remaining, actual_nb_sent);
			if (argv_2072 == argv_2448) {
				argv_2072			= argv_3778;
				argv_3604			+= actual_nb_sent;
				nb_remaining	-= actual_nb_sent;
				if (nb_remaining == 0) {
					argv_2072 = argv_4274 ();
				}
			}
		}

		if ((argv_2072 == argv_3778) && (argv_4622 == argv_3776)) {
			argv_2072 = argv_4500 (_media);	
		}

		if ((argv_2072 == argv_3778) && (argv_4622 == argv_3775)) {
			argv_2072 = argv_4268 ();	
		}
	}

	if (argv_2072 == argv_2448) { // remap error argv_976
		argv_2072 = argv_3778;
	}
	else { // in case of error, we may have to argv_967 descriptors and delete argv_1424
		argv_4268 ();
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4256		
// @@
// @@ INPUT			:	
// @@ _filename: argv_876 : argv_3557 of the argv_1424 to argv_4490.	
// @@
// @@ _media: argv_972&: channel to use for transfert.
// @@
// @@ _user_type: argv_4860 to associate to the packet.
// @@ 
// @@ _del_file_after_send: bool: if set to true, then
// @@   the argv_1424 is deleted after it was sent to the peer.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 a given packet
// @@ to argv_4490 a given argv_1424.
// @@ Notice that most applications won't need to call
// @@ this function to argv_4490 a argv_1424, instead a call to the
// @@ the 'argv_4494' function will be appropriate.
// @@
// @@ This function is necessary for the event loop.
// @@
// @@ CONTRACT 		:	
// @@ - '_filename' parameter must not be a NULL pointer.
// @@ - '_filename' must be the argv_3557 of an existing argv_1424.
// @@ - another call to argv_4494 must not be in progress.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4256 (argv_876 _filename, argv_972& _media, argv_4881 _user_type, bool _del_file_after_send) {
	argv_4536 argv_2072	= argv_3778;
	if (_filename == NULL) {
		argv_2072 = argv_3757;
	}
	else if (argv_1645 != NULL) {
		argv_2072 = argv_3752;
	}

	if (argv_903 (_filename) == false) {
		argv_2072 = argv_3760;
	}
	else if (argv_4622 != argv_3770) {
		argv_2072 = argv_3751;
	}
	else { // all pre-conditions are met to proceed
		argv_1222 = _del_file_after_send; // set the argv_1424 deletion flag
		argv_1446 = "";
		if (argv_1222 == true) {
			argv_1446 = _filename;
		}
		
		argv_1444 = argv_1075 (_filename);
		if (argv_1444 == 0) { // failed, or argv_1424 is empty
			argv_2072 = argv_3744;
		}
		else { // open the argv_1424 to argv_4490
			argv_1645 = fopen (_filename, "rb");
			if (! argv_1645) {
				argv_2072 = argv_3746;
			}
			else { // argv_1424 was opened succesfully
				argv_4753		= argv_3780;
				argv_4966		= _user_type;
				argv_817		= 0;

				// here we argv_3698 the packet manually
				argv_2072 = argv_815.insert (argv_1444); // argv_815 contains only the argv_1424 size (4 argv_837)
				if (argv_2072 == argv_3740) {
					argv_2072 = argv_815.argv_1790 (argv_817);
				}
				
				if (argv_2072 == argv_3740) { // insert the argv_4749 argv_4860 into the argv_1982
					argv_2072 = argv_1982.insert (argv_4753); 
				}

				if (argv_2072 == argv_3740) { // insert the user argv_4860 into the argv_1982
					argv_2072 = argv_1982.insert (argv_4966); 
				}

				if (argv_2072 == argv_3740) { // insert the argv_815 size into the argv_1982
					argv_2072 = argv_1982.insert (argv_817); 
				}

				if (argv_2072 == argv_3740) {
					argv_4622 = argv_3769;
				}
			}
		}
	}

	if (argv_2072 == argv_3740) { 
		argv_2072 = argv_3778; // remap error argv_976
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1106	
// @@
// @@ FUNCTION		:	argv_4494		
// @@
// @@ INPUT			:	
// @@ _filename: argv_876 : argv_3557 of the argv_1424 to argv_4490.	
// @@
// @@ _media: argv_972&: channel to use for transfert.
// @@
// @@ _user_type: argv_4860 to associate to the packet.
// @@ 
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3778 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4490 the argv_1424 whose argv_3557
// @@ was given as a parameter through the channel '_media'
// @@ 
// @@ Notice : called only once, even if it blocks, 
// @@          argv_1726 calls are calls to argv_4490(), not argv_4494()
// @@
// @@ CONTRACT 		:	
// @@ - '_filename' parameter must not be a NULL pointer.
// @@ - '_filename' must be the argv_3557 of an existing argv_1424.
// @@ - another call to argv_4494 must not be in progress.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1106::argv_4494 (argv_876 _filename, argv_972& _media, argv_4881 _user_type, bool _delete_file_after_send) {
	argv_4536 argv_2072	= argv_3778;

	argv_2072 = argv_4256 (_filename, _media, _user_type, _delete_file_after_send);
	if (argv_2072 == argv_3778) {
		argv_2072  = argv_4490 (_media); // perform the actual argv_4490
	}

	if (argv_2072 == argv_3740) { 
		argv_2072 = argv_3778; // remap error argv_976
	}
	return (argv_2072);
}

// when forwarding a packet that was used to transmit a argv_1424, we need
// to insert the argv_3557 of the temporary argv_1424 into the packet argv_815
// instead of the packet size, thus we need to recreate a argv_815 and argv_3698 it
// 
// <------------  HEADER  ------------------------><----------  BODY ------------------->
// -------------------------------------------------------------------------------------
// | argv_3780 | argv_4966 | argv_817 | argv_1444 (4) | file_content		|
// -------------------------------------------------------------------------------------
//
// changed to =>
//
// <------------  HEADER  ----------------------><----------  BODY -------------------->
// -------------------------------------------------------------------------------------
// | argv_3781 | argv_4966 | temp argv_1474	                       |
// -------------------------------------------------------------------------------------
void argv_1106::argv_966 (argv_1106& _clone_pck) {
	_clone_pck.reset ();
	_clone_pck.argv_4753 = argv_3781;
	_clone_pck.argv_4518 (argv_4966);
	_clone_pck.insert (argv_4346);
	_clone_pck.argv_3698 ();
}

void argv_1106::argv_965 (argv_1106& _clone_pck, argv_4881 _clone_state) {
	if (argv_4753 == argv_3780) {
		argv_966 (_clone_pck);	
	}
	else {
		memcpy (_clone_pck.argv_826, argv_826, argv_3699);
		_clone_pck.argv_830				=	NULL;
		_clone_pck.argv_4753				=	argv_4753; 
		_clone_pck.argv_4966				=	argv_4966; 
		_clone_pck.argv_817				=	argv_817; 
		_clone_pck.argv_1643					=	NULL; 
		_clone_pck.argv_1645					=	NULL; 
		_clone_pck.argv_1444				=	argv_1444; 
		_clone_pck.argv_4346		=	argv_4346; 
		_clone_pck.argv_4849				=	argv_4849; 
		_clone_pck.argv_4502				=	argv_4502; 
		_clone_pck.argv_1476			=	argv_1476; 
		_clone_pck.argv_771			=	argv_771; 
		_clone_pck.argv_1222	=	argv_1222; 
		_clone_pck.argv_1446			=	argv_1446; 
		// here we modify the argv_4622 so that we can simulate the fact that the
		// packet was read or packed.
		_clone_pck.argv_4622					=	_clone_state;
		_clone_pck.argv_3604					=	argv_3604; 
		_clone_pck.nb_remaining				=	nb_remaining; 
		_clone_pck.argv_4854			=	argv_4854; 
		_clone_pck.total_nb_remaining		=	total_nb_remaining; 
		_clone_pck.offset					=	offset; 

		_clone_pck.argv_1982.init	(&_clone_pck.argv_826[0], argv_3701);
		_clone_pck.argv_815.init	(&_clone_pck.argv_826[argv_3701], argv_817);

		if (argv_4622 == argv_3771) {
			_clone_pck.argv_1982.insert_fake_buffer (argv_3701);
			_clone_pck.argv_815.insert_fake_buffer (argv_817);
		}
	}
}

argv_4536 argv_1106::argv_1493 (argv_1106 * _rich_pck_ptr, argv_4881 _rich_pck_type, argv_4883 _src_index, argv_4883 _src_gen, argv_4883 _dest_index, argv_4883 _dest_gen) {
	argv_4536 argv_2072 = argv_3778;
	argv_2072 = _rich_pck_ptr->reset ();
	if (argv_2072 == argv_3778) {
		argv_2072 = _rich_pck_ptr->argv_4518 (_rich_pck_type);
		if (argv_2072 == argv_3778) {
			argv_2072 = _rich_pck_ptr->insert (_src_index);
			if (argv_2072 == argv_3778) {
				argv_2072 = _rich_pck_ptr->insert (_src_gen);
				if (argv_2072 == argv_3778) {
					argv_2072 = _rich_pck_ptr->insert (_dest_index);
					if (argv_2072 == argv_3778) {
						_rich_pck_ptr->insert (_dest_gen);
						if (argv_2072 == argv_3778) {
							/*
							{
								FILE * argv_1510 = fopen ("C:\\debug_packet_log.txt", "ab");
								if (argv_1510) {
									argv_1236 ("argv_1106::argv_1493", argv_1510);
									fclose (argv_1510);
								}
							}*/
							argv_2072 = _rich_pck_ptr->insert (argv_4966);
							if (argv_2072 == argv_3778) { // copy the payload
								argv_2072 = _rich_pck_ptr->argv_815.insert_buffer (&argv_826[argv_3701], argv_817);
								if (argv_2072 == argv_3740) {
									argv_2072 = _rich_pck_ptr->argv_3698 ();
								}
							}
						}
					}
				}
			}
		}
	}
	return (argv_2072);
}


// the caller is supposed to have retrieved the
// - src_index
// - src_generation
// - dest_index
// - dest_generation
// - inner_type
// from the rich packet before calling us
// thus the argv_1148 pointer points on the payload
argv_4536 argv_1106::argv_1495 (argv_1106 * _naked_packet_ptr, argv_4881 _naked_pck_type) {
	argv_4536 argv_2072 = argv_3778;
	argv_2072 = _naked_packet_ptr->reset ();
	if (argv_2072 == argv_3778) {
		argv_2072 = _naked_packet_ptr->argv_4518 (_naked_pck_type);
		if (argv_2072 == argv_3778) {
			/*
			{
				FILE * argv_1510 = fopen ("C:\\debug_packet_log.txt", "ab");
				if (argv_1510) {
					argv_1236 ("argv_1106::argv_1495", argv_1510);
					fclose (argv_1510);
				}
			}*/
			argv_4881 * current_pointer = argv_815.argv_1753 ();
			argv_4883 fake_header_size = argv_817 - ((4+4) + (4+4) + 1);
			argv_2072 = _naked_packet_ptr->argv_815.insert_buffer (current_pointer, fake_header_size);
			if (argv_2072 == argv_3740) {
				argv_2072 = _naked_packet_ptr->argv_3698 ();
			}
		}
	}
	return (argv_2072);
}


// this function is useful when the rich packet to be generated does not contain
// valid source and destination (case of broadcast), in that case we must argv_646 them
// by hand and then copy the payload to the destination packet.
// NOTICE: the caller is supposed to have retrieved the
// src, src_generation, 
// dest, dest_generation
// before calling us, thus the argv_1148 pointer points on the payload
argv_4536 argv_1106::argv_1494 (argv_1106 * _clone_pck_ptr, argv_4881 _outer_type, argv_4881 _payload_type, argv_4883 _src_index, argv_4883 _src_gen, argv_4883 _dest_index, argv_4883 _dest_gen) {
	argv_4536 argv_2072 = argv_3778;
	argv_2072 = _clone_pck_ptr->reset ();
	if (argv_2072 == argv_3778) {
		argv_2072 = _clone_pck_ptr->argv_4518 (_outer_type);
		if (argv_2072 == argv_3778) {
			argv_2072 = _clone_pck_ptr->insert (_src_index);
			if (argv_2072 == argv_3778) {
				argv_2072 = _clone_pck_ptr->insert (_src_gen);
				if (argv_2072 == argv_3778) {
					argv_2072 = _clone_pck_ptr->insert (_dest_index);
					if (argv_2072 == argv_3778) {
						argv_2072 = _clone_pck_ptr->insert (_dest_gen);
						if (argv_2072 == argv_3778) {
							argv_2072 = _clone_pck_ptr->insert (_payload_type);
							if (argv_2072 == argv_3778) { // argv_965 the payload itself
								argv_4883 current_consumed_body_size = 0;
								argv_815.argv_1790 (current_consumed_body_size);
								argv_4881 * current_position = argv_815.argv_1753 ();
								argv_2072 = _clone_pck_ptr->argv_815.insert_buffer (current_position, argv_817 - current_consumed_body_size);
								if (argv_2072 == argv_3740) {
									argv_2072 = _clone_pck_ptr->argv_3698 ();
								}
							}
						}
					}
				}
			}
		}
	}
	return (argv_2072);
}


void argv_1106::argv_1236 (argv_876 _msg, FILE * _fp) {
	fprintf (_fp, "---- packet '%s' -----\r\n", _msg);
	fprintf (_fp, "- argv_4753    =  %d\r\n", argv_4753);
	fprintf (_fp, "- argv_4966      =  %d\r\n", argv_4966);
	fprintf (_fp, "- argv_817      =  %d\r\n", argv_817);
	fprintf (_fp, "- argv_1444      =  %d\r\n", argv_1444);
	fprintf (_fp, "- argv_1476  =  %d\r\n", argv_1476);
	fprintf (_fp, "- argv_771 =  %d\r\n", argv_771);
	fprintf (_fp, "- argv_4622          =  %d\r\n", argv_4622);
	fprintf (_fp, "- argv_3604        =  %d\r\n", argv_3604);
	fprintf (_fp, "- nb_remaining   =  %d\r\n", nb_remaining);
	fprintf (_fp, "- nb_remaining   =  %d\r\n", nb_remaining);
	fprintf (_fp, "- argv_4854  =  %d\r\n", argv_4854);
	fprintf (_fp, "- total_nb_remaining  =  %d\r\n", total_nb_remaining);
	fprintf (_fp, "- offset         =  %d\r\n", offset);
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "%s argv_1982's coder", _msg);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1982.argv_1237 (argv_4846, _fp);

	argv_4569 (argv_4846, MAX_PATH, "%s argv_815's coder", _msg);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_815.argv_1237 (argv_4846, _fp, argv_817);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

