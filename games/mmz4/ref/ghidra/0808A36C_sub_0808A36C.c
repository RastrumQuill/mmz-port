// sub_0808A36C at 0x0808A36C (thumb)

undefined4 sub_0808A36C(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x2006);
    *(undefined *)(param_1 + 0xb5) = 0;
    sub_08005784(param_1 + 0x74,&DAT_0885be90);
    uVar3 = 0xffffff00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0808B050(param_1,0xf);
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_0808AFE4(param_1);
  if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar4 = -0x1000;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = 0x1000;
    }
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + -0x800);
    if (sVar2 != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else if (0x2000 < DAT_0202ea30 - (*(int *)(param_1 + 0x54) + 0x7800)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  bVar1 = *(byte *)(param_1 + 0xc2) + 1;
  *(byte *)(param_1 + 0xc2) = bVar1;
  if (0x60 < bVar1) {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

