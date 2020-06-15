
Debian
====================
This directory contains files used to package mk2xd/mk2x-qt
for Debian-based Linux systems. If you compile mk2xd/mk2x-qt yourself, there are some useful files here.

## mk2x: URI support ##


mk2x-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mk2x-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mk2x-qt binary to `/usr/bin`
and the `../../share/pixmaps/mk2x128.png` to `/usr/share/pixmaps`

mk2x-qt.protocol (KDE)

