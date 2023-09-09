#   Rhaddon - Low level procedural programming language.
#   Copyright (C) 2023  Kacper Popek
#
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program.  If not, see <https://www.gnu.org/licenses/>.

#Defining compiler settings
CC = gcc
FILE = main

.PHONY: all $(FILE) clean

all: $(FILE)

# Initializing the executable
$(FILE): $(FILE).c
	$(CC) $(FILE).c -o $(FILE)

# Running compiled code
run: $(FILE)
	./$(FILE)

# Cleaning terminal and removing executable after compiling the code
clean:	
	rm -f $(FILE)
	@clear
