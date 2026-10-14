// sub_080B99E8 at 0x080B99E8 (thumb)

undefined4 sub_080B99E8(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0xb4) != '\0';
  if (bVar2) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -0x2c00;
  }
  else {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 0x2c00;
  }
  *(char *)(param_1 + 0xb4) = !bVar2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar1 = 0xfe;
  }
  else {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  return in_lr;
}

