// sub_0800BBD4 at 0x0800BBD4 (thumb)

undefined4 sub_0800BBD4(void)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = DAT_0202ebb4 & 0x10;
  if ((DAT_0202ebb4 & 0x10) != 0) {
    sub_080084C0(&DAT_08316ec0,&DAT_08316c3c);
    bVar1 = 1;
  }
  DAT_0202e020 = bVar1;
  DAT_0202e021 = 0;
  return in_lr;
}

