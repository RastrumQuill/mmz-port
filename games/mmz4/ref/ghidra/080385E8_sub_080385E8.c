// sub_080385E8 at 0x080385E8 (thumb)

undefined8 sub_080385E8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x58) -
          ((int)((uint)*(ushort *)(&DAT_0884fe36 + (uint)*(byte *)(param_1 + 0x174) * 8) << 0x10) >>
          0x11);
  if ((DAT_02000c80 & 0x7f) == 2) {
    iVar1 = sub_08007B84(param_1 + 0x54);
    if (iVar1 < iVar3) {
LAB_08038636:
      uVar2 = 0x380;
      goto LAB_08038644;
    }
  }
  else if (DAT_0202cabc < iVar3) goto LAB_08038636;
  uVar2 = 0x700;
LAB_08038644:
  return CONCAT44(in_lr,uVar2);
}

