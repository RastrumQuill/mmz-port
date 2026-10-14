// sub_0808FC84 at 0x0808FC84 (thumb)

undefined4 sub_0808FC84(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x54) * 0xfa;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar2 >> 8;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar2 = *(int *)(param_1 + 0x58) + 0x20;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar2 < *(int *)(param_1 + 0x50)) {
      *(int *)(param_1 + 0x50) = iVar2;
    }
  }
  else {
    cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0808FAF8(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c);
    sub_0808827C(1,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

