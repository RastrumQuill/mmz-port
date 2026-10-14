// sub_08032C04 at 0x08032C04 (thumb)

undefined8 sub_08032C04(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0x180;
  if ((*(uint *)(param_1 + 0x218) & 0x80) == 0) {
    if ((byte)(*(char *)(param_1 + 0xc5) - 6U) < 2) {
      cVar1 = sub_08032EEC(param_1,0x1e);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0xc4) == '\x01')) {
        iVar2 = 0;
        goto LAB_08032c96;
      }
    }
    else {
      cVar1 = sub_08032EEC(param_1,0x1e);
      if (cVar1 == '\0') goto LAB_08032c54;
    }
    iVar2 = 0xc0;
  }
LAB_08032c54:
  if (DAT_0202e48c <
      *(int *)(param_1 + 0x58) -
      ((int)((uint)*(ushort *)(&DAT_0835b03a + (uint)*(byte *)(param_1 + 0x147) * 8) << 0x10) >>
      0x11)) {
    if (iVar2 == 0xc0) {
      iVar2 = 0x60;
    }
    else {
      iVar2 = 0xc0;
    }
  }
LAB_08032c96:
  return CONCAT44(in_lr,iVar2);
}

