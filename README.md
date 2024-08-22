[![GitHub Release](https://img.shields.io/github/v/release/esp-arduino-libs/esp-ui-phone_320_240_stylesheet)](https://github.com/esp-arduino-libs/esp-ui-phone_320_240_stylesheet/releases) [![Espressif Release](https://components.espressif.com/components/espressif/esp-ui-phone_320_240_stylesheet/badge.svg)](https://components.espressif.com/components/espressif/esp-ui-phone_320_240_stylesheet)

[![Arduino Lint](https://github.com/esp-arduino-libs/esp-ui-phone_320_240_stylesheet/actions/workflows/arduino_lint.yml/badge.svg)](https://github.com/esp-arduino-libs/esp-ui-phone_320_240_stylesheet/actions/workflows/arduino_lint.yml) [![pre-commit](https://github.com/esp-arduino-libs/esp-ui-phone_320_240_stylesheet/actions/workflows/pre-commit.yml/badge.svg)](https://github.com/esp-arduino-libs/esp-ui-phone_320_240_stylesheet/actions/workflows/pre-commit.yml) [![Version Consistency](https://github.com/esp-arduino-libs/esp-ui-phone_320_240_stylesheet/actions/workflows/check_lib_versions.yml/badge.svg)](https://github.com/esp-arduino-libs/esp-ui-phone_320_240_stylesheet/actions/workflows/check_lib_versions.yml)

# ESP-UI Phone 320 x 240 Stylesheet

This package provides a stylesheet for the [esp-ui phone](https://github.com/espressif/esp-ui/blob/master/docs/system_ui_phone.md) with a `320 x 240` resolution.

## How to Use

### Based on [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html)

#### Adding to the Project

esp-ui-phone_320_240_stylesheet has been uploaded to the [Espressif Component Service](https://components.espressif.com/), and users can add it to their projects using the `idf.py add-dependency` command, for example:

```bash
idf.py add-dependency "espressif/esp-ui-phone_320_240_stylesheet"
```

Alternatively, users can create or modify the `idf_component.yml` file in the project directory. For more details, please refer to the [Espressif Documentation - IDF Component Manager](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/tools/idf-component-manager.html).

### Based on [Arduino](https://docs.espressif.com/projects/arduino-esp32/en/latest/getting_started.html)

#### Installing the Library

To install the library online, navigate to `Sketch` > `Include Library` > `Manage Libraries...` in the Arduino IDE, then search for `esp-ui-phone_320_240_stylesheet` and click the `Install` button.

To install manually, download the required version of the `.zip` file from [esp-ui-phone_320_240_stylesheet](https://github.com/esp-arduino-libs/esp-ui-phone_320_240_stylesheet), then navigate to `Sketch` > `Include Library` > `Add .ZIP Library...` in the Arduino IDE, select the downloaded `.zip` file and click the `Open` button.

Users can also refer to the documentation for installing libraries in [Arduino IDE v1.x.x](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries) or [Arduino IDE v2.x.x](https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-installing-a-library).

### Example Code

```cpp
#include "esp_ui.hpp"
#include "esp_ui_phone_320_240_stylesheet.h"

    ...

    /* Create a phone object */
    ESP_UI_Phone *phone = new ESP_UI_Phone(disp);
    assert(phone != nullptr);

    ...

    /* Add external stylesheet and activate it */
    ESP_UI_PhoneStylesheet_t *phone_stylesheet = new ESP_UI_PhoneStylesheet_t ESP_UI_PHONE_320_240_DARK_STYLESHEET();
    assert(phone_stylesheet != nullptr);
    phone->addStylesheet(phone_stylesheet);
    phone->activateStylesheet(phone_stylesheet);
    delete phone_stylesheet;

    ...

    /* Begin the phone */
    phone->begin();
```
