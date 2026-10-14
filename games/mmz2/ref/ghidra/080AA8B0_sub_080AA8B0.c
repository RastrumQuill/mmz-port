// sub_080AA8B0 at 0x080AA8B0 (thumb)

undefined4 sub_080AA8B0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  sVar1 = sub_08008CFC(iVar2,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x68) = uVar3;
      sub_080AA508(param_1,2,0 < *(int *)(param_1 + 0x5c));
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080AA58C(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

