// sub_08108D40 at 0x08108D40 (thumb)

undefined4 sub_08108D40(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar1 = *(int *)(&DAT_0884fe30 + (uint)*(byte *)(iVar4 + 0x174) * 8);
  uVar3 = (uint)*(byte *)(iVar4 + 0xf1);
  if (uVar3 < *(byte *)(iVar4 + 0xf2)) {
    uVar3 = (uint)*(byte *)(iVar4 + 0xf2);
  }
  if (uVar3 < *(byte *)(iVar4 + 0xf3)) {
    uVar3 = (uint)*(byte *)(iVar4 + 0xf3);
  }
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,uVar3 | 0x9400);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  iVar2 = *(int *)(iVar4 + 0x54) + (int)(short)iVar1;
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (iVar1 >> 0x10);
  *(int *)(param_1 + 0xb4) = iVar2;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = 0x200;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xbd) = 0x20;
  *(undefined *)(param_1 + 0x12) = 0x3c;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08869378)[*(byte *)(param_1 + 9)] + 4);
  sub_08108E38(param_1);
  return in_lr;
}

