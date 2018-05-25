#!/bin/sh
# zsh strlen.sh
string = (ech $FT_LINE)

if ["string"]; then
	echo -n $FT_LINE | wc -m
fi
