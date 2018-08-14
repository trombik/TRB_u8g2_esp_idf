PROJECT_NAME := TRB_u8g2_ESP32
UNIT_TEST_APP :=	$(IDF_PATH)/tools/unit-test-app
# include unity component for unit testing
EXTRA_COMPONENT_DIRS=	$(UNIT_TEST_APP)/components
SDKCONFIG_DEFAULTS=	 $(UNIT_TEST_APP)/sdkconfig.defaults

CFLAGS := -DGPIO_SDA=21 -DGPIO_SCL=22
ifndef WITHOUT_ESP_ERR_TO_NAME
CFLAGS += -D HAVE_ESP_ERR_TO_NAME
endif

TEST_COMPONENTS = $(PROJECT_NAME)

include $(UNIT_TEST_APP)/Makefile
