// sub_080B1F6C at 0x080B1F6C (thumb)

undefined4 sub_080B1F6C(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000fe0 = DAT_02000fe0 | 0x4000;
    DAT_02000fec._1_1_ = 0x31;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 0xe;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    piVar2 = (int *)(param_1 + 0x80);
    iVar3 = *piVar2;
    *piVar2 = iVar3 + 0x80;
    if (0x3fff < iVar3 + 0x80) {
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    if (*piVar2 == 0x1800) {
      sub_080032EC(0xef);
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 + 1;
    if (0x40 < bVar1) {
      *(undefined *)(param_1 + 0xf) = 2;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x80) + -0x180;
    *(int *)(param_1 + 0x80) = iVar3;
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080B251C(param_1);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x80) + 0x400;
    bVar1 = *(byte *)(param_1 + 0x13) >> 1;
    if ((byte)(bVar1 + 10) < 0x20) {
      *(byte *)(param_1 + 0x7c) = bVar1 + 10;
    }
    else {
      *(undefined *)(param_1 + 0x7c) = 0x1f;
    }
    *(undefined *)(param_1 + 0x7d) = 0x1f;
    if (bVar1 < 0x20) {
      *(byte *)(param_1 + 0x7e) = bVar1;
      return in_lr;
    }
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x80);
    *(undefined *)(param_1 + 0x7c) = 0x1f;
    *(undefined *)(param_1 + 0x7d) = 0x1f;
  }
  *(undefined *)(param_1 + 0x7e) = 0x1f;
  return in_lr;
}

