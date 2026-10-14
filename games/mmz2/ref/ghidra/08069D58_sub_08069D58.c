// sub_08069D58 at 0x08069D58 (thumb)

undefined4 sub_08069D58(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833e25e + (uint)*(byte *)(param_1 + 0xbe) * 2));
    sub_080032EC(0x2d);
    *(undefined *)(param_1 + 0x12) = 0x40;
    if (*(byte *)(param_1 + 0xbe) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + -0xe00;
      local_10 = *(int *)(param_1 + 0x58) + -0x400;
      sub_08098C90(&local_14,0,0);
      local_10 = *(int *)(param_1 + 0x58) + -0x1400;
      sub_08098C90(&local_14,0,0);
      local_14 = *(int *)(param_1 + 0x54) + 0xd00;
      local_10 = *(int *)(param_1 + 0x58) + -0x2400;
      sub_08098C90(&local_14,1,0);
      local_10 = *(int *)(param_1 + 0x58) + -0x3400;
      sub_08098C90(&local_14,1,0);
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0xd00;
      local_10 = *(int *)(param_1 + 0x58) + -0x400;
      sub_08098C90(&local_14,1,0);
      local_10 = *(int *)(param_1 + 0x58) + -0x1400;
      sub_08098C90(&local_14,1,0);
      local_14 = *(int *)(param_1 + 0x54) + -0xe00;
      local_10 = *(int *)(param_1 + 0x58) + -0x2400;
      sub_08098C90(&local_14,0,0);
      local_10 = *(int *)(param_1 + 0x58) + -0x3400;
      sub_08098C90(&local_14,0,0);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

