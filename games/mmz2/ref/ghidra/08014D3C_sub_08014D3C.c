// sub_08014D3C at 0x08014D3C (thumb)

undefined4 sub_08014D3C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    if (DAT_0202e12c != 0) {
      DAT_0202ebbb = DAT_0202ebbb & 0xfb;
      sub_0800322C();
      DAT_0202e12c = 0;
    }
    sub_08003338(0x25);
    sub_08003338(0x26);
    if ((((((DAT_0202ebbb & 2) != 0) && (*(char *)(iVar2 + 8) == '\x02')) &&
         (cVar1 = *(char *)(iVar2 + 9), cVar1 != '\x02')) &&
        (((cVar1 != '\x12' && (cVar1 != '\x14')) &&
         ((cVar1 != '\x18' && ((cVar1 != '\t' || (*(char *)(iVar2 + 0x11) != '\0')))))))) &&
       (((cVar1 != '\x15' || (*(char *)(iVar2 + 0x11) != '\0')) &&
        (((cVar1 != '\x16' || (*(char *)(iVar2 + 0x11) != '\0')) &&
         ((*(byte *)(iVar2 + 10) & 4) != 0)))))) {
      *(ushort *)(iVar2 + 0xa4) = (ushort)((int)(*(ushort *)(iVar2 + 0xa4) + 1) >> 1);
      DAT_0202ebbb = DAT_0202ebbb & 0xfd;
      DAT_02036b4b = DAT_02036b4b & 0xfd;
    }
  }
  return in_lr;
}

