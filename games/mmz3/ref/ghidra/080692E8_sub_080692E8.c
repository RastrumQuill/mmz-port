// sub_080692E8 at 0x080692E8 (thumb)

undefined4 sub_080692E8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528(param_1);
    sub_08017700(param_1,0x703);
    *(undefined *)(param_1 + 0x12) = 0x78;
    iVar3 = *(int *)(iVar5 + 0x54);
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x600;
    *(int *)(param_1 + 100) = *(int *)(DAT_0202f5c0 + 0x54) - iVar3;
    *(undefined *)(param_1 + 0x24) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if ((*(int *)(iVar5 + 0xb4) == 0) && (iVar3 = sub_08063614(iVar5), iVar3 == 0)) {
    iVar3 = *(int *)(iVar5 + 0x54);
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x600;
    iVar5 = (*(int *)(DAT_0202f5c0 + 0x54) - iVar3) - *(int *)(param_1 + 100);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar5 = *(int *)(param_1 + 100) + (iVar5 >> 4);
    *(int *)(param_1 + 100) = iVar5;
    bVar1 = *(byte *)(param_1 + 0xb8);
    iVar5 = iVar5 + (short)(&DAT_080fe64c)[bVar1] * 8;
    *(byte *)(param_1 + 0xb8) = bVar1 + 4;
    if (iVar5 < 1) {
      iVar3 = -0x1000;
      if ((-0x1000 < iVar5) || (iVar3 = -0x7800, iVar5 < -0x7800)) {
        iVar5 = iVar3;
      }
      cVar2 = FUN_080fe2f8((iVar5 + 0x1000) * 0x28,0xffff9800);
    }
    else {
      if (iVar5 < 0x1000) {
        iVar5 = 0x1000;
      }
      else if (0x7800 < iVar5) {
        iVar5 = 0x7800;
      }
      cVar2 = FUN_080fe2f8((iVar5 + -0x1000) * 0x28,0x6800);
      cVar2 = -cVar2;
    }
    *(char *)(param_1 + 0x24) = -0x80 - (cVar2 + '@');
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if ((cVar2 == '\0') && (uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), uVar4 < 0x1000)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

