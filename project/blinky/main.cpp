/*
 * Copyright (c) 2019, Niklas Hauser
 *
 * This file is part of the modm project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

 #include <modm/board.hpp>

int main()
{
    Board::initialize();
    Board::Leds::setOutput();

    uint32_t counter(0);

    while (true)
    {
        Board::Leds::write(1 << (counter++ % (Board::Leds::width + 1) ));
        modm::delayMilliseconds(Board::Button::read() ? 100 : 500);

#ifdef MODM_BOARD_HAS_LOGGER
        MODM_LOG_INFO << "loop: " << counter << modm::endl;
#endif
    }
    return 0;
}
