// sub_08064C00 at 0x08064C00 (thumb)

undefined4 sub_08064C00(int param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08005428(DAT_02022e98);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x29;
    *(undefined4 *)(iVar2 + 0x14) = 0x8064d6d;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022ef2;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022f59;
    *(undefined *)(iVar2 + 0x10) = 3;
    *(char *)(iVar2 + 0x11) = param_2;
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    if (param_2 == '\x02') {
      iVar3 = *(int *)(param_1 + 0x50);
      iVar4 = 0x1000;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x50);
      iVar4 = 0x2000;
    }
    *(int *)(iVar2 + 0x50) = iVar3 + iVar4;
    *(int *)(iVar2 + 0x20) = param_1;
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    *(byte *)(iVar2 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 10) = bVar1;
  }
  return in_lr;
}

