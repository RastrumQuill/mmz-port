// sub_08019C64 at 0x08019C64 (thumb)

longlong sub_08019C64(int param_1)

{
  char cVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832dfb0);
      sub_08014D0C(1);
    }
    else {
      if (DAT_0202ec32 != 1) goto LAB_08019d18;
      sub_0801B454(&DAT_0202ec40,&DAT_0832d948);
    }
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  else if (cVar1 == '\x01') {
    if (0x157fff < *(int *)(iVar2 + 0x54)) {
      DAT_030032e1 = DAT_030032e1 | 2;
      if (DAT_0202ed98 != 0xffffffff) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
    }
    if (0x159fff < *(int *)(iVar2 + 0x54)) {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_0832e028);
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
    }
  }
LAB_08019d18:
  return (ulonglong)in_lr << 0x20;
}

