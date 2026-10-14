// sub_0808F63C at 0x0808F63C (thumb)

undefined4 sub_0808F63C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080DA6EC(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0x3905);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x380 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x380;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08002B10(0x31);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_1c = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 7) - 3) * 0x100;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 7) - 3) * 0x100;
    sub_080D0894(1,&local_1c);
    sub_0808F98C(param_1);
    sub_0802AB70(4,0x16,param_1 + 0x54);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

