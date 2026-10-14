// sub_0803058C at 0x0803058C (thumb)

undefined4 sub_0803058C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    iVar2 = *(int *)(param_1 + 0xb8) + 0x1800;
    *(int *)(param_1 + 0x4c) = iVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + 0x6000;
    *(int *)(param_1 + 0xe0) = iVar2;
    *(undefined *)(param_1 + 0x12) = 0x38;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x50) + -0x100;
    *(int *)(param_1 + 0x50) = iVar2;
    iVar3 = *(int *)(param_1 + 0xbc) + 0x2800;
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x50) = iVar3;
    }
    bVar1 = (byte)DAT_02022b6e;
    if ((DAT_02022b6e & 1) == 0) {
      sub_0800561C(param_1 + 0x74,&DAT_082ad358);
      *(undefined4 *)(param_1 + 0xb0) = 0x8031595;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 1;
      *(byte *)(param_1 + 0x12) = bVar1 & 1;
    }
  }
  return in_lr;
}

