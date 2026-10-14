// sub_08084674 at 0x08084674 (thumb)

undefined4 sub_08084674(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08364af0);
    sub_08017700(param_1,0x6601);
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x7800U < 0x6800) &&
       ((uint)(*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) < 0x7000)) {
      *(undefined *)(param_1 + 0xd) = 5;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else if (((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) - 0x1000U < 0x6800) &&
          ((uint)(*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) < 0x7000)) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

