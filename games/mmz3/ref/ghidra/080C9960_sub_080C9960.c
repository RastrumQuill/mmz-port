// sub_080C9960 at 0x080C9960 (thumb)

undefined4 sub_080C9960(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
     ((*(int *)(param_1 + 0x58) + -0xf00 <= DAT_0202e48c ||
      ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x20)))) {
    iVar1 = sub_080253D8(0,param_1,&DAT_0836c448);
    *(int *)(param_1 + 0xb4) = iVar1;
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

