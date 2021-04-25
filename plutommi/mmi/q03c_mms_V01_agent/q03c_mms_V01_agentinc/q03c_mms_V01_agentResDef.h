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

/*******************************************************************************
 * Filename:
 * ---------
 * q03c_mms_V01_agentResDef.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for Defintion for MMS V01 Agent.
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
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
 *==============================================================================
 *******************************************************************************/
#ifndef _Q03C_MMS_V01_AGENT_DEFS_H
#define _Q03C_MMS_V01_AGENT_DEFS_H

#if defined(OBIGO_Q03C_MMS_V01)

#include "MMI_features.h"
#include "MMIDataType.h"
#include "WapResdef.h"

/*******************************************************************************
 * Include
 *******************************************************************************/

/*******************************************************************************
 * Define
 *******************************************************************************/

/*******************************************************************************
 * Typedef
 *******************************************************************************/
#ifdef OBIGO_Q03C_MMS_V01

/* MMS V01 agent strings are just mapped with mea string to avoid
sync issues as otherwise same string will be defined at two places*/
typedef enum
{
	STR_ID_MMSV01_AGENT_INVALID_RECIP_ADDRESS = MEA_STR_ID_INVALID_RECIP_ADDRESS,
    STR_ID_MMSV01_AGENT_MAX_NUMBER_OF_MSG = MEA_STR_ID_MAX_NUMBER_OF_MSG,
    STR_ID_MMSV01_AGENT_FAILED_TO_INSERT_DRM = MEA_STR_ID_FAILED_TO_INSERT_DRM,
    STR_ID_MMSV01_AGENT_STORAGE_FULL = MEA_STR_ID_STORAGE_FULL,
    STR_ID_MMSV01_AGENT_FAILED_RESOURCES_EXHAUSTED = MEA_STR_ID_EDIT_FAILED_RESOURCES_EXHAUSTED,
    STR_ID_MMSV01_AGENT_FAILED_FILE_CORRUPT = MEA_STR_ID_FAILED_FILE_CORRUPT,
    STR_ID_MMSV01_AGENT_FAILED_TO_RESIZE_IMAGE = MEA_STR_ID_FAILED_TO_RESIZE_IMAGE,
    STR_ID_MMSV01_AGENT_FAILED_MESSAGE_SIZE_MAXIMUM_REACHED = MEA_STR_ID_MESSAGE_SIZE_MAXIMUM_REACHED,
    STR_ID_MMSV01_AGENT_FAILED_TO_ADD_EMPTY_OBJECT = MEA_STR_ID_FAILED_TO_ADD_EMPTY_OBJECT,
    STR_ID_MMSV01_AGENT_RESTRICTED_MIME_ACTION_NONE = MEA_STR_ID_RESTRICTED_MIME_ACTION_NONE,
    STR_ID_MMSV01_AGENT_WARNING_MODE_CONFIRM = MEA_STR_ID_WARNING_MODE_CONFIRM,
    STR_ID_MMSV01_AGENT_MMS = MEA_STR_ID_MMS,
    STR_ID_MMSV01_AGENT_SETTINGS = MEA_STR_ID_CONFIG,
#ifdef __MMI_URI_AGENT__   
    STR_ID_MMSV01_AGENT_SEND_MMS_QUERY = MEA_STR_ID_SEND_MMS_QUERY,
#endif   
    STR_ID_MMSV01_AGENT_MMS_TITLE  = MEA_STR_ID_MMS,
    STR_ID_MMSV01_AGENT_EDIT_PROFILE = MEA_STR_ID_EDIT_PROFILE,
    STR_ID_MMSV01_AGENT_CREATION_MODE_FREE = MEA_STR_ID_CREATION_MODE_FREE,
    STR_ID_MMSV01_AGENT_CREATION_MODE_RESTRICTED = MEA_STR_ID_CREATION_MODE_RESTRICTED,
    STR_ID_MMSV01_AGENT_CREATION_MODE_WARNING = MEA_STR_ID_CREATION_MODE_WARNING,
    STR_ID_MMSV01_AGENT_160x120 = MEA_STR_ID_160x120,
    STR_ID_MMSV01_AGENT_320x240 = MEA_STR_ID_320x240,
#if !(defined(__MMI_MMS_MAX_IMAGE_RESIZING_RESOLUTION__) && (__MMI_MMS_MAX_IMAGE_RESIZING_RESOLUTION__ == __320x240__))
    STR_ID_MMSV01_AGENT_640x480 = MEA_STR_ID_640x480,
#endif
    STR_ID_MMSV01_AGENT_DURATION = MEA_STR_ID_DURATION,
    STR_ID_MMSV01_AGENT_CREATION_MODE = MEA_STR_ID_CREATION_MODE,
    STR_ID_MMSV01_AGENT_IMAGE_RESIZE = MEA_STR_ID_IMAGE_RESIZE,
    STR_ID_MMSV01_AGENT_BEST_SLIDE_DURATION = MEA_STR_ID_BEST_SLIDE_DURATION,
    STR_ID_MMSV01_AGENT_AUTO_SIGNATURE = MEA_STR_ID_AUTO_SIGNATURE,
    STR_ID_MMSV01_AGENT_SIGNATURE = MEA_STR_ID_SIGNATURE,
    STR_ID_MMSV01_AGENT_CONFIG_COMPOSE = MEA_STR_ID_CONFIG_COMPOSE,
    STR_ID_MMSV01_AGENT_CONFIG_DEL_RETRIEVAL = MEA_STR_ID_DEL_RETRIEVAL,
    STR_ID_MMSV01_AGENT_IM_RETRIEVAL = MEA_STR_ID_IM_RETRIEVAL,
    STR_ID_MMSV01_AGENT_RES_RETRIEVAL_ROAM = MEA_STR_ID_RES_RETRIEVAL_ROAM,
    STR_ID_MMSV01_AGENT_AUTO_RETRIEVAL_ROAM = MEA_STR_ID_AUTO_RETRIEVAL_ROAM,
    STR_ID_MMSV01_AGENT_ASK_RETRIEVAL_ROAM = MEA_STR_ID_ASK_RETRIEVAL_ROAM,
    STR_ID_MMSV01_AGENT_CONFIG_ON_REQUEST = MEA_STR_ID_CONFIG_ON_REQUEST,
    STR_ID_MMSV01_AGENT_CONFIG_ALWAYS = MEA_STR_ID_CONFIG_ALWAYS,
    STR_ID_MMSV01_AGENT_CONFIG_NEVER = MEA_STR_ID_CONFIG_NEVER,
    STR_ID_MMSV01_AGENT_CONFIG_MSG_RETR_HOME_MODE = MEA_STR_ID_CONFIG_MSG_RETR_HOME_MODE,
    STR_ID_MMSV01_AGENT_CONFIG_MSG_RETR_ROAM_MODE = MEA_STR_ID_CONFIG_MSG_RETR_ROAM_MODE,
    STR_ID_MMSV01_AGENT_CONFIG_RR = MEA_STR_ID_CONFIG_RR,
    STR_ID_MMSV01_AGENT_CONFIG_DR = MEA_STR_ID_CONFIG_DR,
    STR_ID_MMSV01_AGENT_MSG_RETRIEVAL = MEA_STR_ID_CONFIG_MSG_RETRIEVAL,
    STR_ID_MMSV01_AGENT_CONFIG_1_HOUR = MEA_STR_ID_CONFIG_1_HOUR,
    STR_ID_MMSV01_AGENT_CONFIG_6_HOURS = MEA_STR_ID_CONFIG_6_HOURS,
    STR_ID_MMSV01_AGENT_CONFIG_12_HOURS = MEA_STR_ID_CONFIG_12_HOURS,
    STR_ID_MMSV01_AGENT_CONFIG_1_DAY = MEA_STR_ID_CONFIG_1_DAY,
    STR_ID_MMSV01_AGENT_CONFIG_1_WEEK = MEA_STR_ID_CONFIG_1_WEEK,
    STR_ID_MMSV01_AGENT_CONFIG_MAX = MEA_STR_ID_CONFIG_MAX,
    STR_ID_MMSV01_AGENT_CONFIG_LOW = MEA_STR_ID_CONFIG_LOW,
    STR_ID_MMSV01_AGENT_CONFIG_NORMAL = MEA_STR_ID_CONFIG_NORMAL,
    STR_ID_MMSV01_AGENT_CONFIG_HIGH = MEA_STR_ID_CONFIG_HIGH,
    STR_ID_MMSV01_AGENT_CONFIG_IMMEDIATE = MEA_STR_ID_CONFIG_IMMEDIATE,
    STR_ID_MMSV01_AGENT_CONFIG_IN_ONE_HOUR = MEA_STR_ID_CONFIG_IN_ONE_HOUR,
    STR_ID_MMSV01_AGENT_CONFIG_IN_12_HOURS = MEA_STR_ID_CONFIG_IN_12_HOURS,
    STR_ID_MMSV01_AGENT_CONFIG_IN_24_HOURS = MEA_STR_ID_CONFIG_IN_24_HOURS,
    STR_ID_MMSV01_AGENT_CONFIG_VAL_PER = MEA_STR_ID_CONFIG_VAL_PER,    
    STR_ID_MMSV01_AGENT_CONFIG_PRIORITY = MEA_STR_ID_CONFIG_PRIORITY,
    STR_ID_MMSV01_AGENT_DELIVERY_TIME = MEA_STR_ID_CONFIG_DELIVERY_TIME,
    STR_ID_MMSV01_AGENT_CONFIG_MSG_RETRIEVAL = MEA_STR_ID_CONFIG_MSG_RETRIEVAL,
    STR_ID_MMSV01_AGENT_CONFIG_SENDING = MEA_STR_ID_CONFIG_SENDING,
    STR_ID_MMSV01_AGENT_REJECT = MEA_STR_ID_REJECT,
    STR_ID_MMSV01_AGENT_ALLOW = MEA_STR_ID_ALLOW,
    STR_ID_MMSV01_AGENT_CONFIG_ANONYM = MEA_STR_ID_CONFIG_ANONYM,
    STR_ID_MMSV01_AGENT_CONFIG_ADVERT = MEA_STR_ID_CONFIG_ADVERT,
    STR_ID_MMSV01_AGENT_NO_CONTENT = MEA_STR_ID_NO_CONTENT,
    /*Rahul check this*/
    STR_ID_MMSV01_AGENT_CANT_INPUT_EMPTY_VALUE = WIDGET_STR_ID_CANT_INPUT_EMPTY_VALUE,
    STR_ID_MMSV01_AGENT_CONFIG_MSG_FILTERS = MEA_STR_ID_CONFIG_MSG_FILTERS,
    STR_ID_MMSV01_AGENT_COMMON_SETTINGS = MEA_STR_ID_COMMON_SETTINGS,
    STR_ID_MMSV01_AGENT_MIN_TIME_DURATION = MEA_STR_ID_MIN_TIME_DURATION,




	STR_ID_MMSV01_AGENT_END
} str_id_mmsv01_agent_enum;

