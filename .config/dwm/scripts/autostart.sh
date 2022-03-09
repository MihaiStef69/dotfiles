#!/bin/sh

#start dwmblocks
dwmblocks &

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
feh --bg-fill  /home/mihai/wallpapers/wallpaper.jpg &

#start dwm
dwm
