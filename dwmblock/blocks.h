static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/					/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{": ", "nmcli connection show --active | awk 'NR==2 {print $1}'",	30,		0},

	{"󰁹% ", "battery.sh",					                            30,		0},

	{" ", "date '+%b %d (%a) %I:%M%p'",								5,		0},

};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
