// sub_080D3DD0 at 0x080D3DD0 (thumb)

undefined8 sub_080D3DD0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) ||
     ((DAT_0202ebb5 & 0x80) == 0)) {
    iVar1 = 0x28a;
  }
  else {
    iVar1 = 0x28b;
  }
  return CONCAT44(in_lr,((*(byte *)(param_1 + 0x10) - 0x12) * 0x2000000 >> 0x18) + iVar1);
}

