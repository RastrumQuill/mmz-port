// sub_080C8598 at 0x080C8598 (thumb)

undefined4 sub_080C8598(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xe90b);
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar2 << 4);
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar2;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar2 << 5);
  sub_08017BCC(param_1,*(char *)(param_1 + 0x7d) + '\x05');
  *(undefined *)(param_1 + 0x12) = 0x20;
  iVar3 = FUN_080fe2f8((uint)*(byte *)(param_1 + 0x11) << 8,5);
  *(char *)(param_1 + 0x13) = (char)iVar3 + -0x40;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar3 << 0x18) >> 0x17)) >> 1;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] >> 1;
  *(undefined4 *)(param_1 + 100) = 4;
  *(undefined4 *)(param_1 + 0x68) = 4;
  sub_080C83D4(param_1);
  return in_lr;
}

