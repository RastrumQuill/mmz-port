// sub_080386E0 at 0x080386E0 (thumb)

undefined8 sub_080386E0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x252) & 0x8000) == 0) {
    iVar2 = 0x200;
    cVar1 = sub_08038AE4(param_1);
    if (cVar1 != '\0') {
      iVar2 = 0x280;
    }
    if (*(byte *)(param_1 + 0x13e) == 0) {
      iVar2 = iVar2 >> *(sbyte *)(param_1 + 0x1ba);
    }
    else {
      iVar2 = ((int)((0x100 - (uint)*(byte *)(param_1 + 0x13e)) * iVar2) >> 8) >>
              *(sbyte *)(param_1 + 0x1ba);
    }
  }
  else {
    iVar2 = 0x200;
  }
  return CONCAT44(in_lr,iVar2);
}

