// sub_080F35F8 at 0x080F35F8 (thumb)

undefined8 sub_080F35F8(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (DAT_0202f61a == 0) {
    DAT_0202f61a = 0x8000;
  }
  if ((DAT_02000766 & 0x80) != 0) {
    sub_08002B10(1);
    DAT_0202f61a = DAT_0202f61a + 1 & 1 | 0x8000;
  }
  if ((DAT_02000766 & 0x40) != 0) {
    sub_08002B10(1);
    DAT_0202f61a = DAT_0202f61a + 1 & 1 | 0x8000;
  }
  if ((DAT_02000764 & 2) == 0) {
    if ((DAT_02000764 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      sub_08002B10(2);
      if ((char)DAT_0202f61a == '\0') {
        uVar1 = 1;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    sub_08002B10(3);
    uVar1 = 0xfffffffe;
  }
  return CONCAT44(in_lr,uVar1);
}

