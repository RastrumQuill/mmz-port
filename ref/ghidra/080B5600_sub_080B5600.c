// sub_080B5600 at 0x080B5600 (thumb)

undefined4 sub_080B5600(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080B3F2C(0,0);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
    sub_080B557C();
  }
  return in_lr;
}

