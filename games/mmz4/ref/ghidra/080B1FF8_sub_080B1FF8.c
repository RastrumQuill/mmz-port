// sub_080B1FF8 at 0x080B1FF8 (thumb)

undefined4 sub_080B1FF8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        sub_080E5D14(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      else {
        sub_080E5D14(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
      }
    }
    else {
      sub_080E5D14(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    if (*(byte *)(param_1 + 0x11) < 2) {
      uVar1 = 0x22;
    }
    else {
      uVar1 = 0xff;
    }
    sub_0802AB70(3,uVar1,param_1 + 0x54);
  }
  else {
    sub_080D0894(2,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

