// sub_08019F60 at 0x08019F60 (thumb)

undefined4 sub_08019F60(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0x168;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

