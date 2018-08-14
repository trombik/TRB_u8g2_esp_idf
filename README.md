# `TRB_u8g2_esp_idf`

[![Build Status](https://travis-ci.com/trombik/TRB_u8g2_esp_idf.svg?branch=master)](https://travis-ci.com/trombik/TRB_u8g2_esp_idf)

Packaged version of [`u8g2`](https://github.com/olikraus/u8g2) and
[HAL](https://github.com/nkolban/esp32-snippets/tree/master/hardware/displays/U8G2)
for `esp-idf` users.

This repository contains almost zero code of my own. Any code under
`src/vendor` has its own `LICENSE`, for which I claim no credit.

## Rationales

`u8g2` is available as a `platformio` library, but for framework `arduino`.
`esp-idf` support was discussed in the upstream [issue #187](https://github.com/olikraus/u8g2/issues/187),
but closed without further progress. This package is a workaround until the
upstream officially supports `esp-idf`.
