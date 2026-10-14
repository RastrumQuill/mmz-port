// sub_080A6730 at 0x080A6730 (thumb)

undefined4 sub_080A6730(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
     (sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar1 == 0)) {
    sub_080128D4(param_1);
    if ((*(char *)(param_1 + 0xd) == '\0') && (*(int *)(param_1 + 0xbc) != 0)) {
      sub_080A64F8(param_1,1,*(byte *)(param_1 + 0x11) & 1,*(byte *)(param_1 + 0x11) >> 4);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb8);
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    sVar1 = sub_08008CFC(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                         *(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      sub_080032EC(0xe3);
    }
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    sVar1 = sub_08008CFC(iVar2,*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
    if (sVar1 != 0) {
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      sub_080032EC(0xe3);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (5 < *(byte *)(param_1 + 0x12)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A658C(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080128D4(param_1);
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}

