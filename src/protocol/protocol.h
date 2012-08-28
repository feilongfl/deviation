#ifndef PROTODEF

#else
#ifdef PROTO_HAS_CYRF6936
PROTODEF(PROTOCOL_DEVO,   EATRG, DEVO_Initialize, "DEVO")
PROTODEF(PROTOCOL_WK2801, EATRG, WK2x01_Initialize, "WK2801")
PROTODEF(PROTOCOL_WK2601, EATRG, WK2x01_Initialize, "WK2601")
PROTODEF(PROTOCOL_WK2401, EATRG, WK2x01_Initialize, "WK2401")
PROTODEF(PROTOCOL_DSM2,   TAERG, DSM2_Initialize,   "DSM2")
PROTODEF(PROTOCOL_J6PRO,  EATRG, J6PRO_Initialize,  "J6Pro")
#endif //PROTO_HAS_CYRF6936
#ifdef PROTO_HAS_A7105
PROTODEF(PROTOCOL_FLYSKY, EATRG, FLYSKY_Initialize, "Flysky")
#endif //PROTO_HAS_A7105
#endif //PROTODEF