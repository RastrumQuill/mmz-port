// sub_080600A8 at 0x080600A8 (thumb)

undefined4 sub_080600A8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0806093C();
  if (iVar1 * 0x1000000 < 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

