// sub_080F6480 at 0x080F6480 (thumb)

undefined8 sub_080F6480(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = 1;
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    iVar2 = iVar2 + 0x10;
    if (0x300 < iVar2) {
      iVar2 = 0x300;
    }
    iVar3 = iVar3 + iVar2;
    if (param_1 <= iVar3) break;
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_lr,iVar1);
}

