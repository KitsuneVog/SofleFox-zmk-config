#include <lvgl.h>
#include <zmk/display.h>

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "HELLO 😎");
    lv_obj_center(label);
    return label;
}