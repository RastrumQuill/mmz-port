// sub_0803D45C at 0x0803D45C (thumb)

undefined4 sub_0803D45C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08851b78 + (uint)*(byte *)(iVar1 + 0xc3) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,
               &UNK_08851b84 + (uint)(byte)(&DAT_08851d00)[*(byte *)(iVar1 + 0xc3)] * 0x18,
               param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803d70d;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined *)(param_1 + 0xc4) = 0;
  sub_08002B10(0x43);
  if ((byte)(*(char *)(iVar1 + 0xc3) - 3U) < 2) {
    *(undefined *)(param_1 + 0x12) = 2;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0803D520(param_1);
  return in_lr;
}

