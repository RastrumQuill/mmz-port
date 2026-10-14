// sub_0805B8A0 at 0x0805B8A0 (thumb)

undefined4 sub_0805B8A0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa90a);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + -0x2c00;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0x2c00;
    }
    local_10 = *(int *)(param_1 + 0x58) + -0x1e00;
    sub_08002638(&DAT_084332c8,(DAT_0202e624 - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084332d4,(DAT_0202e424 - 6) * 0x20 + 0x200);
    sub_080A35FC(&local_14,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080032EC(0x71);
    *(undefined *)(param_1 + 0x12) = (&DAT_0833cda4)[*(byte *)(param_1 + 0xf)];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    cVar1 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0xd) = 4;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

