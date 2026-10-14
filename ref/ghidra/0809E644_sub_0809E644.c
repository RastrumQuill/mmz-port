// sub_0809E644 at 0x0809E644 (thumb)

undefined4 sub_0809E644(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,(&DAT_082b5526)[(*(byte *)(param_1 + 0x10) - 1) * 4]);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x12) == '\x1e') {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x50) + ((uVar2 * 2 >> 0x11 & 7) - 2) * 0x100;
    local_24 = *(int *)(param_1 + 0x4c) + -0x800;
    sub_0808827C(3,&local_24);
    local_24 = *(int *)(param_1 + 0x4c) + 0x800;
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x50) + ((uVar2 * 2 >> 0x11 & 7) - 2) * 0x100;
    sub_0808827C(3,&local_24);
    local_24 = *(int *)(param_1 + 0x4c) + -0x800;
    local_20 = *(int *)(param_1 + 0x50) + -0x800;
    sub_0808B758(param_1,&local_24);
    local_24 = *(int *)(param_1 + 0x4c) + 0x800;
    local_20 = *(int *)(param_1 + 0x50) + -0x800;
    sub_0808B758(param_1,&local_24);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

