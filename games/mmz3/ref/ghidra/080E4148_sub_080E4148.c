// sub_080E4148 at 0x080E4148 (thumb)

undefined4 sub_080E4148(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar3 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar4 + 0x147) * 8);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar1 = sub_080E15D8(1);
  sub_08017700(param_1,uVar1);
  sub_080177F4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  iVar2 = *(int *)(iVar4 + 0x54) + (int)(short)iVar3;
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (iVar3 >> 0x10);
  *(int *)(param_1 + 0xb8) = iVar2;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xc2) = 0x200;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc1) = 0x20;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 4);
  sub_080E4220(param_1);
  return in_lr;
}

