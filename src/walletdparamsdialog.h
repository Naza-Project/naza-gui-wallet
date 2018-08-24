// Copyright (c) 2012-2018, The CryptoNote developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

// Copyright (c) 2018-2019, The Naza developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.


#ifndef WALLETDPARAMSDIALOG_H
#define WALLETDPARAMSDIALOG_H

#include <QDialog>

namespace Ui {
class WalletdParamsDialog;
}

namespace WalletGUI
{

class WalletdParamsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WalletdParamsDialog(bool allowToRestart, QWidget *parent = 0);
    ~WalletdParamsDialog();

public slots:
    void saveParams();
    void applyParams();

signals:
    void restartWalletd();

private:
    Ui::WalletdParamsDialog *ui;

    bool allowToRestart_;
};

}

#endif // WALLETDPARAMSDIALOG_H