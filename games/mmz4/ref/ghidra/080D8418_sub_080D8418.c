// sub_080D8418 at 0x080D8418 (thumb)

undefined4 sub_080D8418(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  sub_0801CFF0();
  local_1c = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_1c;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_1c = local_1c + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
    sub_080D0894(2,&local_1c);
    sub_080D85A4(param_1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D8584(param_1);
  }
  return in_lr;
}

