#ifndef ULTI_LCD2_LIB_H
#define ULTI_LCD2_LIB_H

void lcd_lib_init();
void lcd_lib_update_screen();   /* Start sending out the display buffer to the screen. Wait till lcd_lib_update_ready before issuing any draw functions */
bool lcd_lib_update_ready();

void lcd_lib_draw_string(uint8_t x, uint8_t y, const char* str);
void lcd_lib_clear_string(uint8_t x, uint8_t y, const char* str);
void lcd_lib_draw_stringP(uint8_t x, uint8_t y, const char* pstr);
void lcd_lib_clear_stringP(uint8_t x, uint8_t y, const char* pstr);
void lcd_lib_draw_vline(uint8_t x, uint8_t y0, uint8_t y1);
void lcd_lib_draw_hline(uint8_t x0, uint8_t x1, uint8_t y);
void lcd_lib_draw_box(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);
void lcd_lib_draw_shade(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);
void lcd_lib_clear();
void lcd_lib_clear(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);
void lcd_lib_invert(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);
void lcd_lib_set(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);

void lcd_lib_beep();
void lcd_lib_buttons_update();
void lcd_lib_buttons_update_interrupt();
void lcd_lib_led_color(uint8_t r, uint8_t g, uint8_t b);

extern int16_t lcd_encoder_pos;
extern bool lcd_lib_button_pressed;
extern bool lcd_lib_buttonState;

#endif//ULTI_LCD2_LIB_H