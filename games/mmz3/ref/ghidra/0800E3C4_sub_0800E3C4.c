// sub_0800E3C4 at 0x0800E3C4 (thumb)

undefined4 sub_0800E3C4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0xc30;
    *(undefined4 *)(param_1 + 0x50) = 0xa0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

