enum EventId {
    EVENT_STATE_ENTRY=0, EVENT_STATE_EXIT,
    EVENT_TOUCH_START, EVENT_TOUCH, EVENT_TOUCH_END,
    EVENT_COLLISION_START, EVENT_COLLISION, EVENT_COLLISION_END,
    EVENT_LAND_COLLISION_START, EVENT_LAND_COLLISION, EVENT_LAND_COLLISION_END,
    EVENT_TIMER,
    EVENT_LISTEN,
    EVENT_SENSOR, EVENT_NO_SENSOR,
    EVENT_AT_TARGET, EVENT_NOT_AT_TARGET,
    EVENT_AT_ROT_TARGET, EVENT_NOT_AT_ROT_TARGET,
    EVENT_MONEY,
    EVENT_EMAIL,
    EVENT_RUN_TIME_PERMISSIONS,
    EVENT_INVENTORY,
    EVENT_ATTACH,
    EVENT_DATASERVER,
    EVENT_CONTROL,
    EVENT_MOVING_START, EVENT_MOVING_END,
    EVENT_REZ,
    EVENT_OBJECT_REZ,
    EVENT_LINK_MESSAGE,
    EVENT_REMOTE_DATA,
    EVENT_HTTP_RESPONSE
};

extern const char *event_names[];

