// sub_080432D4 at 0x080432D4 (thumb)

undefined4 sub_080432D4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  cVar1 = sub_08042DE4();
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08029778(param_1,8);
      *(undefined *)(param_1 + 0x12) = 0x3c;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      local_14 = (*(byte *)(param_1 + 10) >> 4 & 1) * 0x3000 + *(int *)(param_1 + 0x4c) + -0x1800;
      local_10 = *(int *)(param_1 + 0x50) + -0x1700;
      sub_080857C0(&local_14,0x100);
      sub_08001EAC(0x85);
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080297C0(param_1);
  }
  return in_lr;
}

