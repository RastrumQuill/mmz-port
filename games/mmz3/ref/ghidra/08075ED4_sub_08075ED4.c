// sub_08075ED4 at 0x08075ED4 (thumb)

undefined4 sub_08075ED4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

