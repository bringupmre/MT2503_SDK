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
 *    idp_hisr.h
 *
 * Project:
 * --------
 *    MAUI
 *
 * Description:
 * ------------
 *    Only for MT6235 MDP driver...
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 09 30 2011 hung-wen.hsieh
 * removed!
 * .
 *
 * 12 01 2010 hung-wen.hsieh
 * removed!
 * .
 *
 * 11 23 2010 hung-wen.hsieh
 * removed!
 * .
 *
 * 11 09 2010 hung-wen.hsieh
 * NULL
 * MT6235 IDP V1 => V2 Check In
 *
 * 
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __idp_hisr_mt6235_h__
#define __idp_hisr_mt6235_h__

#ifndef THIS_FILE_BELONGS_TO_IMAGE_DATA_PATH_MODULE_INTERNAL
#error "Hay~! Man~! You can not include this file directly~!"
#endif

#include "drv_features_mdp.h"
#include <idp_define.h>

#if defined(DRV_IDP_6235_SERIES)

#include <idp_core.h>
#include <idp_hisr.h>

enum idp_hisr_cb_type
{
  IDP_HISR_CB_TYPE_RESZ
};
typedef enum idp_hisr_cb_type idp_hisr_cb_type;

typedef void *idp_hisr_handle_t;

extern idp_hisr_handle_t 
idp_hisr_register(
    kal_uint32 const key,
    idp_hisr_cb_type const type,
    idp_hisr_intr_cb_t const cb,
    idp_hisr_intr_cb_param_t const param);

extern void 
idp_hisr_activate(
    idp_hisr_handle_t const handle);

extern void 
idp_hisr_clear_all(
    kal_uint32 const key,
    idp_hisr_cb_type const type);

extern void idp_hisr_imgdma(void);

extern void idp_hisr_resz(void);

extern void idp_hisr_imgproc(void);

#endif // #if defined(DRV_IDP_6235_SERIES)
#endif // #ifndef __idp_hisr_mt6235_h__
