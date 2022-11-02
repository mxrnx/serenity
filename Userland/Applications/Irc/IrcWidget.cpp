/*
 * Copyright (c) 2022, Marnix Massar <mpm@flume.space>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include "IrcWidget.h"
#include <Applications/Irc/IrcWindowGML.h>

IrcWidget::IrcWidget()
{
    load_from_gml(irc_window_gml);
}
