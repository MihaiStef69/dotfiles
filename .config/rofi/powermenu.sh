#! /bin/sh

chosen=$(printf "  Power Off\n  Restart\n  Lock" | rofi -dmenu -i -theme-str '@import "power.rasi"')

case "$chosen" in
	"  Power Off") sudo poweroff ;;
	"  Restart") sudo reboot ;;
	"  Log Out") killall dwm ;;
	*) exit 1 ;;
esac

