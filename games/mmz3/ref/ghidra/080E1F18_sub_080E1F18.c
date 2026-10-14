// sub_080E1F18 at 0x080E1F18 (thumb)

undefined4 sub_080E1F18(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

