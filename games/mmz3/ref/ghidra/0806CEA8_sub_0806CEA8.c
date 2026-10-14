// sub_0806CEA8 at 0x0806CEA8 (thumb)

undefined4 sub_0806CEA8(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02030108 & 0x40) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_0806D2D8(param_1);
    }
    else {
      sub_0806D36C(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

