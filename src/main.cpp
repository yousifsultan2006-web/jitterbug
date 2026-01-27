#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_sprite_ptr.h>
#include <bn_random.h>

#include "bn_sprite_items_bug.h"

int main() {
    bn::core::init();

    bn::random rmg = bn::random();

    bn::backdrop::set_color(bn::color(31, 0, 31));

    bn::sprite_ptr badguy = bn::sprite_items::bug.create_sprite();

    while(true) {
        bn::fixed new_x = badguy.x() + rmg.get_fixed(-1, 1);
        badguy.set_x(new_x);
        bn::fixed new_y = badguy.y() + rmg.get_fixed(-1, 1);
        badguy.set_y(new_y);
        bn::core::update();
    }
}