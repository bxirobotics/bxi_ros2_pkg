# One problem transition. Receiver key: (source, code).
# Source scope without a leading/trailing slash or the problem name.
string source
# Bits 15..14 priority, 13..12 reserved=0, 11..5 type, 4..0 problem.
# Keep the original code on recovery; problem 0 is reserved.
uint16 code
# true: occurred, false: recovered. Unchanged problems are not repeated.
bool active
