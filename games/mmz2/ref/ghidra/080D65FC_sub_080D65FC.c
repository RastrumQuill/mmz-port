// sub_080D65FC at 0x080D65FC (thumb)

undefined8 sub_080D65FC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  int iVar4;
  
  iVar4 = 0x52;
  while( true ) {
    iVar3 = iVar4 + -1;
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar4 + 6;
    }
    if (((int)(uint)*(byte *)(param_1 + (iVar1 >> 3)) >> (iVar3 + (iVar1 >> 3) * -8 & 0xffU) & 1U)
        == 0) break;
    iVar4 = iVar3;
    if (iVar3 < 2) {
      uVar2 = 1;
LAB_080d662a:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 0;
  goto LAB_080d662a;
}

