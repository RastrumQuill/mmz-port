// sub_08061A6C at 0x08061A6C (thumb)

undefined4 sub_08061A6C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else if ((*(char *)(param_1 + 0xe) == '\x01') && ((DAT_020301b2 & 1) == 0)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

