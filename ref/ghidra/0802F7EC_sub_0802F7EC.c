// sub_0802F7EC at 0x0802F7EC (thumb)

undefined4 sub_0802F7EC(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,0x13);
    *(undefined *)(param_1 + 0x12) = 0x20;
    uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_14 = uVar2 * 0x2800 + *(int *)(param_1 + 0x4c) + -0x1400;
    local_10 = *(int *)(param_1 + 0x50) + -0x2400;
    sub_08001EAC(0x88);
    sub_0807872C(param_1,&local_14,uVar2);
    *(undefined *)(param_1 + 0xc3) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

