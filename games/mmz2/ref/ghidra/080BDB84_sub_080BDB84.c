// sub_080BDB84 at 0x080BDB84 (thumb)

undefined4 sub_080BDB84(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x9b00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    iVar2 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(int *)(param_1 + 100) = iVar2 >> 2;
    iVar2 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  else {
    sVar1 = sub_080EF150((int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff],6);
    *(int *)(param_1 + 100) = (int)sVar1;
    sVar1 = sub_080EF150((int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)],6);
    iVar2 = (int)sVar1;
  }
  *(int *)(param_1 + 0x68) = iVar2;
  *(undefined *)(param_1 + 0x12) = 8;
  iVar2 = 0x17;
  do {
    iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BDB54(param_1);
  return in_lr;
}

