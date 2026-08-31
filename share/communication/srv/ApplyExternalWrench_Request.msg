# Command operations.
uint8 APPLY=0
uint8 CLEAR=1
uint8 CLEAR_ALL=2

# The frame in which wrench and application_point are expressed.
uint8 WORLD_FRAME=0
uint8 BODY_FRAME=1

uint8 operation

# Caller-provided identifier. APPLY replaces an existing command with the same
# identifier; CLEAR removes it. It is ignored by CLEAR_ALL.
string wrench_id

# MuJoCo body name. Required by APPLY.
string body_name
uint8 reference_frame

# If true, application_point is ignored and the wrench is applied at the body
# center of mass. Otherwise, the point is interpreted in reference_frame.
bool at_center_of_mass
geometry_msgs/Point application_point
geometry_msgs/Wrench wrench

# A persistent wrench remains active until CLEAR, CLEAR_ALL, reset, or model
# reload. For a non-persistent wrench, zero duration means one simulation step.
bool persistent
builtin_interfaces/Duration duration
