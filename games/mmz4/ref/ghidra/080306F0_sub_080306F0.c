// sub_080306F0 at 0x080306F0 (thumb)

undefined4 sub_080306F0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) == '\0') || ((*(uint *)(param_1 + 600) & 1) == 0)) {
    if (*(char *)(param_1 + 0x1ce) == '\0') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x1cc) != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
      *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xfd;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 4;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(undefined *)(param_1 + 0xe) = 2;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

