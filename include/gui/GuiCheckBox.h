/****************************************************************************
 * Copyright (C) 2016,2017 Maschell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#ifndef GUI_CHECKBOX_H_
#define GUI_CHECKBOX_H_

#include <gui/GuiToggle.h>
#include <gui/GuiImage.h>
#include <gui/GuiImageData.h>

//!A simple CheckBox
class GuiCheckBox : public GuiToggle {
public:
    //!Constructor
    //!\param checked Checked
    GuiCheckBox(GuiImage *background, bool checked, float width = 0.0f, float height = 0.0f);

    //!Destructor
    virtual ~GuiCheckBox();

    void setImageBackground(GuiImage *img);

    void setImageSelected(GuiImage *img);

    void setImageHighlighted(GuiImage *img);

protected:
    GuiImage *backgroundImg = NULL;
    GuiImage *selectedImg = NULL;
    GuiImage *highlightedImg = NULL;

    void update(GuiController *c);
};

#endif
