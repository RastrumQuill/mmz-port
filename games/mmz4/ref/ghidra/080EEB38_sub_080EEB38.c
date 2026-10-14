// sub_080EEB38 at 0x080EEB38 (thumb)

undefined4 sub_080EEB38(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x700;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_0801CFF0(param_1);
  return in_lr;
}

