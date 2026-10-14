// sub_08049A34 at 0x08049A34 (thumb)

undefined4 sub_08049A34(int param_1)

{
  bool bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xbd) = 0;
    bVar1 = *(int *)(param_1 + 0x54) <= *(int *)(DAT_0202f5c0 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (!bVar1) goto LAB_08049aa0;
    }
    else if (bVar1) goto LAB_08049aa0;
    sub_08007390(param_1 + 0x74,&DAT_0835f004);
    *(undefined *)(param_1 + 0xbd) = 1;
    sub_08017700(param_1,0xa707);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
LAB_08049aa0:
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

