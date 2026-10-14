// sub_08064B90 at 0x08064B90 (thumb)

undefined4 sub_08064B90(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\x02') && ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

