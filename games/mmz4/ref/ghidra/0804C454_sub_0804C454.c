// sub_0804C454 at 0x0804C454 (thumb)

undefined4 sub_0804C454(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    local_c = *(undefined4 *)(param_1 + 0x58);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 +
                           (((uint)*(byte *)(param_1 + 0x12) * -0x24 + 0x40) * 0x1000000 >> 0x17)) *
                 2 + (short)(&DAT_08128c10)[(uint)*(byte *)(param_1 + 0x12) * -0x24000000 >> 0x18] *
                     2;
      sub_0804BFF0(&local_10,*(char *)(param_1 + 0x12) * -0x24);
    }
    else {
      local_10 = *(short *)((int)&DAT_08128c10 +
                           ((uint)*(byte *)(param_1 + 0x12) * 0x24000000 >> 0x17)) * 2 +
                 *(short *)((int)&DAT_08128c10 +
                           ((uint)*(byte *)(param_1 + 0x12) * 0x24000000 + 0x40000000 >> 0x17)) * 2
                 + *(int *)(param_1 + 0x54);
      sub_0804BFF0(&local_10,*(char *)(param_1 + 0x12) * '$');
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

