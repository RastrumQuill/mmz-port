// sub_0808A220 at 0x0808A220 (thumb)

undefined4 sub_0808A220(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) ||
     (cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
     cVar1 != '\0')) {
    sub_0808A0A4(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c);
    sub_0808827C(2,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

