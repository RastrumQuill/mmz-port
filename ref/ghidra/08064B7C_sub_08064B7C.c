// sub_08064B7C at 0x08064B7C (thumb)

undefined4 sub_08064B7C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022e98);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x29;
    *(undefined4 *)(iVar2 + 0x14) = 0x8064d6d;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022ef2;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022f59;
    *(undefined *)(iVar2 + 0x10) = 2;
    *(undefined *)(iVar2 + 0x11) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(int *)(iVar2 + 0x50) = *(int *)(param_1 + 0x50) + 0x800;
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

