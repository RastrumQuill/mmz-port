// sub_080D9D84 at 0x080D9D84 (thumb)

undefined4 sub_080D9D84(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) * 0xf5;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x2000;
    sub_080D0894(1,&local_1c);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 3;
    sub_080D9BC8(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x250a,uVar3,0);
    sub_080D9BC8(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x250b,uVar3,0);
    sub_080D9BC8(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x250c,uVar3,0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

