// sub_080B0880 at 0x080B0880 (thumb)

undefined4 sub_080B0880(int param_1)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0xb4) != '\0';
  if (bVar1) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -0xa00;
  }
  else {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 0xa00;
  }
  *(char *)(param_1 + 0xb4) = !bVar1;
  *(undefined *)(param_1 + 0x13) = 0xff;
  return in_lr;
}

