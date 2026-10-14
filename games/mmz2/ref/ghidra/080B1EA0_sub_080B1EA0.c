// sub_080B1EA0 at 0x080B1EA0 (thumb)

undefined4 sub_080B1EA0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000fe0 = DAT_02000fe0 | 0x4000;
    DAT_02000fec._1_1_ = 0x31;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 0xe;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if ((DAT_02000d10 & 1) == 0) {
    if ((DAT_02000d10 & 2) != 0) {
      iVar2 = *(int *)(param_1 + 0x5c) + -0x100;
      goto LAB_080b1ef6;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c) + 0x100;
LAB_080b1ef6:
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  if ((DAT_02000d10 & 0x300) == 0x300) {
    iVar2 = 0;
  }
  else if ((DAT_02000d10 & 0x100) == 0) {
    if ((DAT_02000d10 & 0x200) == 0) goto LAB_080b1f30;
    iVar2 = *(int *)(param_1 + 0x60) + -0x10;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60) + 0x10;
  }
  *(int *)(param_1 + 0x60) = iVar2;
LAB_080b1f30:
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if ((bVar1 & 1) == 0) {
    uVar3 = 0x18;
    *(undefined *)(param_1 + 0x7c) = 0x18;
    *(undefined *)(param_1 + 0x7d) = 0x1f;
  }
  else {
    uVar3 = 0x1f;
    *(undefined *)(param_1 + 0x7c) = 0x1f;
    *(undefined *)(param_1 + 0x7d) = 0x1f;
  }
  *(undefined *)(param_1 + 0x7e) = uVar3;
  return in_lr;
}

