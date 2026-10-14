// sub_080B4570 at 0x080B4570 (thumb)

undefined4 sub_080B4570(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (cVar1 == -2) {
    sub_080AC60C(3,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar3 = sub_08008CFC();
    if (sVar3 == 0) {
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      if (iVar5 < 0x701) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x60) = 0x700;
      return in_lr;
    }
    sub_080AC60C(3,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar4 = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  sub_080B42EC(param_1);
  return in_lr;
}

