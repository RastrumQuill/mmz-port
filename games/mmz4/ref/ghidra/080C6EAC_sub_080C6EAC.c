// sub_080C6EAC at 0x080C6EAC (thumb)

undefined4 sub_080C6EAC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_20 [3];
  
  local_20[0] = 0x240;
  local_20[1] = 0x280;
  local_20[2] = 0x2c0;
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar2 = sub_0806610C(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = *(int *)((int)local_20 + ((uint)(iVar2 << 0x18) >> 0x16));
  iVar2 = iVar3 * *(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  iVar3 = iVar3 * (short)(&DAT_08128c10)[bVar1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  *(undefined *)(param_1 + 0xb4) = 6;
  *(undefined *)(param_1 + 0xb5) = 0;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_0801CF00(param_1,0x640a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088629b4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080C6E3C(param_1,param_1 + 0x54,4);
  sub_080C7084(param_1);
  return in_lr;
}

