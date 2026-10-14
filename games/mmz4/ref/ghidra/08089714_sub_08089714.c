// sub_08089714 at 0x08089714 (thumb)

undefined4 sub_08089714(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 8;
    local_14 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0885bde8 + uVar2);
    local_10 = *(int *)(param_1 + 0x58) + *(int *)(&DAT_0885bdec + uVar2);
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xc0) + 0x1f04);
    sub_080D0894(2,&local_14);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(char *)(param_1 + 0x12) == '\0' ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))))
  {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

