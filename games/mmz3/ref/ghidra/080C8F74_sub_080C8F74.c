// sub_080C8F74 at 0x080C8F74 (thumb)

undefined4 sub_080C8F74(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(uint *)(param_1 + 100) = (uint)*(byte *)(param_1 + 0x13) << 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  return in_lr;
}

