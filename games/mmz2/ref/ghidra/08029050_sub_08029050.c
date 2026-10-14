// sub_08029050 at 0x08029050 (thumb)

undefined4 sub_08029050(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    DAT_0202e14c = 1;
  }
  return in_lr;
}

