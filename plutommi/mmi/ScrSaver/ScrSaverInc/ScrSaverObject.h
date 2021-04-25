/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
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
 *  ScrSaverObject.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  This file defines the interface of hte screen saver object.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef SCR_SAVER_OBJECT_H
#define SCR_SAVER_OBJECT_H

/****************************************************************************
 * Include
 ****************************************************************************/
#include "MMI_features.h"

#if defined(__MMI_SCREEN_SAVER__)
#include "mmi_rp_app_scr_saver_def.h"
#include "MMIDataType.h"
#include "kal_general_types.h"
#include "ScrSaverGprot.h"
#include "FactoryGprot.h"

/****************************************************************************
 * Event Structure
 ****************************************************************************/

typedef struct
{
    MMI_EVT_GROUP_PARAM_HEADER
} mmi_ssv_obj_close_req_evt_struct;


typedef struct
{
    MMI_EVT_GROUP_PARAM_HEADER
} mmi_ssv_obj_closed_ind_evt_struct;


/****************************************************************************
 * Object Definition
 ****************************************************************************/

struct mmi_ssv_obj_st;

typedef mmi_id (*mmi_ssv_on_create_cb)(
    struct mmi_ssv_obj_st *obj,
    mmi_proc_func parent_proc);

typedef void (*mmi_ssv_on_close_cb)(
    struct mmi_ssv_obj_st *obj);

typedef void (*mmi_ssv_on_run_cb)(
    struct mmi_ssv_obj_st *obj);

typedef void (*mmi_ssv_on_scr_locker_locked_cb)(
    struct mmi_ssv_obj_st *obj);

typedef void (*mmi_ssv_on_backlight_changed_cb)(
    struct mmi_ssv_obj_st *obj,
    MMI_BOOL is_light);

typedef void (*mmi_ssv_on_time_changed_cb)(
    struct mmi_ssv_obj_st *obj);

#define MMI_SSV_OBJ_FIELD_MEMBER_VARIABLE                       \
    MMI_FACTORY_OBJ_HEADER                                      \
    MMI_BOOL                        suspend_scr_locker;         \
    mmi_id                          this_gid;                   \
    mmi_proc_func                   parent_proc              

#define MMI_SSV_OBJ_FIELD_MEMBER_FUNCTION                       \
    mmi_ssv_on_create_cb            on_create;                  \
    mmi_ssv_on_close_cb             on_close;                   \
    mmi_ssv_on_run_cb               on_run;                     \
    mmi_ssv_on_scr_locker_locked_cb on_scr_locker_locked;       \
    mmi_ssv_on_backlight_changed_cb on_backlight_changed;       \
    mmi_ssv_on_time_changed_cb      on_time_changed

#define MMI_SSV_OBJ_FIELD                                       \
    MMI_SSV_OBJ_FIELD_MEMBER_VARIABLE;                          \
    MMI_SSV_OBJ_FIELD_MEMBER_FUNCTION

typedef struct mmi_ssv_obj_st
{
    MMI_SSV_OBJ_FIELD;
} mmi_ssv_obj_struct;


/****************************************************************************
 * Function
 ****************************************************************************/

extern void mmi_ssv_obj_set_handler(mmi_ssv_obj_struct *obj);


extern void mmi_ssv_obj_emit_close_req(mmi_ssv_obj_struct *obj);


extern void mmi_ssv_obj_emit_closed_ind(mmi_ssv_obj_struct *obj);


extern mmi_id mmi_ssv_obj_on_create(
    mmi_ssv_obj_struct *obj,
    mmi_proc_func parent_proc);


extern void mmi_ssv_obj_on_close(mmi_ssv_obj_struct *obj);


extern void mmi_ssv_obj_on_run(mmi_ssv_obj_struct *obj);


extern void mmi_ssv_obj_on_scr_locker_locked(mmi_ssv_obj_struct *obj);


extern void mmi_ssv_obj_on_backlight_changed(
    mmi_ssv_obj_struct *obj,
    MMI_BOOL is_light);


extern void mmi_ssv_obj_on_time_changed(mmi_ssv_obj_struct *obj);


extern MMI_BOOL mmi_ssv_obj_on_want_to_run(void);


extern void mmi_ssv_obj_on_init(mmi_ssv_obj_struct *obj);


extern void mmi_ssv_obj_on_deinit(mmi_ssv_obj_struct *obj);


#endif /* defined(__MMI_SCREEN_SAVER__) */
#endif /* SCR_SAVER_OBJECT_H */
