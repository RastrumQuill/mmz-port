// sub_080C3D30 at 0x080C3D30 (thumb)

undefined4 sub_080C3D30(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x138);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb4) == '\0') goto LAB_080c3d86;
  piVar4 = (int *)(param_1 + 0xb8);
  if (*piVar4 == 0) {
    iVar3 = sub_080C3B20(param_1);
    *piVar4 = iVar3;
    if (iVar3 != 0) goto LAB_080c3d78;
  }
  else {
LAB_080c3d78:
    if (*(char *)(*piVar4 + 0xd) != '\x01') goto LAB_080c3d86;
    iVar3 = 0;
    *piVar4 = 0;
  }
  *(char *)(param_1 + 0xb4) = (char)iVar3;
LAB_080c3d86:
  sub_0801CFF0(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    iVar3 = -0x2c00;
  }
  else {
    iVar3 = 0x2c00;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + 0x2c00;
  if ((*(char *)(param_1 + 0xb5) != '\0') && (*(int *)(param_1 + 0xb8) == 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

