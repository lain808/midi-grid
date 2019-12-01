#ifndef APPLICATION_LAUNCHPAD_IMAGES_HPP_
#define APPLICATION_LAUNCHPAD_IMAGES_HPP_

#include <stdint.h>

namespace application
{
namespace launchpad
{

static const uint8_t usbSymbolSmallArray[9] = { 0x1C, 0x1C, 0x08, 0x0E, 0x3B, 0x6A, 0x68, 0x1C, 0x08 };

static const uint8_t midiSymbolSmallArray[8] = { 0x1C, 0x36, 0x7F, 0x1D, 0x1D, 0x7F, 0x36, 0x1C };

static const uint8_t arrowSmallUpArray[5] = { 0x04, 0x06, 0x7F, 0x06, 0x04 };

static const uint8_t arrowSmallDownArray[5] = { 0x10, 0x30, 0x7F, 0x30, 0x10 };

static const uint8_t playArray[32] = {
        0xFE, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0x80, 0x80,
        0x3F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00
};

static const uint8_t recordingOnArray[32] = {
        0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0xF0, 0xE0,
        0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x07, 0x03
};

static const uint8_t sessionRecordingOnArray[36] = {
        0xE0, 0xF0, 0x38, 0x1C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x1C, 0x38, 0xF0, 0xE0,
        0x03, 0x07, 0x0E, 0x1C, 0x18, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x18, 0x1C, 0x0E, 0x07, 0x03
};

static const uint8_t nudgeDownInactiveArray[10] = { 0x00, 0x3C, 0x3C, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x3C, 0x00 };

static const uint8_t nudgeDownActiveArray[10] = { 0xFF, 0xC3, 0xC3, 0xFF, 0xC3, 0xFF, 0xC3, 0xFF, 0xC3, 0xFF };

static const uint8_t nudgeUpInactiveArray[10] = { 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x3C, 0x3C, 0x00 };

static const uint8_t nudgeUpActiveArray[10] = { 0xFF, 0xC3, 0xFF, 0xC3, 0xFF, 0xC3, 0xFF, 0xC3, 0xC3, 0xFF };

}
}
#endif // APPLICATION_LAUNCHPAD_IMAGES_HPP_