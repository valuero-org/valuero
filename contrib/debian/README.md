
Debian
====================
This directory contains files used to package valuerod/valuero-qt
for Debian-based Linux systems. If you compile valuerod/valuero-qt yourself, there are some useful files here.

## valuero: URI support ##


valuero-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install valuero-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your valuero-qt binary to `/usr/bin`
and the `../../share/pixmaps/valuero128.png` to `/usr/share/pixmaps`

valuero-qt.protocol (KDE)

