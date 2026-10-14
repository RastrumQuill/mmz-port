// sub_0809C338 at 0x0809C338 (thumb)

undefined4 sub_0809C338(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,0xc600);
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 10);
  uVar4 = bVar1 >> 4 & 1;
  if ((bVar1 >> 4 & 1) == 0) {
    bVar1 = bVar1 & 0xef;
  }
  else {
    bVar1 = bVar1 | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  if ((*(byte *)(iVar6 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar6 + 0x54);
    iVar5 = -0x1700;
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x54);
    iVar5 = 0x1700;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + -0x2600;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0x10;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return in_lr;
}

