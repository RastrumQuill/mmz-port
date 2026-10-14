// sub_080E48D8 at 0x080E48D8 (thumb)

undefined4 sub_080E48D8(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = sub_08007C7C();
  if (((sVar2 != 0) && (sVar2 != 0xf)) || (cVar1 = *(char *)(param_1 + 0x12), cVar1 == '\0')) {
    iVar3 = param_1 + 0x54;
    sub_080D0894(2,iVar3);
    sub_08002B10(0x2a);
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080E4558(iVar3,0x101,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    if (*(char *)(param_1 + 0x11) == '\x02') {
      sub_080E4558(iVar3,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E4558(iVar3,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    cVar1 = *(char *)(param_1 + 0x12);
  }
  *(char *)(param_1 + 0x12) = cVar1 + -1;
  return in_lr;
}

