// sub_080E2FE0 at 0x080E2FE0 (thumb)

undefined4 sub_080E2FE0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar1 + 0x147) * 8);
  DAT_0202f5d0 = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x9000);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + (int)(short)iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + (iVar2 >> 0x10);
  sub_080E30A0(param_1);
  return in_lr;
}

