/*********************************************************************
 *
 *  Software License Agreement
 *
 *  Copyright (c) 2020,
 *  TU Dortmund - Institute of Control Theory and Systems Engineering.
 *  All rights reserved.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 *  Authors: Christoph Rösmann
 *********************************************************************/

#ifndef SRC_GUI_INCLUDE_CORBO_GUI_LABEL_EDIT_WIDGET_H_
#define SRC_GUI_INCLUDE_CORBO_GUI_LABEL_EDIT_WIDGET_H_

#include <QLabel>
#include <QLineEdit>

namespace corbo {
namespace gui {

class LabelEditWidget : public QWidget
{
    Q_OBJECT

 public:
    explicit LabelEditWidget(QWidget* parent = 0) : LabelEditWidget("", "", parent) {}
    explicit LabelEditWidget(const QString& label, const QString& default_text, QWidget* parent = 0);
    ~LabelEditWidget() {}

    QSize sizeHint() const override;

    void setLabel(const QString& label) { _label->setText(label); }
    void setText(const QString& text) { _edit->setText(text); }

    QLineEdit* widgetLineEdit() { return _edit; }
    const QLineEdit* widgetLineEdit() const { return _edit; }

    QLabel* widgetLabel() { return _label; }
    const QLabel* widgetLabel() const { return _label; }

 protected:
 private:
    QLineEdit* _edit;
    QLabel* _label;
};

}  // namespace gui
}  // namespace corbo

#endif  // SRC_GUI_INCLUDE_CORBO_GUI_LABEL_EDIT_WIDGET_H_
