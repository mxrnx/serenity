/*
 * Copyright (c) 2022, Marnix Massar <mpm@flume.space>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibGUI/Widget.h>

class IrcWidget final : public GUI::Widget {
    C_OBJECT(IrcWidget);

public:
    virtual ~IrcWidget() override = default;

private:
    IrcWidget();
};
