// sub_080D6640 at 0x080D6640 (thumb)

undefined8 sub_080D6640(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = 0x52;
  while( true ) {
    iVar5 = iVar2 + -1;
    iVar1 = iVar5;
    if (iVar5 < 0) {
      iVar1 = iVar2 + 6;
    }
    iVar1 = iVar1 >> 3;
    uVar4 = iVar5 + iVar1 * -8;
    if (((((int)(uint)*(byte *)(param_1 + iVar1) >> (uVar4 & 0xff) & 1U) == 0) ||
        (((int)(uint)*(byte *)(param_1 + 0xb + iVar1) >> (uVar4 & 0xff) & 1U) != 0)) ||
       (iVar2 = sub_080D5A48(param_1,iVar5), iVar2 * 0x1000000 < 1)) break;
    iVar2 = iVar5;
    if (iVar5 < 2) {
      uVar3 = 1;
LAB_080d668c:
      return CONCAT44(in_lr,uVar3);
    }
  }
  uVar3 = 0;
  goto LAB_080d668c;
}

