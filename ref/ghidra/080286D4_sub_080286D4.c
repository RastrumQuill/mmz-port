// sub_080286D4 at 0x080286D4 (thumb)

undefined4 sub_080286D4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 4);
  iVar1 = *(byte *)(param_1 + 0x10) - 5;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  piVar2 = *(int **)(&DAT_082acb78 + iVar1 * 4);
  *(int **)(param_1 + 0x5c) = piVar2;
  if (*piVar2 != 0) {
    uVar3 = sub_08029314(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,uVar3,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0x802934d;
  sub_08025BE4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08025C54(param_1,*(undefined2 *)(&DAT_082ac842 + iVar1 * 2));
  *(undefined *)(param_1 + 0x62) = 0;
  return in_lr;
}

