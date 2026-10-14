// sub_080D65B8 at 0x080D65B8 (thumb)

undefined8 sub_080D65B8(int param_1)

{
  int iVar1;
  int iVar3;
  undefined4 in_lr;
  int iVar2;
  
  iVar3 = 0;
  iVar2 = 2;
  do {
    iVar1 = iVar2 + -1;
    if (((int)(uint)*(byte *)(param_1 + 0x16 + (iVar2 + 7U >> 3)) >> (iVar2 + 7U & 7) & 1U) != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return CONCAT44(in_lr,iVar3);
}

