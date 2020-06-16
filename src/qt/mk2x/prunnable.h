// Copyright (c) 2019 The MK2X developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MK2X_CORE_NEW_GUI_PRUNNABLE_H
#define MK2X_CORE_NEW_GUI_PRUNNABLE_H

class Runnable {
public:
    virtual void run(int type) = 0;
    virtual void onError(QString error, int type) = 0;
};

#endif //MK2X_CORE_NEW_GUI_PRUNNABLE_H
