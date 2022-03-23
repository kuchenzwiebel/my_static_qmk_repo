# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file


LTO_ENABLE = yes # Link Time Optimization, reduces file size
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
AUTO_SHIFT_ENABLE = yes
AUTO_SHIFT_MODIFIERS = yes
# DYNAMIC_MACRO_ENABLE = yes # deactivated for now to save on flashing size
SRC = matrix.c
RGB_MATRIX_ENABLE = yes

UNICODE_ENABLE   = no  # deactivate default Unicode
UNICODEMAP_ENABLE = yes # activate Unicode Table with indices

NKRO_ENABLE      = no  # USB Nkey Rollover - do I need this? (saves only little on size)

TAP_DANCE_ENABLE = yes