typedef enum
{
    IMG_ID_MMSV01_AGENT_TITLE_NORMAL = MEA_IMG_TITLE_NORMAL
}img_id_mmsv01_agent_enum;

typedef enum
{
	SCR_ID_MMSV01_AGENT_WAP_NOT_READY = MMS_V01AGENT_BASE,
    SCR_ID_MMSV01_AGENT_SCREEN_WARNING_CONFIRM,
    SCR_ID_MMSV01_AGENT_MESSAGE_SETTINGS,
    SCR_ID_MMSV01_AGENT_MESSAGE_COMMON_SETTINGS,
    SCR_ID_MMSV01_AGENT_MESSAGE_SETTINGS_SIM_SELECTION,
    SCR_ID_MMSV01_AGENT_MESSAGE_COMPOSE_SETTINGS,
    SCR_ID_MMSV01_AGENT_MESSAGE_SENDING_SETTINGS,
    SCR_ID_MMSV01_AGENT_MESSAGE_RETRIEVAL_SETTINGS,
    SCR_ID_MMSV01_AGENT_MESSAGE_FILTER_SETTINGS,
    SCR_ID_MMSV01_AGENT_MESSAGE_MEMORY_STATUS,
    SCR_ID_MMSV01_AGENT_PROGRESS,
    
	SCR_ID_MMSV01_AGENT_END 
} scr_mmsv01_agent_enum;

#endif /* OBIGO_Q03C_MMS_V01 */

/*******************************************************************************
 * Global Function
 *******************************************************************************/

#endif /* defined(OBIGO_Q03C_MMS_V01) */ 

#endif /* _Q03C_MMS_V01_AGENT_DEFS_H */ 
