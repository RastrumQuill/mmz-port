// sub_08048544 at 0x08048544 (thumb)

undefined4 sub_08048544(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08853b18 + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08853ae8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar1 = (&DAT_08853b28)[*(byte *)(param_1 + 0x11)];
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = bVar1 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar3 << 4);
  bVar1 = (&DAT_08853b30)[*(byte *)(param_1 + 0x11)];
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = bVar1 & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar3;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar3 << 5);
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_08128c10 +
                      ((uint)*(byte *)(param_1 + 0x11) * 0x20000000 + 0x40000000 >> 0x17)) << 2;
  *(int *)(param_1 + 0x60) =
       (int)*(short *)((int)&DAT_08128c10 + (((uint)*(byte *)(param_1 + 0x11) << 0x1d) >> 0x17)) <<
       2;
  *(undefined *)(param_1 + 0x12) = 0xc0;
  *(undefined *)(param_1 + 0xbd) = 1;
  sub_0804844C(param_1);
  return in_lr;
}

