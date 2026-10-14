// sub_0809F078 at 0x0809F078 (thumb)

undefined4 sub_0809F078(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885e208);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

