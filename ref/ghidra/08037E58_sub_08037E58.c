// sub_08037E58 at 0x08037E58 (thumb)

undefined4 sub_08037E58(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08038BFC();
  if (iVar1 * 0x1000000 < 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

