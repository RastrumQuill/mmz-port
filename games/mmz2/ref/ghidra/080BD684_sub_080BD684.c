// sub_080BD684 at 0x080BD684 (thumb)

undefined4 sub_080BD684(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 8);
  local_18 = *param_2 + *(int *)(iVar1 + 0x54) + -0x7800;
  local_14 = param_2[1] + *(int *)(iVar1 + 0x58) + -0x5000;
  sub_08012580(iVar1);
  sub_080127E4(iVar1,*(undefined2 *)(&DAT_08348480 + (uint)*(byte *)(iVar1 + 0x10) * 2));
  *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xf3;
  sub_080128D4(iVar1);
  *(int **)(iVar1 + 0x40) = &local_18;
  sub_080EF11C(param_1,param_2,*(undefined4 *)(param_1 + 4));
  sub_08003430(iVar1 + 0x34,0x80bd685);
  *(int *)(iVar1 + 0x3c) = iVar1;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xf7;
  return in_lr;
}

