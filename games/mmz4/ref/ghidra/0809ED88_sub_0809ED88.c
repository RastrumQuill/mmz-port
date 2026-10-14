// sub_0809ED88 at 0x0809ED88 (thumb)

undefined4 sub_0809ED88(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (uVar1 >> 8 < 0x21) {
      if (*(char *)(param_1 + 0xb8) == '\0') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(char *)(param_1 + 0xb8) = '\x01';
        *(undefined *)(param_1 + 0x12) = 0x62;
      }
      sub_0809F028(param_1);
      if (*(int *)(param_1 + 0xc0) == 0) {
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885e200 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
      else {
        sub_0809F078(param_1);
      }
      sub_0801CFF0(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xb8) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809EE2C(param_1);
  }
  return in_lr;
}

