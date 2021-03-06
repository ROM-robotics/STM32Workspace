#include <stdint.h>

#define RCC_BASE_ADDR 				0x40021000UL
#define RCC_CFGR_REG_OFFSET 		0x04UL
#define RCC_CFGR_REG_ADDR			( RCC_BASE_ADDR + RCC_CFGR_REG_OFFSET )


int main(void)
{
	uint32 *pRCC_cfgr_reg = (uint32_t*) RCC_CFGT_REG_ADDR;
	*pRCC_cfgr_reg |= 5<<24;

	// gpio
	uint32 *pRCC_apb2enr = (uint32_t*) (RCC_BASE_ADDR+ 0x18);
	*pRCC_apb2enr |= 1<<2;

	uint32 *pGPIOA_mode_reg = (uint32_t*) (GPIOA_BASE_ADDR+0x00);
	*pGPIOA_mode_reg |= 11;
	for(;;)
	{

	}
}
