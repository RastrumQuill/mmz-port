// sub_0803DB00 at 0x0803DB00 (thumb)

undefined4 sub_0803DB00(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0801D3D0(param_1,0);
  }
  *(int *)(param_1 + 100) = (int)(char)(&DAT_08851d68)[*(byte *)(param_1 + 0x10)] << 8;
  *(int *)(param_1 + 0x68) = (int)(char)(&DAT_08851d7b)[*(byte *)(param_1 + 0x10)] << 8;
  *(int *)(param_1 + 0x5c) = (int)(char)(&DAT_08851d8e)[*(byte *)(param_1 + 0x10)] << 8;
  *(int *)(param_1 + 0x60) = (int)(char)(&DAT_08851da1)[*(byte *)(param_1 + 0x10)] << 8;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xc0) = 0;
  sub_0803DBA8(param_1);
  return in_lr;
}

