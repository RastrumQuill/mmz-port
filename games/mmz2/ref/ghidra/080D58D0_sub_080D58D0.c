// sub_080D58D0 at 0x080D58D0 (thumb)

undefined8 sub_080D58D0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 in_lr;
  
  uVar1 = param_1 - 1;
  if (uVar1 < 0x51) {
    cVar4 = '\0';
    if (0x1a < uVar1) {
      pbVar3 = &DAT_0834a5ad;
      cVar4 = '\0';
      do {
        uVar1 = uVar1 - *pbVar3;
        pbVar3 = pbVar3 + 2;
        cVar4 = cVar4 + '\x01';
      } while (*pbVar3 <= uVar1);
    }
    iVar2 = (int)cVar4;
  }
  else {
    iVar2 = -1;
  }
  return CONCAT44(in_lr,iVar2);
}

