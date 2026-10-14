// sub_0802E05C at 0x0802E05C (thumb)

undefined4 sub_0802E05C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  sub_080297C0();
  iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar2 = sub_08008360(iVar2,*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar2 + -0xd00;
  if ((byte)(*(char *)(param_1 + 200) - 4U) < 0xb) {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x4c) + ((uVar3 * 2 >> 0x11 & 0x3f) - 0x20) * 0x100;
    local_18 = sub_08008360(*(int *)(param_1 + 0x4c),iVar2 + -0xd00);
    local_18 = local_18 + 0x400;
    sub_0808827C(3,&local_1c);
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 3;
    if (uVar3 == 1) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_0808D698(&local_1c,uVar3 * 2 >> 0x11 & 1,2);
    }
    else if (uVar3 == 0) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_0808D698(&local_1c,uVar3 * 2 >> 0x11 & 1,0);
    }
    else if (uVar3 == 2) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_0808D698(&local_1c,uVar3 * 2 >> 0x11 & 1,1);
    }
    else if (uVar3 == 3) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_0808D698(&local_1c,uVar3 * 2 >> 0x11 & 1,3);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

