//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",        "music"                         , 5,    8},
    {"",        "memory"                        , 5,    7},
    {"",        "cpu"                           , 5,    6},
    {"",        "battery"                       , 30,   5},
    {"",        "volume"                        , 0,    4},
    {"",	    "internet"                      , 10,   3},
    {"",        "clock"                         , 10,   2},
    {"",        "dwmcaps"                       , 0,    1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
