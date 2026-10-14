// sub_080362BC at 0x080362BC (thumb)

undefined4 sub_080362BC(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xf);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  iVar4 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar4;
  if (*(int *)(param_1 + 0x4c) < iVar4) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x58) + 0x60;
  *(int *)(param_1 + 0x58) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\x0e') {
    if (*(char *)(param_1 + 0x13) == '\x01') {
      iVar4 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
      iVar6 = *(int *)(param_1 + 0x50);
      iVar5 = -0x2000;
    }
    else {
      iVar4 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
      iVar6 = *(int *)(param_1 + 0x50);
      iVar5 = 0x3000;
    }
    uVar3 = sub_080C88E8(iVar4 * 0x1000 >> 0x10,
                         (*(int *)(DAT_0202286c + 0x50) - (iVar6 + iVar5)) * 0x1000 >> 0x10);
    sub_08001EAC(0xb2);
    sub_0807BBA4(param_1,(int)((uVar3 & 0xffff) + 0x4000) >> 8 & 0xff);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

