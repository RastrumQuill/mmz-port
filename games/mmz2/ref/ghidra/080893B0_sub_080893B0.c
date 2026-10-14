// sub_080893B0 at 0x080893B0 (thumb)

undefined4 sub_080893B0(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar3 = 0;
  uVar4 = 0;
  piVar2 = &DAT_08341c74;
  do {
    sVar1 = sub_08008CFC(*(int *)(param_1 + 0x54) + *piVar2,*(int *)(param_1 + 0x58) + piVar2[1]);
    if (sVar1 != 0) {
      uVar3 = uVar3 | 1 << (uVar4 & 0xff) & 0xffU;
    }
    piVar2 = piVar2 + 2;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  sub_080EF11C(param_1,&DAT_08341c74,*(undefined4 *)(&UNK_08341c34 + uVar3 * 4));
  return in_lr;
}

