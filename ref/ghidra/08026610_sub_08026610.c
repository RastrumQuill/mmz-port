// sub_08026610 at 0x08026610 (thumb)

undefined4 sub_08026610(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 4);
  uVar3 = (uint)*(byte *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  piVar1 = **(int ***)(&DAT_082ab250 + uVar3 * 4);
  *(int **)(param_1 + 0x5c) = piVar1;
  if (*piVar1 != 0) {
    uVar2 = sub_08027648(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,uVar2,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0x8027681;
  sub_080272A0(param_1);
  sub_08025BE4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08025C54(param_1,*(undefined2 *)(&DAT_082aa440 + uVar3 * 2));
  if (uVar3 < 10) {
    sub_08001EAC(1);
  }
  *(undefined *)(param_1 + 0x62) = 0;
  sub_08026760(param_1);
  return in_lr;
}

