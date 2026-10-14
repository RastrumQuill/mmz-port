// sub_08033110 at 0x08033110 (thumb)

undefined4 sub_08033110(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0x100) = 0;
  DAT_0202dbe8 = 1;
  *(undefined *)(param_1 + 0xe) = *(undefined *)(param_1 + 0xf);
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

