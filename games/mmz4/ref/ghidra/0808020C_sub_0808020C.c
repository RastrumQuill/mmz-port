// sub_0808020C at 0x0808020C (thumb)

undefined4 sub_0808020C(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x5c) * 0xfa;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sub_08080594(param_1);
    cVar1 = sub_08128A9C(*(undefined *)(param_1 + 0x12),6);
    if ((cVar1 == '\0') && (0x280 < *(int *)(param_1 + 0x5c) + 0x140U)) {
      sub_080D0894(3,param_1 + 0x54);
    }
    bVar3 = *(byte *)(param_1 + 0x12);
    if ((bVar3 & 2) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x12) = bVar3 - 1;
    if (bVar3 == 0) {
      *(undefined *)(param_1 + 0x12) = 1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x5c) * 0xfa;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
    sub_08080594(param_1);
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0x400;
      sub_080D0894(1,&local_14);
      iVar4 = param_1 + 0x54;
      sub_080D63D8(param_1,iVar4);
      sub_08002B10(0x2a);
      sub_0802AB70(3,0x15,iVar4);
      if (DAT_0202e8ec < 9999) {
        DAT_0202e8ec = DAT_0202e8ec + 1;
      }
      sub_0802ABC8(param_1,iVar4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

