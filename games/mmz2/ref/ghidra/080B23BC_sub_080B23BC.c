// sub_080B23BC at 0x080B23BC (thumb)

undefined4 sub_080B23BC(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
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
  uVar5 = (*(undefined4 **)(param_1 + 0x28))[1];
  *(undefined4 *)(param_1 + 0x54) = **(undefined4 **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    piVar4 = (int *)(param_1 + 0x80);
    iVar6 = *piVar4;
    *piVar4 = iVar6 + 0x100;
    if (0x3fff < iVar6 + 0x100) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x13) = 0;
    }
    if (*piVar4 == 0x1800) {
      sub_080032EC(0xef);
    }
  }
  else if (cVar1 == '\x01') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x02';
    *(int *)(param_1 + 0x80) = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] * 8 + 0x4000;
  }
  else if (cVar1 == '\x02') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x02';
    *(int *)(param_1 + 0x80) = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] * 8 + 0x4000;
    if ((*(byte *)(param_1 + 0x13) & 0x7f) == 0) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x80) + -0x100;
    *(int *)(param_1 + 0x80) = iVar6;
    if (iVar6 < 1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080B251C(param_1);
    }
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  bVar3 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x80) + 0x400;
    *(byte *)(param_1 + 0x7c) = bVar3;
    *(byte *)(param_1 + 0x7d) = bVar3;
    *(byte *)(param_1 + 0x7e) = bVar3;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x80);
    *(undefined *)(param_1 + 0x7c) = 0;
    *(undefined *)(param_1 + 0x7d) = 0;
    *(undefined *)(param_1 + 0x7e) = 0;
  }
  return in_lr;
}

