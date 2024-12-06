// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,               &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,               U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,               &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, SPACE),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_NAV_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp SPACE,         &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp GRAVE,         &kp LBKT,          &kp RBKT,          &kp PIPE,          &kp ASTRK,         &kp AMPS,            &kp GT,             &kp LT,             &kp EQUAL,         &kp DQT,           \
U_MT(LGUI, EXCL),  U_MT(LALT, LPAR),  U_MT(LCTRL, RPAR), U_MT(LSHIFT, AT),  &kp COLON,         &kp RA(LS(TILDE)),   U_MT(LSHFT, UNDER), U_MT(LCTRL, MINUS), U_MT(LALT, APOS),  U_MT(LGUI, SEMI),  \
&kp PRCNT,         &kp LBRC,          &kp RBRC,          &kp TILDE,         &kp DLLR,          &kp BLSH,            &kp QMARK,          &kp COMMA,          &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp CARET,         &kp HASH,          &kp PLUS,          U_NA,                U_NA,               U_NA,               U_NP,              U_NP

#define MIRYOKU_LAYOUTMAPPING_LILY58( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
XXX       XXX  XXX  XXX  XXX  XXX                 XXX  XXX  &kp BSPC  XXX  XXX  XXX \
XXX       K00  K01  K02  K03  K04                 K05  K06  K07       K08  K09  XXX \
&kp ESC   K10  K11  K12  K13  K14                 K15  K16  K17       K18  K19  &kp RET \
&kp LC(A) K20  K21  K22  K23  K24  XXX       XXX  K25  K26  K27       K28  K29  XXX \
                    XXX  K32  K34  K33       K35  K36  K37  XXX

#if defined (MIRYOKU_KEYBOARD_LILY58)

#define MIRYOKU_LAYOUTMAPPING_BASE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
XXX       XXX  XXX  XXX  XXX  XXX                 XXX  XXX  &kp BSPC  XXX  XXX  XXX \
XXX       K00  K01  K02  K03  K04                 K05  K06  K07       K08  K09  XXX \
&kp ESC   K10  K11  K12  K13  K14                 K15  K16  K17       K18  K19  &kp RET \
&kp LC(A) K20  K21  K22  K23  K24  XXX       XXX  K25  K26  K27       K28  K29  XXX \
                    XXX  K32  K34  K33       K35  K36  K37  XXX

#endif

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 52 53
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 54 55
