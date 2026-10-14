// sub_080D5020 at 0x080D5020 (thumb)

undefined4 sub_080D5020(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
    iVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0xb4) = iVar1;
    if (*(int *)(param_1 + 0x58) < iVar1) {
      if (*(int *)(param_1 + 0x60) < 0x700) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      }
    }
    else {
      *(int *)(param_1 + 0x58) = iVar1;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080128D4(param_1);
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x800;
    sub_080D6B54((&DAT_0834a148)[(uint)*(byte *)(param_1 + 0x10) * 2]);
    sub_080AC60C(2,&local_18);
    sub_080032EC(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a09c)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

