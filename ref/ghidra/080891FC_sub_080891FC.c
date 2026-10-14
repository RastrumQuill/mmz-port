// sub_080891FC at 0x080891FC (thumb)

undefined4 sub_080891FC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = *(char *)(param_1 + 0x1f);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = cVar1 + '\x01';
  }
  else {
    cVar1 = cVar1 + -1;
  }
  *(char *)(param_1 + 0x1f) = cVar1;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) ||
     (cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800),
     cVar1 != '\0')) {
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_10 = *(undefined4 *)(param_1 + 0x50);
    sub_0808827C(1,&local_14);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

