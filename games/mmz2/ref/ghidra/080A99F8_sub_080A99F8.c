// sub_080A99F8 at 0x080A99F8 (thumb)

undefined4 sub_080A99F8(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  uVar1 = (ushort)*(byte *)(param_1 + 0x12);
  if (0x11 < *(byte *)(param_1 + 0x12)) {
    uVar1 = 0x24 - *(byte *)(param_1 + 0x12);
  }
  *(ushort *)(param_1 + 0x52) = uVar1 * 0xe + 0x100;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x71) != '\x01') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) != '\x01') {
    if (*(char *)(param_1 + 0x71) != '\x05') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A97B4(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x71) != '\x02') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    if (*(char *)(param_1 + 0x11) != '\x01') {
      sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0xc00,*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) {
        sub_080A9734(param_1,1,2);
      }
      goto LAB_080a9aa2;
    }
    sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0xc00,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) goto LAB_080a9aa2;
  }
  sub_080A9734(param_1,1,1);
LAB_080a9aa2:
  sub_08006E08(param_1 + 0x74,&DAT_083454f4);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

