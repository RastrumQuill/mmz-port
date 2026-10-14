// sub_0803E4B8 at 0x0803E4B8 (thumb)

undefined4 sub_0803E4B8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202f4a5 = 1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

