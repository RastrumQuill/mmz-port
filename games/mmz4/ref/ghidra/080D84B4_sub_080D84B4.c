// sub_080D84B4 at 0x080D84B4 (thumb)

undefined4 sub_080D84B4(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  local_1c = *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + (bVar1 >> 1 & 1) * 0xc00;
  sVar3 = sub_08007C7C();
  if ((sVar3 != 0) ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_1c = *(int *)(param_1 + 0x54) + ((uVar4 * 2 >> 0x11 & 7) - 3) * 0x100;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + ((uVar4 * 2 >> 0x11 & 7) - 3) * 0x100;
    sub_080D0894(2,&local_1c);
    sub_080D85A4(param_1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D8584(param_1);
  }
  return in_lr;
}

