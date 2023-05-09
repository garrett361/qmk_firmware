#pragma once

#define XXX KC_NO

// For the CustomErgoBoard DM with the triangle three thumb cluster, it is more comfortable to have
// the usually-middle thumb key map to the top thumb key, hence reversed numbering on some thumbs.
#define LAYOUT_garrett361(\
     K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29, \
               K32, K33, K34,                         K35, K36, K37           \
) \
LAYOUT_split_3x5_3(\
     K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29, \
               K32, K33, K34,                         K35, K36, K37           \
)
