// sub_080E184C at 0x080E184C (thumb)

undefined4 sub_080E184C(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xbc);
  iVar3 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar5 + 0x147) * 8);
  DAT_0202f5d0 = 1;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar1 = sub_080E15D8(0);
  sub_08017700(param_1,uVar1);
  sub_080177F4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (int)(short)iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + (iVar3 >> 0x10);
  *(undefined4 *)(param_1 + 0xb4) = 0xa00;
  piVar4 = (int *)(param_1 + 0xb8);
  *piVar4 = 0x5000;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar3 = sub_08025A74(iVar5);
    uVar2 = (uint)(iVar3 << 0x18) >> 0xf;
  }
  else {
    iVar3 = sub_08025A74(iVar5);
    uVar2 = (uint)(iVar3 << 0x18) >> 0x10;
  }
  *piVar4 = *piVar4 - uVar2;
  *(int *)(param_1 + 100) = (*(int *)(param_1 + 0x54) + 0x7800) - DAT_020302c0;
  *(int *)(param_1 + 0x68) = (*(int *)(param_1 + 0x58) + 0x5000) - DAT_020302c4;
  *(undefined *)(param_1 + 0xc1) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 4);
  sub_080E197C(param_1);
  return in_lr;
}

