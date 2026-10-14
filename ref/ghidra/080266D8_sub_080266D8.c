// sub_080266D8 at 0x080266D8 (thumb)

undefined4 sub_080266D8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  piVar1 = *(int **)((uint)*(byte *)(param_1 + 0x12) * 4 +
                    *(int *)(&DAT_082ab250 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(int **)(param_1 + 0x5c) = piVar1;
  if (*piVar1 != 0) {
    uVar2 = sub_08027648(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,uVar2,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0x8027681;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_08026760(param_1);
  return in_lr;
}

