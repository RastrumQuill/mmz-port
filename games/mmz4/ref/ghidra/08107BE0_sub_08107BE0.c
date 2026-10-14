// sub_08107BE0 at 0x08107BE0 (thumb)

undefined4 sub_08107BE0(int param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar2 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar2 | 3;
  uVar1 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar2 = bVar2 & 0xef | 3;
  }
  else {
    bVar2 = bVar2 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar1;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef | (byte)(uVar1 << 4);
  uVar1 = (uint)(*(byte *)(param_1 + 0x11) >> 1);
  if (uVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar1 = uVar1 & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar1;
  *pbVar3 = *pbVar3 & 0xdf | (byte)(uVar1 << 5);
  sub_0801CF00(param_1,0x430a);
  iVar4 = *(int *)(param_1 + 0x58) + -0x3c00;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       *(int *)(&DAT_08868f34 + (uint)*(byte *)(param_1 + 0x11) * 8) * 0x100;
  *(int *)(param_1 + 0x58) =
       iVar4 + *(int *)(&DAT_08868f38 + (uint)*(byte *)(param_1 + 0x11) * 8) * 0x100;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08107CB8(param_1);
  return in_lr;
}

