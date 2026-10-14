// sub_080134F8 at 0x080134F8 (thumb)

undefined4 sub_080134F8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((DAT_0202e924 & 1) == 0) {
    iVar1 = 0x144;
    uVar2 = 0xa5000;
  }
  else {
    DAT_0202ea54 = 0xf000;
    iVar1 = 0x148;
    uVar2 = 0x3c0000;
  }
  *(undefined4 *)((int)&DAT_0202e910 + iVar1) = uVar2;
  return in_lr;
}

