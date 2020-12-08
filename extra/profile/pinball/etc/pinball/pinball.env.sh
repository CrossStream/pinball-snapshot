# !/bin/sh
# XPDX-License-Identifier: GPL-2.0+"

PINBALL_PROFILE="pinball"

# Output screen
# PINBALL_SCREEN="DP-1"

# TODO: Use preferred resolution (align to /etc/default/pinball)
# PINBALL_RESOLUTION="1024x768"

# TODO
PINBALL_EXTRA_DIR='/usr/local/opt/pinball'

# Random table
# PINBALL_TABLE=

# Quit after displayed frames (for developers)
# PINBALL_QUIT=4294967295
# export PINBALL_QUIT


# Readonly FS
HOME="/tmp"

# Graphical system : weston or xinit
PINBALL_DISPLAY_MANAGER="xinit"
DISPLAY=':0'
XINITRC="/etc/pinball/pinball-session.sh"
# PINBALL_XRANDR_ARGS="--rotate left --mode ${PINBALL_RESOLUTION}"

DBUS_SESSION_BUS_ADDRESS='unix:path=/run/user/0/dbus/user_bus_socket'
# ALSA_CARD=""

# Extra
# SDL_VIDEODRIVER=dummy
# SDL_NOMOUSE=
# SDL_AUDIODRIVER=dummy
# SDL_DEBUG=

# XINIT_ARGS= -- -nocursor