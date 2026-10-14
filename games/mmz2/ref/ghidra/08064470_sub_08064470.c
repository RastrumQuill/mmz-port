// sub_08064470 at 0x08064470 (thumb)

undefined4 sub_08064470(int param_1)

{
  undefined4 in_lr;
  
  if (((4 < (byte)(*(char *)(param_1 + 0xd) - 0x17U)) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
     ((*(uint *)(param_1 + 0x8c) & 0x8000) != 0)) {
    *(undefined *)(param_1 + 0xd) = 0x1f;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

