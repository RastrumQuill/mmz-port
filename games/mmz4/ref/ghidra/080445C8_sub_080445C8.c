// sub_080445C8 at 0x080445C8 (thumb)

undefined4 sub_080445C8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  cVar1 = sub_0803A9A8(param_1,3);
  if (*(char *)(iVar2 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      sub_0801CFF0(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      return in_lr;
    }
  }
  if (cVar1 != -1) {
    sub_080D0894(2,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  sub_0804463C(param_1);
  return in_lr;
}

