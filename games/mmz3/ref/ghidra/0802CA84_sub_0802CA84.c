// sub_0802CA84 at 0x0802CA84 (thumb)

undefined4 sub_0802CA84(int param_1)

{
  undefined4 in_lr;
  
  sub_080177CC(param_1,0x404,1,3);
  *(undefined *)(param_1 + 0x120) = 0x3c;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0802CACC(param_1);
  return in_lr;
}

