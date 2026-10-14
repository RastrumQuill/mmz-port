// sub_080E2108 at 0x080E2108 (thumb)

undefined4 sub_080E2108(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar3 + 0x147) * 8);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar1 = sub_080E15D8(0);
  sub_08017700(param_1,uVar1);
  sub_080177F4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + (int)(short)iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + (iVar2 >> 0x10);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xb8) = 8;
  }
  else {
    *(undefined *)(param_1 + 0xb8) = 0;
  }
  *(undefined *)(param_1 + 0xb9) = 0x20;
  sub_080E24B4(param_1,iVar3);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 4);
  sub_080E21E8(param_1);
  return in_lr;
}

