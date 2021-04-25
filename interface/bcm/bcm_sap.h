
MSG_ID_BCM_START,
MSG_ID_BCM_POWER_ONOFF_REQ,

MSG_ID_BCM_POWER_ONOFF_CNF,


MSG_ID_BCM_WRITE_LOCAL_NAME_REQ,

MSG_ID_BCM_WRITE_LOCAL_NAME_CNF,

MSG_ID_BCM_READ_LOCAL_NAME_REQ,

MSG_ID_BCM_READ_LOCAL_NAME_CNF,


MSG_ID_BCM_WRITE_LOCAL_ADDR_REQ,

MSG_ID_BCM_WRITE_LOCAL_ADDR_CNF,

MSG_ID_BCM_READ_LOCAL_ADDR_REQ,

MSG_ID_BCM_READ_LOCAL_ADDR_CNF,


MSG_ID_BCM_WRITE_SCANENABLE_MODE_REQ,

MSG_ID_BCM_WRITE_SCANENABLE_MODE_CNF,


MSG_ID_BCM_DISCOVERY_PARA_REQ,

MSG_ID_BCM_DISCOVERY_PARA_CNF,

MSG_ID_BCM_DISCOVERY_REQ,

MSG_ID_BCM_DISCOVERY_CNF,


MSG_ID_BCM_DISCOVERY_CANCEL_REQ,

MSG_ID_BCM_DISCOVERY_CANCEL_CNF,


MSG_ID_BCM_READ_REMOTE_NAME_REQ,

MSG_ID_BCM_READ_REMOTE_NAME_CNF,


MSG_ID_BCM_BONDING_REQ,

MSG_ID_BCM_BONDING_CNF,


MSG_ID_BCM_BONDING_RSP_REQ,
MSG_ID_BCM_BONDING_RSP_CNF,


MSG_ID_BCM_SERVICE_SEARCH_REQ,

MSG_ID_BCM_SERVICE_SEARCH_CNF,


MSG_ID_BCM_WRITE_AUTHENTICATION_MODE_REQ,
MSG_ID_BCM_WRITE_AUTHENTICATION_MODE_CNF,

MSG_ID_BCM_READ_AUTHENTICATION_MODE_REQ,
MSG_ID_BCM_READ_AUTHENTICATION_MODE_CNF,

MSG_ID_BCM_DEV_LIST_OP_REQ,
MSG_ID_BCM_DEV_LIST_OP_CNF,


MSG_ID_BCM_PROFILE_STATE_QUERY_REQ,
MSG_ID_BCM_PROFILE_STATE_QUERY_CNF,
MSG_ID_BCM_CM_STATE_QUERY_REQ,
MSG_ID_BCM_CM_STATE_QUERY_CNF,

MSG_ID_BCM_SNIFF_PARA_REQ,
MSG_ID_BCM_SNIFF_PARA_CNF,


MSG_ID_BCM_RSSI_REQ,

MSG_ID_BCM_RSSI_CNF,


MSG_ID_BCM_PROFILE_ACT_REQ,
MSG_ID_BCM_PROFILE_ACT_CNF,
MSG_ID_BCM_PROFILE_CONN_REQ,
MSG_ID_BCM_PROFILE_CONN_CNF,
MSG_ID_BCM_EVENT_IND,
MSG_ID_BCM_PROFILE_EVENT_IND,

/*OPP MSG BEGIN*/
MSG_ID_BCM_OPP_PUSH_OBJ_REQ,
MSG_ID_BCM_OPP_PUSH_OBJ_CNF,
MSG_ID_BCM_OPP_ABORT_REQ,
MSG_ID_BCM_OPP_ABORT_CNF,
MSG_ID_BCM_OPP_RECV_OBJ_IND,
MSG_ID_BCM_OPP_RECV_OBJ_RES,
MSG_ID_BCM_OPP_RECV_OBJ_CNF,
MSG_ID_BCM_OPP_RESULT_IND,
/*OPP MSG END*/

/*PBAP MSG BEGIN*/
MSG_ID_BCM_PBAP_GET_LIST_REQ,
MSG_ID_BCM_PBAP_GET_LIST_CNF,
MSG_ID_BCM_PBAP_PULL_ENTRY_REQ,
MSG_ID_BCM_PBAP_PULL_ENTRY_CNF,
MSG_ID_BCM_PBAP_DL_CH_REQ,
MSG_ID_BCM_PBAP_DL_CH_CNF,
MSG_ID_BCM_PBAP_RESULT_IND,
/*PBAP MSG END*/
#if defined(__BT_HF_PROFILE__)
//HFP
MSG_ID_BCM_HF_CIEV_IND,
MSG_ID_BCM_HF_VGS_IND,
MSG_ID_BCM_HF_CME_IND,
MSG_ID_BCM_HF_CLCC_REQ,
MSG_ID_BCM_HF_CLCC_CNF,
MSG_ID_BCM_HF_ATA_REQ,
MSG_ID_BCM_HF_ATA_CNF,
MSG_ID_BCM_HF_CIEV_CALL_IND,
MSG_ID_BCM_HF_CHUP_REQ,
MSG_ID_BCM_HF_CHUP_CNF,
MSG_ID_BCM_HF_CHLD_REQ,
MSG_ID_BCM_HF_CHLD_CNF,
MSG_ID_BCM_HF_ATD_REQ,
MSG_ID_BCM_HF_ATD_CNF,
MSG_ID_BCM_HF_VTS_REQ,
MSG_ID_BCM_HF_VTS_CNF,
MSG_ID_BCM_HF_RAV_REQ,
MSG_ID_BCM_HF_RAV_CNF,
#endif/*#if defined(__BT_HF_PROFILE__)*/
#if defined(__BT_HFG_PROFILE__)
MSG_ID_BCM_HFG_SET_AUDIO_PATH_REQ,
MSG_ID_BCM_HFG_SET_AUDIO_PATH_CNF,
MSG_ID_BCM_HFG_READ_AUDIO_PATH_REQ,
MSG_ID_BCM_HFG_READ_AUDIO_PATH_CNF,
MSG_ID_BCM_CHANGE_VOLUMN_IND,
#endif/*#if defined(__BT_HFG_PROFILE__)*/
#ifdef __BT_A2DP_PROFILE__
MSG_ID_BCM_A2DP_RECONFIG_START_REQ,
MSG_ID_BCM_A2DP_RECONFIG_START_CNF,
#endif
#ifdef __BT_AVRCP_PROFILE__
MSG_ID_BCM_AVRCP_CMD_IND,
#endif
MSG_ID_BCM_END,

