#include <stdint.h>

int main(void)
{
    uint32_t *RCCAHB1 = (uint32_t *)0x40023830;
    uint32_t *mode_r  = (uint32_t *)0x40020000;
    uint32_t *ODR     = (uint32_t *)0x40020014;

    // 1. Enable GPIOA clock
    *RCCAHB1 |= (1 << 0);

    // 2. Clear PA5 mode bits
    *mode_r &= ~(3 << 10);

    // 3. Set PA5 as output
    *mode_r |= (1 << 10);

    // 4. Set PA5 HIGH
    *ODR |= (1 << 5);

    while (1)
    {
    }
}
