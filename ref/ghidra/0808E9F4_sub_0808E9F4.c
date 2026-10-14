// sub_0808E9F4 at 0x0808E9F4 (thumb)

undefined4 sub_0808E9F4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\b';
  iVar2 = *(int *)(param_1 + 0x58) + -0x60;
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar2 < -0x100) {
    *(undefined4 *)(param_1 + 0x58) = 0xffffff00;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x4c) =
       *(int *)(param_1 + 0x4c) +
       *(int *)(param_1 + 0x54) +
       ((int)((uint)(ushort)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] << 0x10) >> 0x12);
  iVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if ((iVar2 != 0) ||
     ((*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * -2 <= DAT_02021648 &&
      (cVar1 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50)),
      cVar1 != -0x80)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

