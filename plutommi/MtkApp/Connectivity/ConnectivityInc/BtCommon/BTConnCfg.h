/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
 *
 * Filename:
 * ---------
 * BTMMIScrGprots.h
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file is the header file of btmmiscr.c
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __BT_CONN_CFG_H__
#define __BT_CONN_CFG_H__

#include "MMI_features.h"
#include "BtcmSrvGprot.h"
#include "MMIDataType.h"
#include "kal_general_types.h"


#ifdef __MMI_BT_DIALER_SUPPORT__
/***************************************************************************** 
* Extern Global Function Pointer
*****************************************************************************/

typedef void (*mmi_bt_dialer_profile_cm_ballback)(srv_bt_cm_bt_addr* dev_addr, srv_bt_cm_connection_type conn_type,MMI_BOOL result,MMI_BOOL is_connect, MMI_BOOL is_indicate);
typedef void (*mmi_bt_dialer_profile_conn_funcptr)(srv_bt_cm_bt_addr *dev_addr, mmi_bt_dialer_profile_cm_ballback cb);
typedef void (*mmi_bt_dialer_profile_disconn_funcptr)(srv_bt_cm_bt_addr* dev_addr,mmi_bt_dialer_profile_cm_ballback cb);

/***************************************************************************** 
* Struct
*****************************************************************************/

typedef struct
{
	U32 indx;
	srv_bt_cm_connection_type type;
	mmi_bt_dialer_profile_conn_funcptr conn;
	mmi_bt_dialer_profile_disconn_funcptr disconn;	 
}mmi_bt_dialer_conn_callback_item;

extern mmi_bt_dialer_conn_callback_item g_mmi_btdialer_callback_tbl[];
extern U32 mmi_bt_dialer_tbl_count(void);

#endif
#endif /* __BT_CONN_CFG_H__ */ 


/*------------------------------------------------------------*/
/*-------------------end--------------------------------------*/
/*------------------------------------------------------------*/

