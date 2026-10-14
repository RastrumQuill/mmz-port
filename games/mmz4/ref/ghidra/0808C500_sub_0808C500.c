// sub_0808C500 at 0x0808C500 (thumb)

undefined4 sub_0808C500(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  char acStack_1c [8];
  
  sub_08128B5C(acStack_1c,&DAT_08129494,8);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x2400);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar3 = sub_08128884(param_1,*(undefined4 *)(&DAT_0885c388 + uVar4 * 4));
  cVar1 = acStack_1c[iVar3 + uVar4 * 2] + (&DAT_0885c384)[uVar4];
  iVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (iVar3 == 0) {
    cVar2 = sub_0810CD50(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(DAT_0202dbf0 + 0x54),
                         *(int *)(DAT_0202dbf0 + 0x58) + -0x1300);
    iVar3 = sub_0808CB5C(param_1,cVar2);
    if (iVar3 != 0) {
      cVar1 = sub_0808CAE8(param_1,cVar2);
      *(char *)(param_1 + 0xb4) = cVar1;
      *(char *)(param_1 + 0x24) = cVar1 + -0x80;
      if (*(char *)(param_1 + 0xb4) != cVar2) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    cVar1 = sub_0808CAE8(param_1,cVar1);
    *(char *)(param_1 + 0xb4) = cVar1;
  }
  else {
    if (*(char *)(param_1 + 0xb4) == cVar1) {
      return in_lr;
    }
    cVar1 = sub_0808CAE8(param_1,cVar1);
    *(char *)(param_1 + 0xb4) = cVar1;
  }
  *(char *)(param_1 + 0x24) = cVar1 + -0x80;
  return in_lr;
}

