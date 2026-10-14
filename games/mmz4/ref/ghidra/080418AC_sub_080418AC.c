// sub_080418AC at 0x080418AC (thumb)

undefined4 sub_080418AC(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x150) == -1) {
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
    sub_08128884(param_1,*(undefined4 *)(&DAT_088524e4 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

