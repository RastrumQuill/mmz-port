// sub_080D4D4C at 0x080D4D4C (thumb)

undefined4 sub_080D4D4C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a50 = DAT_02000a50 | 0x4000;
    DAT_02000a5d = 0x31;
    DAT_02000a5e = DAT_02000a5e | 0xe;
    *(undefined4 *)(param_1 + 0x78) = 0x2000;
    *(undefined *)(param_1 + 0x74) = 0;
    *(undefined *)(param_1 + 0x75) = 0;
    *(undefined *)(param_1 + 0x76) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_02000760 & 1) == 0) {
    if ((DAT_02000760 & 2) == 0) goto LAB_080d4dbe;
    iVar2 = *(int *)(param_1 + 0x78);
    iVar4 = -0x100;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar4 = 0x100;
  }
  *(int *)(param_1 + 0x78) = iVar2 + iVar4;
LAB_080d4dbe:
  if ((DAT_02000760 & 0x300) == 0x300) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if ((DAT_02000760 & 0x100) == 0) {
    if ((DAT_02000760 & 0x200) != 0) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x10;
    }
  }
  else {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
  }
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if ((bVar1 & 1) == 0) {
    uVar3 = 0x18;
    *(undefined *)(param_1 + 0x74) = 0x18;
    *(undefined *)(param_1 + 0x75) = 0x1f;
  }
  else {
    uVar3 = 0x1f;
    *(undefined *)(param_1 + 0x74) = 0x1f;
    *(undefined *)(param_1 + 0x75) = 0x1f;
  }
  *(undefined *)(param_1 + 0x76) = uVar3;
  return in_lr;
}

