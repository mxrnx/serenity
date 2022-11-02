serenity_component(
    Irc
    RECOMMENDED
    TARGETS Irc
)

compile_gml(IrcWindow.gml IrcWindowGML.h irc_window_gml)

set(SOURCES
    IrcWidget.cpp
    main.cpp
)

set(GENERATED_SOURCES
    IrcWindowGML.h
)

execute_process(COMMAND "git rev-parse --short HEAD" OUTPUT_VARIABLE GIT_COMMIT)
execute_process(COMMAND "git rev-parse --abbrev-ref HEAD" OUTPUT_VARIABLE GIT_BRANCH)
execute_process(COMMAND "git diff-index --quiet HEAD -- && echo tracked || echo untracked" OUTPUT_VARIABLE GIT_CHANGES)

add_definitions(-DGIT_COMMIT="${GIT_COMMIT}" -DGIT_BRANCH="${GIT_BRANCH}" -DGIT_CHANGES="${GIT_CHANGES}")

serenity_app(Irc ICON app-welcome)
target_link_libraries(Irc PRIVATE LibCore LibGfx LibGUI LibMain)
