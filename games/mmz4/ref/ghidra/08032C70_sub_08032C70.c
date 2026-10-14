// sub_08032C70 at 0x08032C70 (thumb)

undefined4 sub_08032C70(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CFC8(param_1,0x404,1,3);
  *(undefined *)(param_1 + 0x13f) = 0x3c;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08032CBC(param_1);
  return in_lr;
}

