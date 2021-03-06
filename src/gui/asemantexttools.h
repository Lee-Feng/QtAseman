/*
    Copyright (C) 2017 Aseman Team
    http://aseman.co

    AsemanQtTools is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AsemanQtTools is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ASEMANTEXTTOOLS_H
#define ASEMANTEXTTOOLS_H

#include <QObject>

#include "asemangui_global.h"

class AsemanTextToolsPrivate;
class LIBQTASEMAN_GUI_EXPORT AsemanTextTools : public QObject
{
    Q_OBJECT
public:
    AsemanTextTools(QObject *parent = Q_NULLPTR);
    virtual ~AsemanTextTools();

public Q_SLOTS:
    qreal htmlWidth(const QString &html);
    static Qt::LayoutDirection directionOf( const QString & str );

private:
    AsemanTextToolsPrivate *p;
};

typedef AsemanTextTools QAsemanTextTools;

#endif // ASEMANTEXTTOOLS_H
