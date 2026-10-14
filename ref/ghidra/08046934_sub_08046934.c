// sub_08046934 at 0x08046934 (thumb)

undefined4 sub_08046934(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 5;
    *(undefined *)(*(int *)(param_1 + 0xd4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0x30;
  }
  sub_080297C0(param_1);
  iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 < iVar2 + 0x1400) {
    iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1 + -0x1400;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    local_14 = *(int *)(param_1 + 0x4c) + -0x1000;
    local_10 = sub_08008360();
    sub_0808827C(3,&local_14);
    local_14 = *(int *)(param_1 + 0x4c) + -0x800;
    sub_0808827C(3,&local_14);
    local_14 = *(int *)(param_1 + 0x4c);
    sub_0808827C(3,&local_14);
    local_14 = *(int *)(param_1 + 0x4c) + 0x800;
    sub_0808827C(3,&local_14);
    local_14 = *(int *)(param_1 + 0x4c) + 0x1000;
    sub_0808827C(3,&local_14);
    sub_08001EAC(0xd8);
  }
  return in_lr;
}

