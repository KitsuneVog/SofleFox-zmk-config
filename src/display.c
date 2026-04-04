#include <lvgl.h>
#include <zmk/display.h>

lv_obj_t *zmk_display_status_screen(void) {
    lv_obj_t *screen = lv_scr_act();   // ВАЖНО!

    lv_obj_clean(screen);              // очистить старый UI

    lv_obj_t *label = lv_label_create(screen);
    lv_label_set_text(label, "HELLO");
    lv_obj_center(label);

    return screen;
}