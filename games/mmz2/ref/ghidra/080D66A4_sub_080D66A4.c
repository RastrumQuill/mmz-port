// sub_080D66A4 at 0x080D66A4 (thumb)

undefined8 sub_080D66A4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = 0x52;
  while( true ) {
    iVar4 = iVar2 + -1;
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = iVar2 + 6;
    }
    if ((((int)(uint)*(byte *)(param_1 + (iVar1 >> 3)) >> (iVar4 + (iVar1 >> 3) * -8 & 0xffU) & 1U)
         == 0) || (iVar2 = sub_080D5A48(param_1,iVar4), iVar2 * 0x1000000 < 1)) break;
    iVar2 = iVar4;
    if (iVar4 < 2) {
      uVar3 = 1;
LAB_080d66e0:
      return CONCAT44(in_lr,uVar3);
    }
  }
  uVar3 = 0;
  goto LAB_080d66e0;
}

