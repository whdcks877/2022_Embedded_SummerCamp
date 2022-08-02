/* generated HAL source file - do not edit */
#include "hal_data.h"
dac_instance_ctrl_t g_dac0_ctrl;
const dac_extended_cfg_t g_dac0_ext_cfg =
{ .enable_charge_pump = 0,
  .data_format = DAC_DATA_FORMAT_FLUSH_RIGHT,
  .output_amplifier_enabled = 0,
  .internal_output_enabled = false, };
const dac_cfg_t g_dac0_cfg =
{ .channel = 0, .ad_da_synchronized = false, .p_extend = &g_dac0_ext_cfg };
/* Instance structure to use this module. */
const dac_instance_t g_dac0 =
{ .p_ctrl = &g_dac0_ctrl, .p_cfg = &g_dac0_cfg, .p_api = &g_dac_on_dac };
icu_instance_ctrl_t g_external_irq9_ctrl;
const external_irq_cfg_t g_external_irq9_cfg =
{ .channel = 9,
  .trigger = EXTERNAL_IRQ_TRIG_FALLING,
  .filter_enable = false,
  .pclk_div = EXTERNAL_IRQ_PCLK_DIV_BY_64,
  .p_callback = R_IRQ_Interrupt,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = NULL,
  .ipl = (12),
#if defined(VECTOR_NUMBER_ICU_IRQ9)
    .irq                 = VECTOR_NUMBER_ICU_IRQ9,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const external_irq_instance_t g_external_irq9 =
{ .p_ctrl = &g_external_irq9_ctrl, .p_cfg = &g_external_irq9_cfg, .p_api = &g_external_irq_on_icu };
icu_instance_ctrl_t g_external_irq8_ctrl;
const external_irq_cfg_t g_external_irq8_cfg =
{ .channel = 8,
  .trigger = EXTERNAL_IRQ_TRIG_FALLING,
  .filter_enable = false,
  .pclk_div = EXTERNAL_IRQ_PCLK_DIV_BY_64,
  .p_callback = R_IRQ_Interrupt,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = NULL,
  .ipl = (12),
#if defined(VECTOR_NUMBER_ICU_IRQ8)
    .irq                 = VECTOR_NUMBER_ICU_IRQ8,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const external_irq_instance_t g_external_irq8 =
{ .p_ctrl = &g_external_irq8_ctrl, .p_cfg = &g_external_irq8_cfg, .p_api = &g_external_irq_on_icu };
icu_instance_ctrl_t g_external_irq13_ctrl;
const external_irq_cfg_t g_external_irq13_cfg =
{ .channel = 13,
  .trigger = EXTERNAL_IRQ_TRIG_FALLING,
  .filter_enable = false,
  .pclk_div = EXTERNAL_IRQ_PCLK_DIV_BY_64,
  .p_callback = R_IRQ_Interrupt,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = NULL,
  .ipl = (12),
#if defined(VECTOR_NUMBER_ICU_IRQ13)
    .irq                 = VECTOR_NUMBER_ICU_IRQ13,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const external_irq_instance_t g_external_irq13 =
{ .p_ctrl = &g_external_irq13_ctrl, .p_cfg = &g_external_irq13_cfg, .p_api = &g_external_irq_on_icu };
icu_instance_ctrl_t g_external_irq12_ctrl;
const external_irq_cfg_t g_external_irq12_cfg =
{ .channel = 12,
  .trigger = EXTERNAL_IRQ_TRIG_FALLING,
  .filter_enable = false,
  .pclk_div = EXTERNAL_IRQ_PCLK_DIV_BY_64,
  .p_callback = R_IRQ_Interrupt,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = NULL,
  .ipl = (12),
#if defined(VECTOR_NUMBER_ICU_IRQ12)
    .irq                 = VECTOR_NUMBER_ICU_IRQ12,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const external_irq_instance_t g_external_irq12 =
{ .p_ctrl = &g_external_irq12_ctrl, .p_cfg = &g_external_irq12_cfg, .p_api = &g_external_irq_on_icu };
icu_instance_ctrl_t g_external_irq11_ctrl;
const external_irq_cfg_t g_external_irq11_cfg =
{ .channel = 11,
  .trigger = EXTERNAL_IRQ_TRIG_FALLING,
  .filter_enable = false,
  .pclk_div = EXTERNAL_IRQ_PCLK_DIV_BY_64,
  .p_callback = R_IRQ_Interrupt,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = NULL,
  .ipl = (12),
#if defined(VECTOR_NUMBER_ICU_IRQ11)
    .irq                 = VECTOR_NUMBER_ICU_IRQ11,
#else
  .irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const external_irq_instance_t g_external_irq11 =
{ .p_ctrl = &g_external_irq11_ctrl, .p_cfg = &g_external_irq11_cfg, .p_api = &g_external_irq_on_icu };
agt_instance_ctrl_t g_timer1_ctrl;
const agt_extended_cfg_t g_timer1_extend =
{ .count_source = AGT_CLOCK_LOCO,
  .agto = AGT_PIN_CFG_DISABLED,
  .agtoa = AGT_PIN_CFG_DISABLED,
  .agtob = AGT_PIN_CFG_DISABLED,
  .measurement_mode = AGT_MEASURE_DISABLED,
  .agtio_filter = AGT_AGTIO_FILTER_NONE,
  .enable_pin = AGT_ENABLE_PIN_NOT_USED,
  .trigger_edge = AGT_TRIGGER_EDGE_RISING, };
const timer_cfg_t g_timer1_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 0.5 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x4000,
  .duty_cycle_counts = 0x2000, .source_div = (timer_source_div_t) 0, .channel = 1, .p_callback = R_AGT1_Interrupt,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = &g_timer1_extend,
  .cycle_end_ipl = (12),
#if defined(VECTOR_NUMBER_AGT1_INT)
    .cycle_end_irq       = VECTOR_NUMBER_AGT1_INT,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer1 =
{ .p_ctrl = &g_timer1_ctrl, .p_cfg = &g_timer1_cfg, .p_api = &g_timer_on_agt };
agt_instance_ctrl_t g_timer0_ctrl;
const agt_extended_cfg_t g_timer0_extend =
{ .count_source = AGT_CLOCK_LOCO,
  .agto = AGT_PIN_CFG_DISABLED,
  .agtoa = AGT_PIN_CFG_DISABLED,
  .agtob = AGT_PIN_CFG_DISABLED,
  .measurement_mode = AGT_MEASURE_DISABLED,
  .agtio_filter = AGT_AGTIO_FILTER_NONE,
  .enable_pin = AGT_ENABLE_PIN_NOT_USED,
  .trigger_edge = AGT_TRIGGER_EDGE_RISING, };
const timer_cfg_t g_timer0_cfg =
{ .mode = TIMER_MODE_PERIODIC,
/* Actual period: 0.0009765625 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x20,
  .duty_cycle_counts = 0x10, .source_div = (timer_source_div_t) 0, .channel = 0, .p_callback = R_AGT0_Interrupt,
  /** If NULL then do not add & */
#if defined(NULL)
    .p_context           = NULL,
#else
  .p_context = &NULL,
#endif
  .p_extend = &g_timer0_extend,
  .cycle_end_ipl = (12),
#if defined(VECTOR_NUMBER_AGT0_INT)
    .cycle_end_irq       = VECTOR_NUMBER_AGT0_INT,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer0 =
{ .p_ctrl = &g_timer0_ctrl, .p_cfg = &g_timer0_cfg, .p_api = &g_timer_on_agt };
void g_hal_init(void)
{
    g_common_init ();
}
