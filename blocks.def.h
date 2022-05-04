//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" MEM ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},
    {"DISP ", "echo $(( $(cat /sys/class/backlight/amdgpu_bl0/brightness) * 100 / 255 ))", 5, 0},
    {"VOL ", "pulsemixer --get-volume | awk '{print $1;}'", 5, 0},
    {"WIFI ", "iwgetid -r", 5, 0},
    {"BAT ", "cat /sys/class/power_supply/BAT0/capacity", 5, 0},
	{"", "date '+%b %d (%a) %I:%M%p'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
