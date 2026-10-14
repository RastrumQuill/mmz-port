// sub_080B4660 at 0x080B4660 (thumb)

int sub_080B4660(uint param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  
  uVar1 = (param_1 & 0xff) - 1;
  if (uVar1 < 0x4e) {
    uVar1 = uVar1 & 0xff;
    cVar4 = '\0';
    if (0x1a < uVar1) {
      pbVar3 = &DAT_082b7259;
      cVar4 = '\0';
      do {
        uVar1 = uVar1 - *pbVar3 & 0xff;
        pbVar3 = pbVar3 + 2;
        cVar4 = cVar4 + '\x01';
      } while (*pbVar3 <= uVar1);
    }
    iVar2 = (int)cVar4;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

