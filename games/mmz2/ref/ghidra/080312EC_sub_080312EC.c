// sub_080312EC at 0x080312EC (thumb)

undefined8 sub_080312EC(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = sub_0803126C();
  if ((uVar1 & 0xff) < param_2) {
    iVar2 = -1;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (*(byte *)(param_1 + 8) < param_2) {
      do {
        param_2 = param_2 - *(byte *)(param_1 + 8 + iVar2);
        iVar3 = iVar3 + (uint)(byte)(&DAT_083359a4)[iVar2];
        iVar2 = iVar2 + 1;
      } while (*(byte *)(param_1 + 8 + iVar2) < param_2);
    }
    iVar2 = iVar3 + -1 + param_2;
  }
  return CONCAT44(in_lr,iVar2);
}

