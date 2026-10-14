// sub_08067724 at 0x08067724 (thumb)

undefined4 sub_08067724(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,5);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  cVar1 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
  if (cVar1 != '\0') {
    local_10 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
    *(int *)(param_1 + 0x50) = local_10 + -0x800;
    if (*(int *)(param_1 + 0x58) != 0x40) {
      local_14 = *(int *)(param_1 + 0x4c);
      sub_0808827C(3,&local_14);
      local_14 = *(int *)(param_1 + 0x4c) + 0x800;
      sub_0808827C(3,&local_14);
      local_14 = *(int *)(param_1 + 0x4c) + -0x800;
      sub_0808827C(3,&local_14);
    }
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x11) = 2;
  }
  return in_lr;
}

