// sub_080C26DC at 0x080C26DC (thumb)

undefined4 sub_080C26DC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  local_20[0] = 0x4802;
  local_20[1] = 0x4902;
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = *(byte *)(param_1 + 0xb4) + 0x40;
  iVar2 = *(short *)((int)&DAT_08128c10 + ((uint)(iVar3 * 0x1000000) >> 0x17)) * 0x2c0;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  iVar2 = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb4)] * 0x2c0;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  sub_0801CD28(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,*(undefined2 *)(local_20 + bVar1));
  *(char *)(param_1 + 0x24) = (char)iVar3;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08861f80,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080C27D4(param_1);
  return in_lr;
}

