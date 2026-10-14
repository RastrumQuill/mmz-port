// sub_08087E90 at 0x08087E90 (thumb)

undefined4 sub_08087E90(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885baf8);
    sub_0801CF00(param_1,0x1d0d);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = -0x400;
    }
    else {
      local_18 = 0x400;
    }
    local_18 = *(int *)(param_1 + 0x54) + local_18;
    local_14 = *(undefined4 *)(param_1 + 0x58);
    local_10 = 0x200;
    local_c = 0;
    sub_08088E68(&local_18,&local_10,1,2);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if (((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6800U < 0xd001) &&
       ((*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x14001)) {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

