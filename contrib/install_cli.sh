 #!/usr/bin/env bash

 # Execute this file to install the valuero cli tools into your path on OS X

 CURRENT_LOC="$( cd "$(dirname "$0")" ; pwd -P )"
 LOCATION=${CURRENT_LOC%Valuero-Qt.app*}

 # Ensure that the directory to symlink to exists
 sudo mkdir -p /usr/local/bin

 # Create symlinks to the cli tools
 sudo ln -s ${LOCATION}/Valuero-Qt.app/Contents/MacOS/valuerod /usr/local/bin/valuerod
 sudo ln -s ${LOCATION}/Valuero-Qt.app/Contents/MacOS/valuero-cli /usr/local/bin/valuero-cli
