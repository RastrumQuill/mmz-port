// sub_08032C9C at 0x08032C9C (thumb)

undefined8 sub_08032C9C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x216) & 0x8000) == 0) {
    iVar2 = 0x200;
    if (((*(char *)(param_1 + 0xc5) == '\x04') || (*(char *)(param_1 + 0xc5) == '\a')) ||
       (cVar1 = sub_08032EEC(param_1,0x1c), cVar1 != '\0')) {
      iVar2 = 0x280;
    }
    if (*(byte *)(param_1 + 0x11d) == 0) {
      iVar2 = iVar2 >> *(sbyte *)(param_1 + 0x18e);
    }
    else {
      iVar2 = ((int)((0x100 - (uint)*(byte *)(param_1 + 0x11d)) * iVar2) >> 8) >>
              *(sbyte *)(param_1 + 0x18e);
    }
  }
  else {
    iVar2 = 0x200;
  }
  return CONCAT44(in_lr,iVar2);
}

