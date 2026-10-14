// sub_080788A8 at 0x080788A8 (thumb)

undefined4 sub_080788A8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (iVar1 = sub_0807A108(param_1), iVar1 != 0)) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363d34 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08079F64(param_1);
    if ((*(char *)(param_1 + 0xd) == '\x02') ||
       ((*(char *)(param_1 + 0xd) == '\x04' || (iVar1 = sub_08063614(param_1), iVar1 == 0)))) {
      if (*(int *)(param_1 + 0x58) + -0x400 < DAT_0202e48c) {
        if (*(char *)(param_1 + 0xc2) == '\0') {
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        *(char *)(param_1 + 0xc2) = '\x01';
        iVar1 = *(int *)(param_1 + 0x60) + 0x20;
        *(int *)(param_1 + 0x60) = iVar1;
        if (0x700 < iVar1) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      }
      else {
        if (*(char *)(param_1 + 0xc2) == '\x01') {
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        *(char *)(param_1 + 0xc2) = '\0';
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363d4c + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
    }
    else {
      *(undefined *)(param_1 + 0xb8) = *(undefined *)(param_1 + 0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08078994(param_1);
  }
  return in_lr;
}

