// sub_0803773C at 0x0803773C (thumb)

undefined4 sub_0803773C(int param_1)

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

