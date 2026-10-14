// sub_08063ED0 at 0x08063ED0 (thumb)

undefined4 sub_08063ED0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\b') && ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001)) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

