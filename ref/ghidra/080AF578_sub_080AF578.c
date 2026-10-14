// sub_080AF578 at 0x080AF578 (thumb)

undefined4 sub_080AF578(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if ((((DAT_02022b60 == 0x10) &&
       ((bVar1 = *(byte *)(iVar2 + 0x10), bVar1 != 1 || ((DAT_02022ade & 0x40) == 0)))) &&
      ((bVar1 != 2 || ((DAT_02022ade & 0x80) == 0)))) && (*(char *)(iVar3 + 8) == '\0')) {
    if ((bVar1 & 2) == 0) {
      if (*(int *)(iVar2 + 0x50) < *(int *)(iVar3 + 0x50)) {
        return in_lr;
      }
      if (0x800 < *(int *)(iVar2 + 0x50) - *(int *)(iVar3 + 0x50)) {
        return in_lr;
      }
    }
    if (*(int *)(iVar3 + 0x4c) < *(int *)(iVar2 + 0x4c)) {
      *(undefined *)(iVar2 + 0xd) = 1;
      *(undefined *)(iVar2 + 0xe) = 0;
    }
    else {
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined *)(iVar2 + 0xd) = 2;
      *(undefined *)(iVar2 + 0xe) = 0;
    }
    sub_0801D59C(iVar3);
    DAT_02022b70 = DAT_02022b70 | 1;
    *(int *)(iVar2 + 0xbc) = iVar3;
  }
  return in_lr;
}

