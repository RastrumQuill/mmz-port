// sub_0805B990 at 0x0805B990 (thumb)

undefined4 sub_0805B990(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa90b);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + -0x2c00;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0x2c00;
    }
    local_10 = *(int *)(param_1 + 0x58) + -0x1e00;
    sub_08002638(&DAT_084332c8,(DAT_0202e624 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332d4,(DAT_0202e424 - 6) * 0x20 + 0x200);
    sub_080A35FC(&local_14,0,1,*(byte *)(param_1 + 10) >> 4 & 1);
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
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

