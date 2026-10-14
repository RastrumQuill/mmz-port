// sub_0805C58C at 0x0805C58C (thumb)

undefined4 sub_0805C58C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa905);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      local_14 = *(int *)(param_1 + 0x54) + -0x1d00;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      local_14 = *(int *)(param_1 + 0x54) + 0x1d00;
    }
    local_10 = *(int *)(param_1 + 0x58) + -0xa00;
    sub_08002638(&DAT_084332c8,(DAT_0202e624 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332d4,(DAT_0202e424 - 6) * 0x20 + 0x200);
    sub_080A35FC(&local_14,2,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(undefined *)(param_1 + 0xbe) = 0;
    iVar1 = *(int *)(param_1 + 200);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x11) = 1;
      *(int *)(param_1 + 200) = 0;
    }
    sub_080032EC(0x71);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

