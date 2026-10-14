// sub_080A1EF4 at 0x080A1EF4 (thumb)

undefined4 sub_080A1EF4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x98) = 0x80a205d;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) =
       *(undefined4 *)(&DAT_0885e75c + (uint)*(byte *)(param_1 + 0x10) * 8);
  *(undefined4 *)(param_1 + 0x60) =
       *(undefined4 *)(&DAT_0885e760 + (uint)*(byte *)(param_1 + 0x10) * 8);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&UNK_0885e69c + (uint)*(byte *)(param_1 + 0x10) * 0x30,param_1 + 0x54,
               4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x5c) * 0x17f;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  }
  if (*(char *)(param_1 + 0x10) == '\x03') {
    sub_0801CF00(param_1,0xd20e);
  }
  else {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0x10) + 0xd20e);
  }
  sub_080A1FE4(param_1);
  return in_lr;
}

