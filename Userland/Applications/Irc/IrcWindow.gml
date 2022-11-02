@GUI::Widget {
    fill_with_background_color: true
    layout: @GUI::VerticalBoxLayout {
        margins: [8]
        spacing: 4
    }

    @GUI::Widget {
        layout: @GUI::VerticalBoxLayout {
            spacing: 8
        }

        @GUI::Frame {
            name: "irc_frame"
            min_width: 340
            min_height: 170
            fill_with_background_color: true
            background_role: "Base"
            layout: @GUI::HorizontalBoxLayout {
                margins: [0, 16, 0, 0]
            }

            @GUI::Label {
                name: "irc_label"
                text_alignment: "TopLeft"
                word_wrap: true
                font_size: 12
            }
        }
    }
}

