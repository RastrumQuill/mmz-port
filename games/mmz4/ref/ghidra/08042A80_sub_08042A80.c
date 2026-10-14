// sub_08042A80 at 0x08042A80 (thumb)

undefined4 sub_08042A80(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 2) && (*(char *)(*(int *)(param_1 + 0x28) + 0x150) == -1)) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x28) + 0x153);
    *pbVar1 = *pbVar1 | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08852668 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

