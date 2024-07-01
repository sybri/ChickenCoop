// Wokwi Custom Chip - For docs and examples see:
// https://docs.wokwi.com/chips-api/getting-started
//
// SPDX-License-Identifier: MIT
// Copyright 2023 Sylvain Brissy

#include "wokwi-api.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  pin_t in1;
  pin_t in2;
  pin_t in3;
  pin_t in4;

  pin_t out1;
  pin_t out2;
  pin_t out3;
  pin_t out4;

} chip_state_t;

static void chip_pin_change(void *user_data, pin_t pin, uint32_t value) {
  chip_state_t *chip = (chip_state_t*)user_data;
  if (pin == chip->in1 ) {
    pin_write(chip->out1,value);
  }
  if (pin == chip->in2 ) {
    pin_write(chip->out2,value);
  }
  if (pin == chip->in3 ) {
    pin_write(chip->out3,value);
  }
  if (pin == chip->in4 ) {
    pin_write(chip->out4,value);
  }
}
void chip_init() {
  chip_state_t *chip = malloc(sizeof(chip_state_t));
  chip->in1 = pin_init("IN1", INPUT);
  chip->in2 = pin_init("IN2", INPUT);
  chip->in3 = pin_init("IN3", INPUT);
  chip->in4 = pin_init("IN4", INPUT);

  chip->out1 = pin_init("OUT1", OUTPUT);
  chip->out2 = pin_init("OUT2", OUTPUT);
  chip->out3 = pin_init("OUT3", OUTPUT);
  chip->out4 = pin_init("OUT4", OUTPUT);
  // TODO: Initialize the chip, set up IO pins, create timers, etc.

  const pin_watch_config_t watch_config = {
    .edge = BOTH,
    .pin_change = chip_pin_change,
    .user_data = chip,
  };
  pin_watch(chip->in1, &watch_config);
  pin_watch(chip->in2, &watch_config);
  pin_watch(chip->in3, &watch_config);
  pin_watch(chip->in4, &watch_config);

  printf("Hello from custom chip!\n");
}
