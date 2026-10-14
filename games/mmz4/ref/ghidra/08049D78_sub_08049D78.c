// sub_08049D78 at 0x08049D78 (thumb)

undefined4 sub_08049D78(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    iVar1 = param_1 + 0x54;
    sub_080D0894(1,iVar1);
    sub_08002B10(0x35);
    sub_08049774(*(undefined4 *)(param_1 + 0x28),iVar1,0);
    sub_08049774(*(undefined4 *)(param_1 + 0x28),iVar1,1);
    sub_08049774(*(undefined4 *)(param_1 + 0x28),iVar1,2);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

