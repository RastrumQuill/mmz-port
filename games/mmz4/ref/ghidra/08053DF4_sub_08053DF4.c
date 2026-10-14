// sub_08053DF4 at 0x08053DF4 (thumb)

undefined4 sub_08053DF4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x2c00);
    *(undefined4 *)(param_1 + 0x60) = 0x800;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8) + -0x8400;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x68) <= iVar1) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

