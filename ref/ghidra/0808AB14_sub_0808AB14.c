// sub_0808AB14 at 0x0808AB14 (thumb)

undefined4 sub_0808AB14(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar1 == '\0') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(char *)(param_1 + 0x11) != '\x03') goto LAB_0808abc6;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  iVar2 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar2 < 0) {
    if (iVar2 < -0x1000) {
LAB_0808aba4:
      *(undefined *)(param_1 + 0x12) = 0;
    }
    else {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
    }
  }
  else if (0 < iVar2) goto LAB_0808aba4;
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x700);
  if (cVar1 == '\x0f') {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    return in_lr;
  }
LAB_0808abc6:
  sub_0808827C(3,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

