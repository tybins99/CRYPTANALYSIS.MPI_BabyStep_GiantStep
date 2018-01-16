// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_381.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the functions,
// @@ argv_1178 structures and constants that are 
// @@ necessary to implement the avx scanning
// @@ and admmin protocol.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_381.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4967		
// @@
// @@ INPUT			:	
// @@ _type: argv_4883 : packet argv_4860 whose corresponding human readable 
// @@   argv_3557 is to be generated.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string : the human readable packet argv_4860 associated argv_5011 the 
// @@ '_type' argv_4979.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate the human-readable argv_4860
// @@ associated argv_5011 the argv_4860 contained into the '_type' 
// @@ parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
	argv_3791,
*/
string argv_4967 (argv_4881 _type) {
	string type_str = "";
	switch (_type) {
		case argv_3817:						type_str = "argv_3817";						break;
		case argv_3805:						type_str = "argv_3805";						break;
		case argv_3801:			type_str = "argv_3801";			break;
		case argv_3807:						type_str = "argv_3807";						break;
		case argv_3803:		type_str = "argv_3803";		break;
		case argv_3806:				type_str = "argv_3806";				break;
		case argv_3802:	type_str = "argv_3802";	break;
		case argv_3808:				type_str = "argv_3808";				break;
		case argv_3804:	type_str = "argv_3804";	break;
		case argv_3815:						type_str = "argv_3815";						break;
		case argv_3816:			type_str = "argv_3816";			break;
		case argv_3818:					type_str = "argv_3818";					break;
		case argv_3819:					type_str = "argv_3819";					break;
		case argv_3812:				type_str = "argv_3812";				break;
		case argv_3814:				type_str = "argv_3814";				break;
		case argv_3788:			type_str = "argv_3788";			break;
		case argv_3784:	type_str = "argv_3784";	break;
		case argv_3787:		type_str = "argv_3787";		break;
		case argv_3789:			type_str = "argv_3789";			break;
		case argv_3785:			type_str = "argv_3785";			break;
		case argv_3786:			type_str = "argv_3786";			break;
		case argv_3783:	type_str = "argv_3783";	break;
		case argv_3797:		type_str = "argv_3797";		break;
		case argv_3793:		type_str = "argv_3793";		break;
		case argv_3792:		type_str = "argv_3792";		break;
		case argv_3796:			type_str = "argv_3796";			break;
		case argv_3790:					type_str = "argv_3790";					break;
		case argv_3798:				type_str = "argv_3798";				break;
		case argv_3794:			type_str = "argv_3794";			break;
		case argv_3795:			type_str = "argv_3795";			break;
		case argv_3799:				type_str = "argv_3799";				break;
		case argv_3800:				type_str = "argv_3800";				break;
		case argv_3791:		type_str = "argv_3791";		break;

		default :
			{
				char argv_4846[MAX_PATH];
				argv_4569 (argv_4846, MAX_PATH, "<unknown packet argv_4860: %d>", _type);
				argv_4846[MAX_PATH - 1] = '\0';
				type_str = argv_4846;
			}
	}
	return (type_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
