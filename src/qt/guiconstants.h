// Copyright (c) 2011-2018 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2018-2019 The Rito Core developers
// Copyright (c) 2019 The Valuero developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VAL_QT_GUICONSTANTS_H
#define VAL_QT_GUICONSTANTS_H

/* Milliseconds between model updates */
static const int MODEL_UPDATE_DELAY = 250;

/* AskPassphraseDialog -- Maximum passphrase length */
static const int MAX_PASSPHRASE_SIZE = 1024;

/* ValueroGUI -- Size of icons in status bar */
static const int STATUSBAR_ICONSIZE = 16;

static const bool DEFAULT_SPLASHSCREEN = true;

/* Invalid field background style */
#define STYLE_INVALID "background:#FF8080; border: 1px solid lightgray; padding: 0px;"
#define STYLE_VALID "border: 1px solid lightgray; padding: 0px;"

/* Transaction list -- unconfirmed transaction */
#define COLOR_UNCONFIRMED QColor(128, 128, 128)
/* Transaction list -- negative amount */
#define COLOR_NEGATIVE QColor(255, 0, 0)
/* Transaction list -- bare address (without label) */
#define COLOR_BAREADDRESS QColor(140, 140, 140)
/* Transaction list -- TX status decoration - open until date */
#define COLOR_TX_STATUS_OPENUNTILDATE QColor(64, 64, 255)
/* Transaction list -- TX status decoration - offline */
#define COLOR_TX_STATUS_OFFLINE QColor(192, 192, 192)
/* Transaction list -- TX status decoration - danger, tx needs attention */
#define COLOR_TX_STATUS_DANGER QColor(200, 100, 100)
/* Transaction list -- TX status decoration - default color */
#define COLOR_BLACK QColor(0, 0, 0)
/* Widget Background color - default color */
#define COLOR_WHITE QColor(255, 255, 255)

#define COLOR_WALLETFRAME_SHADOW QColor(0,0,0,71)

/* Color of labels */
#define COLOR_LABELS QColor("#4960ad")

/** LIGHT MODE */
/* Background color, very light gray */
#define COLOR_BACKGROUND_LIGHT QColor("#fbfbfe")
/* Valuero dark orange */
#define COLOR_DARK_ORANGE QColor("#f05339")
/* Valuero light orange */
#define COLOR_LIGHT_ORANGE QColor("#f79433")
/* Valuero dark blue */
#define COLOR_DARK_BLUE QColor("#475eaa")
/* Valuero light blue */
#define COLOR_LIGHT_BLUE QColor("#5874cf")
/* Valuero asset text */
#define COLOR_ASSET_TEXT QColor(255, 255, 255)
/* Valuero shadow color - light mode */
#define COLOR_SHADOW_LIGHT QColor("#e1e6f3")
/* Toolbar not selected text color */
#define COLOR_TOOLBAR_NOT_SELECTED_TEXT QColor("#a5b7f3")
/* Toolbar selected text color */
#define COLOR_TOOLBAR_SELECTED_TEXT COLOR_WHITE

/** DARK MODE */
/* Widget background color, dark mode */
#define COLOR_WIDGET_BACKGROUND_DARK QColor("#1c2535")
/* Valuero shadow color - dark mode */
#define COLOR_SHADOW_DARK QColor("#0c1b3d")
/* Valuero Light blue - dark mode - dark mode */
#define COLOR_LIGHT_BLUE_DARK QColor("#1e2636")
/* Valuero Dark blue - dark mode - dark mode */
#define COLOR_DARK_BLUE_DARK QColor("#0b1018")
/* Pricing widget background color */
#define COLOR_PRICING_WIDGET QColor("#161e2d")
/* Valuero dark mode administrator background color */
#define COLOR_ADMIN_CARD_DARK COLOR_BLACK
/* Valuero dark mode regular asset background color */
#define COLOR_REGULAR_CARD_DARK_BLUE_DARK_MODE QColor("#06132a")
/* Valuero dark mode regular asset background color */
#define COLOR_REGULAR_CARD_LIGHT_BLUE_DARK_MODE QColor("#0e1b3b")
/* Toolbar not selected text color */
#define COLOR_TOOLBAR_NOT_SELECTED_TEXT_DARK_MODE QColor("#6c80c5")
/* Toolbar selected text color */
#define COLOR_TOOLBAR_SELECTED_TEXT_DARK_MODE QColor("#c5ccdf")


/* Valuero label color as a string */
#define STRING_LABEL_COLOR "color: #4960ad"








/* Tooltips longer than this (in characters) are converted into rich text,
   so that they can be word-wrapped.
 */
static const int TOOLTIP_WRAP_THRESHOLD = 80;

/* Maximum allowed URI length */
static const int MAX_URI_LENGTH = 255;

/* QRCodeDialog -- size of exported QR Code image */
#define QR_IMAGE_SIZE 300

/* Number of frames in spinner animation */
#define SPINNER_FRAMES 36

#define QAPP_ORG_NAME "Valuero"
#define QAPP_ORG_DOMAIN "valuero.org"
#define QAPP_APP_NAME_DEFAULT "Valuero-Qt"
#define QAPP_APP_NAME_TESTNET "Valuero-Qt-testnet"

#endif // VAL_QT_GUICONSTANTS_H
