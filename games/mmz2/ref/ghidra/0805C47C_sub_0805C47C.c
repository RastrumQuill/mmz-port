// sub_0805C47C at 0x0805C47C (thumb)

undefined4 sub_0805C47C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa904);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x100;
      local_14 = *(int *)(param_1 + 0x54) + -0x1d00;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
      local_14 = *(int *)(param_1 + 0x54) + 0x1d00;
    }
    local_10 = *(int *)(param_1 + 0x58) + -0xa00;
    sub_08002638(&DAT_084332c8,(DAT_0202e624 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332d4,(DAT_0202e424 - 6) * 0x20 + 0x200);
    sub_080A35FC(&local_14,2,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    *(undefined *)(param_1 + 0x12) = 10;
    sub_080032EC(0x71);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    cVar1 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0xd) = 8;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

