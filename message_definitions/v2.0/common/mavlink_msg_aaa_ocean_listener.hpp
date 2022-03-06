// MESSAGE AAA_OCEAN_LISTENER support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief AAA_OCEAN_LISTENER message
 *
 * Self defined variables
 */
struct AAA_OCEAN_LISTENER : mavlink::Message {
    static constexpr msgid_t MSG_ID = 227;
    static constexpr size_t LENGTH = 12;
    static constexpr size_t MIN_LENGTH = 12;
    static constexpr uint8_t CRC_EXTRA = 73;
    static constexpr auto NAME = "AAA_OCEAN_LISTENER";


    uint16_t air_conditioner; /*<  Air conditioner */
    uint16_t boat_speed; /*<  Boat speed */
    uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  air_conditioner: " << air_conditioner << std::endl;
        ss << "  boat_speed: " << boat_speed << std::endl;
        ss << "  time_usec: " << time_usec << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << air_conditioner;               // offset: 8
        map << boat_speed;                    // offset: 10
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> air_conditioner;               // offset: 8
        map >> boat_speed;                    // offset: 10
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
