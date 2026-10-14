// sub_080B9BF8 at 0x080B9BF8 (thumb)

undefined4 sub_080B9BF8(int param_1)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar4 + 10) >> 4;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x6d05);
  sub_080128D4(param_1);
  if ((bVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  uVar1 = (undefined)(bVar2 & 1);
  *(undefined *)(param_1 + 0x4c) = uVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
  *(undefined *)(param_1 + 0x11) = uVar1;
  if ((bVar2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
    iVar5 = *(int *)(iVar4 + 0x54);
    iVar6 = 0x800;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x40;
    iVar5 = *(int *)(iVar4 + 0x54);
    iVar6 = -0x800;
  }
  *(int *)(param_1 + 0x54) = iVar5 + iVar6;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0x1800;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x12) = 0x18;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B9B88(param_1);
  return in_lr;
}

