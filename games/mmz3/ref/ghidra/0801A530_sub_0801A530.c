// sub_0801A530 at 0x0801A530 (thumb)

undefined4 sub_0801A530(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    if (DAT_0202f5bc != 0) {
      DAT_02030108 = DAT_02030108 & 0xf7;
      sub_0800465C();
      DAT_0202f5bc = 0;
    }
    sub_08004768(0x25);
    sub_08004768(0x26);
    if ((((((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) && ((DAT_02030108 & 4) != 0)) &&
        (((*(char *)(iVar2 + 8) == '\x02' && (cVar1 = *(char *)(iVar2 + 9), cVar1 != '\0')) &&
         ((cVar1 != '\x04' && ((cVar1 != '\t' && (cVar1 != '\f')))))))) &&
       ((cVar1 != '\x0e' &&
        ((((cVar1 != '\x15' && (cVar1 != '\x17')) && (cVar1 != '\x18')) &&
         ((*(byte *)(iVar2 + 10) & 4) != 0)))))) {
      *(ushort *)(iVar2 + 0xa4) = (ushort)((int)(*(ushort *)(iVar2 + 0xa4) + 1) >> 1);
      DAT_02030108 = DAT_02030108 & 0xfb;
      DAT_02037114 = DAT_02037114 & 0xfb;
    }
  }
  return in_lr;
}

