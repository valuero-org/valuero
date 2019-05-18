#!/bin/sh

TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
SRCDIR=${SRCDIR:-$TOPDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

VALD=${VALD:-$SRCDIR/valuerod}
VALCLI=${VALCLI:-$SRCDIR/valuero-cli}
VALTX=${VALTX:-$SRCDIR/valuero-tx}
VALQT=${VALQT:-$SRCDIR/qt/valuero-qt}

[ ! -x $VALD ] && echo "$VALD not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
VALVER=($($VALCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for valuerod if --version-string is not set,
# but has different outcomes for valuero-qt and valuero-cli.
echo "[COPYRIGHT]" > footer.h2m
$VALD --version | sed -n '1!p' >> footer.h2m

for cmd in $VALD $VALCLI $VALTX $VALQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${VALVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${VALVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
