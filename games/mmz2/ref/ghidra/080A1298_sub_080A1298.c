// sub_080A1298 at 0x080A1298 (thumb)

undefined4 sub_080A1298(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) == '\x01') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

