// sub_0803864C at 0x0803864C (thumb)

undefined8 sub_0803864C(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0x180;
  if (((*(uint *)(param_1 + 600) & 0x80) == 0) &&
     ((cVar2 = sub_08038B18(param_1), cVar2 != '\0' || (*(char *)(param_1 + 0xc6) == '\x19')))) {
    iVar5 = 0xc0;
  }
  uVar1 = *(ushort *)(&DAT_0884fe36 + (uint)*(byte *)(param_1 + 0x174) * 8);
  iVar4 = *(int *)(param_1 + 0x58);
  iVar3 = DAT_0202cabc;
  if ((DAT_02000c80 & 0x7f) == 2) {
    iVar3 = sub_08007B84(param_1 + 0x54);
  }
  if (iVar3 < iVar4 - ((int)((uint)uVar1 << 0x10) >> 0x11)) {
    if (iVar5 == 0xc0) {
      iVar5 = 0x60;
    }
    else {
      iVar5 = 0xc0;
    }
  }
  return CONCAT44(in_lr,iVar5);
}

