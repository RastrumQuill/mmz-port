// sub_08098D70 at 0x08098D70 (thumb)

undefined4 sub_08098D70(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6800);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar4 = uVar2 & 0x7fffffff;
    DAT_0202dc38 = uVar4;
    iVar3 = sub_08128A9C(uVar2 * 2 >> 0x11,6);
    *(undefined *)(param_1 + 0xbe) = (&DAT_0885d7f8)[iVar3];
    uVar2 = uVar4 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0xbf) = (byte)(uVar2 * 2 >> 0x11) & 1;
  }
  return in_lr;
}

