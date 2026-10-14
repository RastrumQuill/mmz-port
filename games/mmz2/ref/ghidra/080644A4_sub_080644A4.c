// sub_080644A4 at 0x080644A4 (thumb)

undefined4 sub_080644A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0xf) < 3) && ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

