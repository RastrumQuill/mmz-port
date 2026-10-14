// sub_0803300C at 0x0803300C (thumb)

undefined4 sub_0803300C(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x4c00);
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0x100) = 0;
  DAT_0202dbf8 = 1;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08033050(param_1);
  return in_lr;
}

