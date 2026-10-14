// sub_080276E4 at 0x080276E4 (thumb)

undefined4 sub_080276E4(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 4);
  bVar1 = *(byte *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  iVar4 = (uint)bVar1 * 4;
  piVar2 = **(int ***)(&DAT_082ac4b8 + iVar4);
  *(int **)(param_1 + 0x5c) = piVar2;
  if (*piVar2 != 0) {
    uVar3 = sub_08028574(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,uVar3,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0x80285ad;
  sub_0802807C(param_1);
  sub_08025BE4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08025C54(param_1,*(undefined2 *)(&DAT_082ab348 + iVar4));
  if (bVar1 < 0x20) {
    sub_08001EAC(0x10);
  }
  else {
    sub_08001EAC(0x58);
  }
  sub_08027840(param_1);
  return in_lr;
}

