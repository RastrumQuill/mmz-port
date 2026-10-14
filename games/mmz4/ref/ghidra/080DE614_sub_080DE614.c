// sub_080DE614 at 0x080DE614 (thumb)

undefined4 sub_080DE614(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar4 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar2 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(uint *)(param_1 + 0x5c) = (uVar4 * 2 + -1) * 8;
  *(undefined *)(param_1 + 0x12) = 0x18;
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x1a;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  sub_0801CF00(param_1,0xa803);
  sub_080DE6B4(param_1);
  return in_lr;
}

