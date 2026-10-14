// sub_080B4CA0 at 0x080B4CA0 (thumb)

undefined4 sub_080B4CA0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(char *)(iVar3 + 0xd) == '\n') || (1 < *(byte *)(iVar3 + 0xc))) {
    sub_080AC60C(2,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080B4C80(param_1);
  }
  else {
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      cVar1 = (*(byte *)(param_1 + 10) >> 4 & 1) * '\x02' + -1;
      if (*(char *)(param_1 + 0x11) == '\0') {
        iVar2 = *(int *)(iVar3 + 0x54) + cVar1 * -0x1500;
      }
      else {
        iVar2 = *(int *)(iVar3 + 0x54) + cVar1 * 0x1600;
      }
      *(int *)(param_1 + 0x54) = iVar2;
      *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x1400;
    }
  }
  return in_lr;
}

