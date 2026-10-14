// sub_0809FF34 at 0x0809FF34 (thumb)

undefined4 sub_0809FF34(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1c;
  }
  sub_0809C980(param_1);
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,0xc);
    local_10 = *(int *)(param_1 + 0x4c) + iVar3 * 0x100;
    local_c = sub_08008360(local_10,*(undefined4 *)(param_1 + 0xc0));
    sub_0808827C(3,&local_10);
  }
  else if ((*(byte *)(param_1 + 0x12) & 3) == 2) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,0xc);
    local_10 = *(int *)(param_1 + 0x4c) + iVar3 * -0x100;
    local_c = sub_08008360(local_10,*(undefined4 *)(param_1 + 0xc0));
    sub_0808827C(3,&local_10);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

