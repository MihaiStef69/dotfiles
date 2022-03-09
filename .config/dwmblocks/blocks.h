//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/								/*Interval*/		/*Signal*/
	{"  ", 		"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",			30,		0},

	{"  ", 		"date '+%b %d (%a)'",								33,		0},

	{"  ", 		"date '+%H:%M'",								1,		0},

//	{"  ", 	"iw dev wlp1s0 info | grep \"	ssid\" | sed \'s/	ssid //\'",		1,		0},

//	{"  ", 	"upower -i $(upower -e | grep BAT0) | grep percentage | awk '{print $2}'", 	1, 		0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
