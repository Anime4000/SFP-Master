/*
 * Copyright (C) 2024 Mikhail Medvedev <e-ink-reader@yandex.ru>
 *
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef DIALOGPASS_H
#define DIALOGPASS_H

#include <QDialog>

namespace Ui {
class DialogPass;
}

class DialogPass : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPass(QWidget *parent = nullptr);
    ~DialogPass();
    void setID(const uint id, uint32_t userAddr, uint32_t userPass);
    void setUserPassword();
    uint32_t hexToInt(QString str);
    QString bytePrt(unsigned char z);

private slots:
    void on_pushButton_clicked();

signals:
    void sendID(uint8_t);
    void sendUserPass(uint32_t userAddr, uint32_t userPass);

private:
    Ui::DialogPass *ui;

};

#endif // DIALOGPASS_H
