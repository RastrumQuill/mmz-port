// sub_080E1344 at 0x080E1344 (thumb)

undefined8 sub_080E1344(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    if ((*(byte *)(DAT_0203063c + uVar2) & 1) == 0) {
      uVar1 = 0;
      goto LAB_080e1370;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x4a);
  uVar1 = 1;
LAB_080e1370:
  return CONCAT44(in_lr,uVar1);
}

