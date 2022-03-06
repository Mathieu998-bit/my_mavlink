#pragma once
// MESSAGE AAA_OFFBOARD_TO_FCU PACKING

#define MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU 228


typedef struct __mavlink_aaa_offboard_to_fcu_t {
 uint16_t power_on; /*<  Power switch*/
} mavlink_aaa_offboard_to_fcu_t;

#define MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN 2
#define MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_MIN_LEN 2
#define MAVLINK_MSG_ID_228_LEN 2
#define MAVLINK_MSG_ID_228_MIN_LEN 2

#define MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_CRC 196
#define MAVLINK_MSG_ID_228_CRC 196



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AAA_OFFBOARD_TO_FCU { \
    228, \
    "AAA_OFFBOARD_TO_FCU", \
    1, \
    {  { "power_on", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_aaa_offboard_to_fcu_t, power_on) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AAA_OFFBOARD_TO_FCU { \
    "AAA_OFFBOARD_TO_FCU", \
    1, \
    {  { "power_on", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_aaa_offboard_to_fcu_t, power_on) }, \
         } \
}
#endif

/**
 * @brief Pack a aaa_offboard_to_fcu message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param power_on  Power switch
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aaa_offboard_to_fcu_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t power_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN];
    _mav_put_uint16_t(buf, 0, power_on);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN);
#else
    mavlink_aaa_offboard_to_fcu_t packet;
    packet.power_on = power_on;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_MIN_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_CRC);
}

/**
 * @brief Pack a aaa_offboard_to_fcu message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param power_on  Power switch
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aaa_offboard_to_fcu_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t power_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN];
    _mav_put_uint16_t(buf, 0, power_on);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN);
#else
    mavlink_aaa_offboard_to_fcu_t packet;
    packet.power_on = power_on;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_MIN_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_CRC);
}

/**
 * @brief Encode a aaa_offboard_to_fcu struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aaa_offboard_to_fcu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aaa_offboard_to_fcu_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aaa_offboard_to_fcu_t* aaa_offboard_to_fcu)
{
    return mavlink_msg_aaa_offboard_to_fcu_pack(system_id, component_id, msg, aaa_offboard_to_fcu->power_on);
}

/**
 * @brief Encode a aaa_offboard_to_fcu struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aaa_offboard_to_fcu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aaa_offboard_to_fcu_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aaa_offboard_to_fcu_t* aaa_offboard_to_fcu)
{
    return mavlink_msg_aaa_offboard_to_fcu_pack_chan(system_id, component_id, chan, msg, aaa_offboard_to_fcu->power_on);
}

/**
 * @brief Send a aaa_offboard_to_fcu message
 * @param chan MAVLink channel to send the message
 *
 * @param power_on  Power switch
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aaa_offboard_to_fcu_send(mavlink_channel_t chan, uint16_t power_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN];
    _mav_put_uint16_t(buf, 0, power_on);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU, buf, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_MIN_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_CRC);
#else
    mavlink_aaa_offboard_to_fcu_t packet;
    packet.power_on = power_on;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU, (const char *)&packet, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_MIN_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_CRC);
#endif
}

/**
 * @brief Send a aaa_offboard_to_fcu message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aaa_offboard_to_fcu_send_struct(mavlink_channel_t chan, const mavlink_aaa_offboard_to_fcu_t* aaa_offboard_to_fcu)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aaa_offboard_to_fcu_send(chan, aaa_offboard_to_fcu->power_on);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU, (const char *)aaa_offboard_to_fcu, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_MIN_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_CRC);
#endif
}

#if MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aaa_offboard_to_fcu_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t power_on)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, power_on);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU, buf, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_MIN_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_CRC);
#else
    mavlink_aaa_offboard_to_fcu_t *packet = (mavlink_aaa_offboard_to_fcu_t *)msgbuf;
    packet->power_on = power_on;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU, (const char *)packet, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_MIN_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_CRC);
#endif
}
#endif

#endif

// MESSAGE AAA_OFFBOARD_TO_FCU UNPACKING


/**
 * @brief Get field power_on from aaa_offboard_to_fcu message
 *
 * @return  Power switch
 */
static inline uint16_t mavlink_msg_aaa_offboard_to_fcu_get_power_on(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a aaa_offboard_to_fcu message into a struct
 *
 * @param msg The message to decode
 * @param aaa_offboard_to_fcu C-struct to decode the message contents into
 */
static inline void mavlink_msg_aaa_offboard_to_fcu_decode(const mavlink_message_t* msg, mavlink_aaa_offboard_to_fcu_t* aaa_offboard_to_fcu)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aaa_offboard_to_fcu->power_on = mavlink_msg_aaa_offboard_to_fcu_get_power_on(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN? msg->len : MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN;
        memset(aaa_offboard_to_fcu, 0, MAVLINK_MSG_ID_AAA_OFFBOARD_TO_FCU_LEN);
    memcpy(aaa_offboard_to_fcu, _MAV_PAYLOAD(msg), len);
#endif
}
