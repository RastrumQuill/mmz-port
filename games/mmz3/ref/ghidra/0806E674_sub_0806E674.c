// sub_0806E674 at 0x0806E674 (thumb)

undefined4 sub_0806E674(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((iVar3 != 0) && (1 < *(byte *)(iVar3 + 0xc))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if ((uVar2 < 0x6001) && ((DAT_02030108 & 0x42) == 0)) {
    cVar1 = sub_0806E44C(param_1);
    if (cVar1 == '\0') {
      sub_0806E54C(param_1);
      cVar1 = sub_0806E4BC(param_1);
      if (cVar1 == '\0') {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362ff0 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836300c + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
    }
  }
  else {
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0xb4) = *(uint *)(iVar3 + 0xb4) & ~(1 << *(sbyte *)(param_1 + 0x11));
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

