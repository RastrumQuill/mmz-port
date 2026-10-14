// sub_080D34FC at 0x080D34FC (thumb)

undefined8 sub_080D34FC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((DAT_0202ebb5 & 0x40) == 0) || ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0)) {
    iVar1 = 0x25a;
  }
  else if ((DAT_0202ebb5 & 0x80) == 0) {
    iVar1 = 0x25b;
  }
  else {
    iVar1 = 0x25c;
  }
  return CONCAT44(in_lr,((*(byte *)(param_1 + 0x10) - 6) * 0x3000000 >> 0x18) + iVar1);
}

