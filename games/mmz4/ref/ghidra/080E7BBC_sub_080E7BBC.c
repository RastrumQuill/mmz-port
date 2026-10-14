// sub_080E7BBC at 0x080E7BBC (thumb)

/* WARNING: Removing unreachable block (ram,0x080e7c1a) */
/* WARNING: Removing unreachable block (ram,0x080e7c32) */

undefined4 sub_080E7BBC(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -0x18;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + '\x18';
  }
  *(char *)(param_1 + 0x12) = cVar1;
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  pcVar4 = (char *)(param_1 + 0x7c);
  if (sVar2 != 0) {
    if (*pcVar4 == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xd9;
      *(undefined4 *)(param_1 + 0x60) = 0x364;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc9c;
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffff27;
      }
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar3 >> 8;
      }
      *pcVar4 = '\x01';
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  if (*pcVar4 == '\x01') {
    pcVar4 = (char *)(param_1 + 0x7d);
    if (*pcVar4 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *pcVar4 = '\x01';
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *pcVar4 = '\0';
    }
  }
  return in_lr;
}

