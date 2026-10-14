// sub_080AB7C0 at 0x080AB7C0 (thumb)

undefined4 sub_080AB7C0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  *(ushort *)(param_1 + 0xc2) = (ushort)*(byte *)(param_1 + 0x12) * 0x24;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

