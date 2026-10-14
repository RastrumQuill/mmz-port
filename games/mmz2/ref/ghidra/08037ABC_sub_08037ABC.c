// sub_08037ABC at 0x08037ABC (thumb)

undefined8 sub_08037ABC(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_080312EC(param_1 + 0x1fc);
  if (iVar1 < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
    if (1 < iVar1) {
      pbVar2 = &DAT_083359a4;
      do {
        iVar1 = iVar1 - (uint)*pbVar2;
        pbVar2 = pbVar2 + 1;
        iVar3 = iVar3 + 1;
      } while ((int)(uint)*pbVar2 <= iVar1);
    }
  }
  return CONCAT44(in_lr,iVar3);
}

