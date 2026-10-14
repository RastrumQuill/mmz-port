// sub_080D3C8C at 0x080D3C8C (thumb)

undefined8 sub_080D3C8C(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    uVar1 = 0x287;
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    uVar1 = 0x288;
  }
  else {
    uVar1 = 0x289;
  }
  return CONCAT44(in_lr,uVar1);
}

