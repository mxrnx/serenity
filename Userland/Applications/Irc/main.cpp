/*
 * Copyright (c) 2022, Marnix Massar <mpm@flume.space>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include "IrcWidget.h"
#include <LibCore/System.h>
#include <LibGUI/Application.h>
#include <LibGUI/Icon.h>
#include <LibGUI/Window.h>
#include <LibMain/Main.h>

ErrorOr<int> serenity_main(Main::Arguments arguments)
{
    TRY(Core::System::pledge("stdio recvfd sendfd rpath unix proc exec"));
    auto app = TRY(GUI::Application::try_create(arguments));

    auto app_icon = TRY(GUI::Icon::try_create_default_icon("app-welcome"sv));

    auto window = TRY(GUI::Window::try_create());
    window->resize(480, 250);
    window->center_on_screen();
    window->set_title("Irc");
    window->set_icon(app_icon.bitmap_for_size(16));
    auto irc_widget = TRY(window->try_set_main_widget<IrcWidget>());

    window->show();

    return app->exec();
}
