// sub_0802BC2C at 0x0802BC2C (thumb)

undefined4 sub_0802BC2C(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    sub_08017700(param_1,0x703);
    uVar1 = 1;
  }
  else {
    sub_08017700(param_1,0x704);
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0xf) = uVar1;
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(uint *)(param_1 + 0x54) = (*(uint *)(param_1 + 0x54) & 0xfffff000) + 0x800;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    sub_0802BC9C(param_1);
  }
  else {
    sub_0802BCDC(param_1);
  }
  return in_lr;
}

