#include <unity.h>

#include <u8g2_esp32_hal.h>

// SDA - GPIO21
#define PIN_SDA 21

// SCL - GPIO22
#define PIN_SCL 22

static char component[] = "[TRB_u8g2_esp_idf]";

/* here, vendor's code is not tested, just to see it can be compiled */
TEST_CASE("WHEN_compiled_THEN_successfully_compiled", component)
{
	u8g2_esp32_hal_t u8g2_esp32_hal = U8G2_ESP32_HAL_DEFAULT;
	u8g2_esp32_hal.sda   = PIN_SDA;
	u8g2_esp32_hal.scl  = PIN_SCL;
	u8g2_esp32_hal_init(u8g2_esp32_hal);
	TEST_ASSERT_EQUAL_UINT8(1, 1);
}
