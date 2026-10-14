// sub_08034B30 at 0x08034B30 (thumb)

undefined4 sub_08034B30(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0xf5);
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    if (*(char *)(param_1 + 0x13) == '\0') {
      sub_08017700(param_1,0xa118);
      sub_0803AD00(*(int *)(param_1 + 0x54) + -0x900,*(int *)(param_1 + 0x58) + -0x4c00);
    }
    else {
      sub_08017700(param_1,0xa119);
      sub_0803AD00(*(int *)(param_1 + 0x54) + 0x900,*(int *)(param_1 + 0x58) + -0x4c00);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x13) * '\x06' + '\b';
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) ^ 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

