#!/bin/sh

#start dwm-status
sh ~/.config/dwm-1/scripts/dwm-status.sh &

#load xresources
xrdb ~/.config/x11/xresources &

#start picom (compositor)
picom --config ~/.config/picom/picom.conf &

#start the sound server
pulseaudio &
#pipewire &
#/usr/bin/pipewire-pulse &
#/usr/bin/pipewire-media-session &

#set wallpaper
feh --bg-fill  /home/mihai/wallpapers/the-great-wave.png &

#start dwm
dwm
