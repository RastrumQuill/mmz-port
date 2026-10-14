// sub_0804ACD0 at 0x0804ACD0 (thumb)

undefined4 sub_0804ACD0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    sVar1 = sub_0804AD9C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar3 = iVar2 - *(int *)(param_1 + 0x58);
      if (iVar3 < 0) {
        iVar3 = *(int *)(param_1 + 0x58) - iVar2;
      }
      if (iVar3 < 0xf00) {
        *(int *)(param_1 + 0x58) = iVar2;
      }
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    sub_0804A7CC(*(undefined4 *)(param_1 + 0x28),param_1,0);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

