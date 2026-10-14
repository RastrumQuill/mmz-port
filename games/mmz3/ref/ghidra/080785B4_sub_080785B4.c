// sub_080785B4 at 0x080785B4 (thumb)

undefined4 sub_080785B4(int param_1)

{
  char extraout_var;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0xe) == '\0') && (iVar1 = sub_08063614(iVar4), iVar1 == 0)) {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar1 = -iVar3;
    if (0 < iVar3) {
      iVar1 = iVar1 + 7;
    }
    iVar3 = iVar3 + (iVar1 >> 3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar1 = -*(int *)(param_1 + 0x60);
    iVar2 = iVar1 + 0x100;
    if (iVar2 < 0) {
      iVar2 = iVar1 + 0x107;
    }
    iVar1 = *(int *)(param_1 + 0x60) + (iVar2 >> 3);
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 < 0xf1) {
      sub_080FE10C(iVar3 * 0x10000 >> 0x10,iVar1 * 0x10000 >> 0x10);
      *(char *)(param_1 + 0x24) = extraout_var + -0x40;
    }
    else {
      sub_08017700(iVar4,*(byte *)(iVar4 + 0x10) + 0x2f02);
      sub_080177F4(iVar4);
      *(undefined *)(iVar4 + 0xb8) = 1;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

