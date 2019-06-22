#ifndef MAIN_HPP_
#define MAIN_HPP_

#include "system/System.hpp"
#include "grid/GridDriver.hpp"
#include "grid/Grid.hpp"
#include "grid/AdditionalButtons.hpp"
#include "grid/RotaryControls.hpp"
#include "lcd/Gui.hpp"
#include "lcd/Lcd.hpp"
#include "application/InternalMenu.hpp"
#include "application/Launchpad.hpp"
#include "application/Startup.hpp"
#include "application/GridTest.hpp"
#include "application/Snake.hpp"
#include "system/GlobalInterrupts.hpp"
#include "usb/UsbMidi.hpp"

#include "thread.hpp"

class Main
{
public:
    static inline Main& getInstance()
    {
        static Main instance;
        return instance;
    }

    void run();
private:
    Main();

    mcu::System system_;
    mcu::GlobalInterrupts globalInterrupts_;
    grid::GridDriver gridDriver_;
    grid::Grid grid_;
    grid::AdditionalButtons additionalButtons_;
    grid::RotaryControls rotaryControls_;
    midi::UsbMidi usbMidi_;
    lcd::Lcd lcd_;
    lcd::Gui gui_;
    application::ApplicationController applicationController_;
    application::Startup startup_;
    application::GridTest gridTest_;
    application::InternalMenu internalMenu_;
    application::Launchpad launchpad_;
    application::Snake snake_;
};

#endif // MAIN_HPP_