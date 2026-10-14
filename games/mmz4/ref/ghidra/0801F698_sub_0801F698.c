// sub_0801F698 at 0x0801F698 (thumb)

undefined4 sub_0801F698(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    if (DAT_0202dbec != 0) {
      DAT_0202e8b8 = DAT_0202e8b8 & 0x7f;
      sub_08002A50();
      DAT_0202dbec = 0;
    }
    if ((((((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) && ((DAT_0202e8b8 & 0x40) != 0))
        && (((*(char *)(iVar2 + 8) == '\x02' && (cVar1 = *(char *)(iVar2 + 9), cVar1 != '\0')) &&
            ((cVar1 != '\x04' && ((cVar1 != '\t' && (cVar1 != '\f')))))))) &&
       ((cVar1 != '\x0e' &&
        ((((cVar1 != '\x15' && (cVar1 != '\x17')) && (cVar1 != '\x18')) &&
         ((*(byte *)(iVar2 + 10) & 4) != 0)))))) {
      *(ushort *)(iVar2 + 0xa4) = (ushort)((int)(*(ushort *)(iVar2 + 0xa4) + 1) >> 1);
      DAT_0202e8b8 = DAT_0202e8b8 & 0xbf;
      DAT_02035884 = DAT_02035884 & 0xbf;
    }
  }
  return in_lr;
}

