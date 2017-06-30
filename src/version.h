// Copyright (c) 2012 The Bitcoin developers
// Copyright (c) 2016-2017 The HealthyWorm developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef worm_VERSION_H
#define worm_VERSION_H

//#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it

// HealthyWorm version - intended for display purpose only
#define WORM_VERSION_MAJOR       2
#define WORM_VERSION_MINOR       0
#define WORM_VERSION_REVISION    0
#define WORM_VERSION_BUILD       0

static const int WORM_VERSION =
                           1000000 * WORM_VERSION_MAJOR
                         +   10000 * WORM_VERSION_MINOR
                         +     100 * WORM_VERSION_REVISION
                         +       1 * WORM_VERSION_BUILD;

// HealthyWorm version - reference for code tracking
#define PPCOIN_VERSION_MAJOR       0
#define PPCOIN_VERSION_MINOR       4
#define PPCOIN_VERSION_REVISION    0
#define PPCOIN_VERSION_BUILD       0

static const int PPCOIN_VERSION =
                           1000000 * PPCOIN_VERSION_MAJOR
                         +   10000 * PPCOIN_VERSION_MINOR
                         +     100 * PPCOIN_VERSION_REVISION
                         +       1 * PPCOIN_VERSION_BUILD;

// worm version - reference for code tracking
#define worm_VERSION_MAJOR       0
#define worm_VERSION_MINOR       6
#define worm_VERSION_REVISION    4
#define worm_VERSION_BUILD       0

static const int worm_VERSION =
                           1000000 * worm_VERSION_MAJOR
                         +   10000 * worm_VERSION_MINOR 
                         +     100 * worm_VERSION_REVISION
                         +       1 * worm_VERSION_BUILD;

static const int CLIENT_VERSION = worm_VERSION;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;


//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 60000;

// earlier versions not supported as of Feb 2012, and are disconnected
// NOTE: as of worm v0.6 message serialization (vSend, vRecv) still
// uses MIN_PROTO_VERSION(209), where message format uses PROTOCOL_VERSION
static const int MIN_PROTO_VERSION = 209;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

#endif
