// sub_080B22E4 at 0x080B22E4 (thumb)

undefined4 sub_080B22E4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000fe0 = DAT_02000fe0 | 0x4000;
    DAT_02000fec._1_1_ = 0x21;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 0x1e;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0x80) + 0x200;
    *(int *)(param_1 + 0x80) = iVar3;
    if (0x3fff < iVar3) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x80) + -0x200;
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
  bVar2 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x80) + 0x400;
    *(byte *)(param_1 + 0x7c) = bVar2;
    *(byte *)(param_1 + 0x7d) = bVar2;
    *(byte *)(param_1 + 0x7e) = bVar2;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x80);
    *(undefined *)(param_1 + 0x7c) = 0x10;
    *(undefined *)(param_1 + 0x7d) = 0x10;
    *(undefined *)(param_1 + 0x7e) = 0x10;
  }
  return in_lr;
}

