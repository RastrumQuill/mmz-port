// sub_080CDB08 at 0x080CDB08 (thumb)

undefined4 sub_080CDB08(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886360c + (uint)*(byte *)(param_1 + 0x11) * 2));
  sub_0801CFF0(param_1);
  bVar1 = (&DAT_08863624)[*(byte *)(param_1 + 0x11)];
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
  bVar1 = (&DAT_0886362c)[*(byte *)(param_1 + 0x11)];
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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,
               &DAT_08863594 + (uint)(byte)(&DAT_08863634)[*(byte *)(param_1 + 0x11)] * 0x18,
               param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0x5c) =
       *(short *)((int)&DAT_08128c10 +
                 (((byte)(&DAT_0886361c)[*(byte *)(param_1 + 0x11)] + 0x40) * 0x1000000 >> 0x17)) *
       5 >> 1;
  *(int *)(param_1 + 0x60) =
       (short)(&DAT_08128c10)[(byte)(&DAT_0886361c)[*(byte *)(param_1 + 0x11)]] * 5 >> 1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CDA1C(param_1);
  return in_lr;
}

