if status is-interactive
    # Commands to run in interactive sessions can go here
    # Verbosity and settings that you pretty much just always are going to want.

alias l="ls"
alias la="ls -lah"
alias p="poweroff"
set PATH $PATH:$HOME/git/scripts
set PATH $PATH:$HOME/.local/bin
alias v="nvim"
alias i="sudo xbps-install"
alias u="sudo xbps-remove"
alias q="sudo xbps-query"
alias xdeb="xdeb -Sde"
alias xdebi="sudo xbps-install -R binpkgs"
alias dots='git --git-dir=$HOME/.dotfiles/ --work-tree=$HOME'
alias cf="cd ~/.config"
alias sc="cd ~/.local/bin"
alias h="cd ~/"
alias pacman="sudo pacman"
starship init fish | source
end

