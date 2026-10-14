// sub_0808D34C at 0x0808D34C (thumb)

undefined4 sub_0808D34C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_08365ac8 + (uint)*(byte *)(param_1 + 0xb9) * 2));
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,
                 &DAT_08365960 + (uint)(byte)(&DAT_08365ae4)[*(byte *)(param_1 + 0xb9)] * 0x18);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = sub_0800A5A4(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + 0x400);
  if ((iVar2 != 0) ||
     (iVar2 = sub_0800A5A4(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + 0x400),
     iVar2 != 0)) {
    sub_0808CD20(param_1,iVar2);
  }
  iVar3 = sub_08063614(param_1);
  if (iVar3 == 0) {
    cVar1 = sub_0808CE28(param_1,1);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_0808CE28(param_1,1);
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
      if ((*(char *)(param_1 + 0x11) != '\0') && (iVar2 == 0)) {
        *(undefined *)(param_1 + 0xbb) = 0;
        *(undefined *)(param_1 + 0xbc) = 1;
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
  }
  return in_lr;
}

