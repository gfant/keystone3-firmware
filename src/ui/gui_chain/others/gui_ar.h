#ifndef _GUI_AR_H
#define _GUI_AR_H

#include "stdlib.h"
#include "stdint.h"
#include "stdio.h"
#include "librust_c.h"
#include "gui_views.h"
#include "gui_chain.h"
#include "gui_lock_widgets.h"
#include "screen_manager.h"
#include "account_public_info.h"

PtrT_TransactionCheckResult GuiGetArCheckResult(void);
void GuiSetArUrData(URParseResult *urResult, URParseMultiResult *urMultiResult, bool multi);
void *GuiGetArData(void);
void FreeArMemory(void);
void GetArweaveValue(void *indata, void *param, uint32_t maxLen);
void GetArweaveFee(void *indata, void *param, uint32_t maxLen);
void GetArweaveFromAddress(void *indata, void *param, uint32_t maxLen);
void GetArweaveToAddress(void *indata, void *param, uint32_t maxLen);
void GuiShowArweaveTxDetail(lv_obj_t *parent, void *totalData);
void GetArweaveMessageText(void *indata, void *param, uint32_t maxLen);
int GetArweaveRawMessageLength(void *param);
int GetArweaveMessageLength(void *param);
void GetArweaveRawMessage(void *indata, void *param, uint32_t maxLen);
void GetArweaveMessageAddress(void *indata, void *param, uint32_t maxLen);
bool IsArweaveSetupComplete(void);
UREncodeResult *GuiGetArweaveSignQrCodeData(void);
void GuiArDataItemOverview(lv_obj_t *parent, void *totalData);
void GuiArDataItemDetail(lv_obj_t *parent, void *totalData);

#endif