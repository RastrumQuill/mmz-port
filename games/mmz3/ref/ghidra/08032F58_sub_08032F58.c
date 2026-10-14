// sub_08032F58 at 0x08032F58 (thumb)

undefined4 sub_08032F58(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) &&
     ((*(char *)(param_1 + 0x94) == '\0' || (*(char *)(param_1 + 0x149) != '\0')))) {
    cVar1 = sub_08032EEC(param_1,0x1b);
    if (cVar1 == '\0') {
      *(short *)(param_1 + 0xa4) = 0;
    }
    else if ((DAT_02002439 & 8) == 0) {
      sub_08019AC8(8);
      sub_08007DC8(param_1 + 0x74,8);
    }
    else {
      sub_08019AC8(4);
      sub_08007DC8(param_1 + 0x74,4);
    }
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 10) >> 4 & 1;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

