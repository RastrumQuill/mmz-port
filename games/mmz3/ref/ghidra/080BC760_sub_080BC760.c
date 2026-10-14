// sub_080BC760 at 0x080BC760 (thumb)

undefined4 sub_080BC760(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_080bc79a:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x13) != '\0') {
      sub_080041E4(0x19);
    }
    sub_080177F4(param_1);
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x25) = 0x1a;
    *(undefined *)(param_1 + 0x12) = 0x12;
    sub_08017700(param_1,0x330b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080bc79a;
  }
  if (bVar1 == 2) {
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (bVar1 != 3) {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 9) {
    cVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),3);
    if (cVar3 == '\0') {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080bc812;
    }
  }
  else if ((bVar1 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080bc812;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080bc812:
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if ((byte)(bVar1 - 1) == '\0') {
    pcVar4 = (char *)(iVar5 + 0xcf);
    *pcVar4 = *pcVar4 + -1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  return in_lr;
}

