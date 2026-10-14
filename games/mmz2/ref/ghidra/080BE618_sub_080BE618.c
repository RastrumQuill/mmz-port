// sub_080BE618 at 0x080BE618 (thumb)

undefined4 sub_080BE618(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08008CFC();
  if (sVar1 != 0) {
    sub_080BE1AC(param_1,3,0);
    sub_080AC60C(1,param_1 + 0x54);
    sub_080032EC(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

