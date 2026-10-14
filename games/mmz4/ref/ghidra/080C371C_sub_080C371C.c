// sub_080C371C at 0x080C371C (thumb)

undefined4 sub_080C371C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  sub_0801CFF0();
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + '\x01', *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\t'))
  {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54);
      iVar3 = -0x1000;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar3 = 0x1000;
    }
    local_10 = local_10 + iVar3;
    local_c = *(int *)(param_1 + 0x58);
    iVar2 = sub_08008534(local_10);
    iVar3 = iVar2 - local_c;
    if (iVar3 < 0) {
      iVar3 = local_c - iVar2;
    }
    if (iVar3 < 0xf00) {
      sub_080C35B4(&local_10,0,*(char *)(param_1 + 0x11) + -1,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 10) {
    sub_08005784(param_1 + 0x74,&DAT_088620c0);
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_088620a8);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C367C(param_1);
  }
  return in_lr;
}

