#pragma once
// MESSAGE AAA_OCEAN_LISTENER PACKING

#define MAVLINK_MSG_ID_AAA_OCEAN_LISTENER 227


typedef struct __mavlink_aaa_ocean_listener_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 uint16_t air_conditioner; /*<  Air conditioner*/
 uint16_t boat_speed; /*<  Boat speed*/
} mavlink_aaa_ocean_listener_t;

#define MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN 12
#define MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_MIN_LEN 12
#define MAVLINK_MSG_ID_227_LEN 12
#define MAVLINK_MSG_ID_227_MIN_LEN 12

#define MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_CRC 73
#define MAVLINK_MSG_ID_227_CRC 73



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AAA_OCEAN_LISTENER { \
    227, \
    "AAA_OCEAN_LISTENER", \
    3, \
    {  { "air_conditioner", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_aaa_ocean_listener_t, air_conditioner) }, \
         { "boat_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_aaa_ocean_listener_t, boat_speed) }, \
         { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aaa_ocean_listener_t, time_usec) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AAA_OCEAN_LISTENER { \
    "AAA_OCEAN_LISTENER", \
    3, \
    {  { "air_conditioner", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_aaa_ocean_listener_t, air_conditioner) }, \
         { "boat_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_aaa_ocean_listener_t, boat_speed) }, \
         { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aaa_ocean_listener_t, time_usec) }, \
         } \
}
#endif

/**
 * @brief Pack a aaa_ocean_listener message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param air_conditioner  Air conditioner
 * @param boat_speed  Boat speed
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aaa_ocean_listener_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t air_conditioner, uint16_t boat_speed, uint64_t time_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, air_conditioner);
    _mav_put_uint16_t(buf, 10, boat_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN);
#else
    mavlink_aaa_ocean_listener_t packet;
    packet.time_usec = time_usec;
    packet.air_conditioner = air_conditioner;
    packet.boat_speed = boat_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AAA_OCEAN_LISTENER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_MIN_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_CRC);
}

/**
 * @brief Pack a aaa_ocean_listener message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param air_conditioner  Air conditioner
 * @param boat_speed  Boat speed
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aaa_ocean_listener_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t air_conditioner,uint16_t boat_speed,uint64_t time_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, air_conditioner);
    _mav_put_uint16_t(buf, 10, boat_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN);
#else
    mavlink_aaa_ocean_listener_t packet;
    packet.time_usec = time_usec;
    packet.air_conditioner = air_conditioner;
    packet.boat_speed = boat_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AAA_OCEAN_LISTENER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_MIN_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_CRC);
}

/**
 * @brief Encode a aaa_ocean_listener struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aaa_ocean_listener C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aaa_ocean_listener_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aaa_ocean_listener_t* aaa_ocean_listener)
{
    return mavlink_msg_aaa_ocean_listener_pack(system_id, component_id, msg, aaa_ocean_listener->air_conditioner, aaa_ocean_listener->boat_speed, aaa_ocean_listener->time_usec);
}

/**
 * @brief Encode a aaa_ocean_listener struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aaa_ocean_listener C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aaa_ocean_listener_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aaa_ocean_listener_t* aaa_ocean_listener)
{
    return mavlink_msg_aaa_ocean_listener_pack_chan(system_id, component_id, chan, msg, aaa_ocean_listener->air_conditioner, aaa_ocean_listener->boat_speed, aaa_ocean_listener->time_usec);
}

/**
 * @brief Send a aaa_ocean_listener message
 * @param chan MAVLink channel to send the message
 *
 * @param air_conditioner  Air conditioner
 * @param boat_speed  Boat speed
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aaa_ocean_listener_send(mavlink_channel_t chan, uint16_t air_conditioner, uint16_t boat_speed, uint64_t time_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, air_conditioner);
    _mav_put_uint16_t(buf, 10, boat_speed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER, buf, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_MIN_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_CRC);
#else
    mavlink_aaa_ocean_listener_t packet;
    packet.time_usec = time_usec;
    packet.air_conditioner = air_conditioner;
    packet.boat_speed = boat_speed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER, (const char *)&packet, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_MIN_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_CRC);
#endif
}

/**
 * @brief Send a aaa_ocean_listener message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aaa_ocean_listener_send_struct(mavlink_channel_t chan, const mavlink_aaa_ocean_listener_t* aaa_ocean_listener)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aaa_ocean_listener_send(chan, aaa_ocean_listener->air_conditioner, aaa_ocean_listener->boat_speed, aaa_ocean_listener->time_usec);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER, (const char *)aaa_ocean_listener, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_MIN_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_CRC);
#endif
}

#if MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aaa_ocean_listener_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t air_conditioner, uint16_t boat_speed, uint64_t time_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint16_t(buf, 8, air_conditioner);
    _mav_put_uint16_t(buf, 10, boat_speed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER, buf, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_MIN_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_CRC);
#else
    mavlink_aaa_ocean_listener_t *packet = (mavlink_aaa_ocean_listener_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->air_conditioner = air_conditioner;
    packet->boat_speed = boat_speed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER, (const char *)packet, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_MIN_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_CRC);
#endif
}
#endif

#endif

// MESSAGE AAA_OCEAN_LISTENER UNPACKING


/**
 * @brief Get field air_conditioner from aaa_ocean_listener message
 *
 * @return  Air conditioner
 */
static inline uint16_t mavlink_msg_aaa_ocean_listener_get_air_conditioner(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field boat_speed from aaa_ocean_listener message
 *
 * @return  Boat speed
 */
static inline uint16_t mavlink_msg_aaa_ocean_listener_get_boat_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field time_usec from aaa_ocean_listener message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_aaa_ocean_listener_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a aaa_ocean_listener message into a struct
 *
 * @param msg The message to decode
 * @param aaa_ocean_listener C-struct to decode the message contents into
 */
static inline void mavlink_msg_aaa_ocean_listener_decode(const mavlink_message_t* msg, mavlink_aaa_ocean_listener_t* aaa_ocean_listener)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aaa_ocean_listener->time_usec = mavlink_msg_aaa_ocean_listener_get_time_usec(msg);
    aaa_ocean_listener->air_conditioner = mavlink_msg_aaa_ocean_listener_get_air_conditioner(msg);
    aaa_ocean_listener->boat_speed = mavlink_msg_aaa_ocean_listener_get_boat_speed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN? msg->len : MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN;
        memset(aaa_ocean_listener, 0, MAVLINK_MSG_ID_AAA_OCEAN_LISTENER_LEN);
    memcpy(aaa_ocean_listener, _MAV_PAYLOAD(msg), len);
#endif
}
