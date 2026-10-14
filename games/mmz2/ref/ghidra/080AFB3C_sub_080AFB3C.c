// sub_080AFB3C at 0x080AFB3C (thumb)

undefined4 sub_080AFB3C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(iVar3 + 0xc) & 0xffff00) == 0x20700) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  }
  else {
    iVar5 = *(int *)(iVar3 + 0x54);
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)(bVar1 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    if ((bVar1 & 1) == 0) {
      iVar3 = *(int *)(param_1 + 0x5c);
    }
    else {
      iVar3 = -*(int *)(param_1 + 0x5c);
    }
    iVar5 = iVar5 + iVar3;
    if (iVar5 == *(int *)(param_1 + 0x54)) {
      cVar4 = '\x14';
    }
    else {
      *(int *)(param_1 + 0x54) = iVar5;
      cVar4 = '\x15';
    }
    if (cVar4 != *(char *)(param_1 + 0x12)) {
      sub_080127E4(param_1,cVar4);
      *(char *)(param_1 + 0x12) = cVar4;
    }
  }
  return in_lr;
}

