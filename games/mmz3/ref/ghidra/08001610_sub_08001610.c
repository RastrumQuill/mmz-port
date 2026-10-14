// sub_08001610 at 0x08001610 (thumb)

undefined4 sub_08001610(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 2;
  iVar1 = FUN_080007b4();
  if (iVar1 == 2) {
    iVar1 = sub_080016DC(0);
    if (iVar1 == 0xff) {
      return 2;
    }
    iVar1 = 0xc;
    iVar5 = 0;
    uVar3 = 0;
    do {
      iVar2 = sub_080030E8(iVar5);
      (&DAT_02001740)[iVar1] = (char)iVar2;
      if (iVar2 == 2) {
        if ((iVar5 == 1) || (iVar5 == 2)) {
          uVar3 = uVar3 + 1;
          uVar4 = 0;
        }
      }
      else if ((iVar2 == 1) && ((iVar5 == 0 || (iVar5 == 3)))) {
        uVar3 = uVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    if (uVar3 == (DAT_02001018 & 0x1c) >> 2) {
      return uVar4;
    }
  }
  else if (iVar1 != 4) {
    return 2;
  }
  return 1;
}

