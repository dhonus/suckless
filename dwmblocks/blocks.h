//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  { " 🎶 ",      "/home/daniel/Documents/C/dwmblocks/scripts/current_song",         5,   0},
  {"🔊 ", "echo $(pamixer --get-volume)%",       5,      0},
  {"⚡ ", "echo $(upower -i /org/freedesktop/UPower/devices/battery_BAT1|grep time|awk {'print $4 \"h left\"'})$(echo \" of \")$(upower -i /org/freedesktop/UPower/devices/battery_BAT1|grep percentage|awk '{print $2}')", 30, 0},
  {"","echo $(cat /sys/class/backlight/amdgpu_bl0/brightness)% BRI", 10, 0},
	{"📟 ", "/home/daniel/Documents/C/dwmblocks/scripts/memory",	30,		0},
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
