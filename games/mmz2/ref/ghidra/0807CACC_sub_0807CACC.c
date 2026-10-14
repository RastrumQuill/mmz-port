// sub_0807CACC at 0x0807CACC (thumb)

undefined4 sub_0807CACC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5405);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = -0xe00;
    }
    else {
      local_10 = 0xe00;
    }
    local_10 = *(int *)(param_1 + 0x54) + local_10;
    local_c = *(int *)(param_1 + 0x58) + -0xa00;
    sub_080A4B98(&local_10,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080032EC(0x2d);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x1f < bVar1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

