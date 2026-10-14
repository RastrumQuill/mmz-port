// sub_080A98E0 at 0x080A98E0 (thumb)

undefined4 sub_080A98E0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb7) != '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      if (*(char *)(param_1 + 0xb7) == '\x01') {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    if ((*(char *)(param_1 + 0x10) == '\x01') &&
       (*(undefined *)(param_1 + 0xd) = 0, *(char *)(param_1 + 0xb7) == '\x02')) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

