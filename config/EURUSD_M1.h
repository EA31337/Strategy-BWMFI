/**
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_BWMFI_Params_M1 : BWMFIParams {
  Indi_BWMFI_Params_M1() : BWMFIParams(indi_bwmfi_defaults, PERIOD_M1) {
    shift = 0;
  }
} indi_bwmfi_m1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_BWMFI_Params_M1 : StgParams {
  // Struct constructor.
  Stg_BWMFI_Params_M1() : StgParams(stg_bwmfi_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = 0;
    signal_open_boost = 1;
    signal_close_method = 0;
    signal_close_level = (float)1;
    price_stop_method = 0;
    price_stop_level = 50;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_bwmfi_m1;
