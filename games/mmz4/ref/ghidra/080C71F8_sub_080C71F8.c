// sub_080C71F8 at 0x080C71F8 (thumb)

undefined4 sub_080C71F8(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((iVar4 != 0) && (1 < *(byte *)(iVar4 + 0xc))) {
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  sub_0801CFF0(param_1);
  iVar3 = 1;
  piVar2 = (int *)(param_1 + 0x54);
  do {
    *piVar2 = piVar2[2];
    piVar2[1] = piVar2[3];
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C7264(param_1);
  }
  else if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
  }
  return in_lr;
}

