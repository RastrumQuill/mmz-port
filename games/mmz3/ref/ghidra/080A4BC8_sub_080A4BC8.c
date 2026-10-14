// sub_080A4BC8 at 0x080A4BC8 (thumb)

undefined4 sub_080A4BC8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0x2000;
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_08017700(param_1,0x4900);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0xb4) + 0x100;
  *(int *)(param_1 + 0xb4) = iVar1;
  if (0x3fff < iVar1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080A4A24(param_1);
  sub_080177F4(param_1);
  return in_lr;
}

