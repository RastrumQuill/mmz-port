// sub_08018294 at 0x08018294 (thumb)

undefined4 sub_08018294(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((DAT_0202e924 & 1) == 0) {
    iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar3 < 0x4b000) {
      if (*(int *)(DAT_0202dbf0 + 0x58) < 0x28000) {
        puVar2 = &DAT_0202ea54;
        uVar1 = 0x1e000;
      }
      else {
        puVar2 = &DAT_0202ea54;
        uVar1 = 0xf000;
      }
    }
    else if (iVar3 < 0x61000) {
      puVar2 = &DAT_0202ea58;
      uVar1 = 0x5a000;
    }
    else if ((iVar3 < 0x78000) && (0x32000 < *(int *)(DAT_0202dbf0 + 0x58))) {
      puVar2 = &DAT_0202ea58;
      uVar1 = 0x78000;
    }
    else if (*(int *)(DAT_0202dbf0 + 0x54) < 0x177000) {
      puVar2 = &DAT_0202ea54;
      uVar1 = 0x159000;
    }
    else if ((*(int *)(DAT_0202dbf0 + 0x54) < 0x1fe000) && (0x28000 < *(int *)(DAT_0202dbf0 + 0x58))
            ) {
      puVar2 = &DAT_0202ea58;
      uVar1 = 0x1fe000;
    }
    else {
      if (0x21bfff < *(int *)(DAT_0202dbf0 + 0x54)) {
        return in_lr;
      }
      if (0x27fff < *(int *)(DAT_0202dbf0 + 0x58)) {
        return in_lr;
      }
      puVar2 = &DAT_0202ea58;
      uVar1 = 0x20d000;
    }
  }
  else {
    DAT_0202ea54 = 0xf000;
    puVar2 = &DAT_0202ea58;
    uVar1 = 0x3c0000;
  }
  *puVar2 = uVar1;
  return in_lr;
}

