// sub_0803D3F0 at 0x0803D3F0 (thumb)

undefined4 sub_0803D3F0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x10);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0x200;
      *(undefined2 *)(param_1 + 0xce) = 0xfff0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
      *(undefined2 *)(param_1 + 0xce) = 0x10;
    }
    *(undefined4 *)(param_1 + 0x58) = 0xffffff00;
    *(undefined *)(param_1 + 0x12) = 0x1c;
    sub_08001EAC(0x8e);
  }
  sub_080297C0(param_1);
  if ((*(short *)(param_1 + 0xe4) != 0) && ((*(byte *)(param_1 + 0x12) & 1) == 0)) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 1) == 0) {
      sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),1);
    }
    else {
      sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),0);
    }
  }
  iVar3 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0xce);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 1;
    *(short *)(param_1 + 0xe4) = 0;
  }
  return in_lr;
}

