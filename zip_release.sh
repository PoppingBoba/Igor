#!/bin/bash
cat <<EOF
###############################
	Release Zipper
###############################
EOF

CURRENT_PATH=$(pwd)

cp -r ~/obj/netbsd/releasedir/amd64/installation/cdrom release/
zip -r $CURRENT_PATH/cdrom_release.zip release/
