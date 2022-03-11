#!/usr/bin/env bash

function run {
  if ! pgrep -f $1 ;
  then
    $@&
  fi
}

run telegram-desktop
run discord-canary
run kitty
run google-chrome-stable
run compton
