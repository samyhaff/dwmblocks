//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

	// {"   ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},
    {"^C3^   ^d^", "printf '%d%%' $(echo $(( $(cat /sys/class/backlight/amdgpu_bl0/brightness) * 100 / 255 )))", 1, 0},
    {"", "status_volume", 1, 0},
    {"", "status_wifi", 1, 0},
    {"", "status_battery", 1, 0},
	{"^C1^  ^d^", "date '+%b %d (%a) %H:%M '", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
