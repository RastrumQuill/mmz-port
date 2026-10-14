// sub_0808EDD8 at 0x0808EDD8 (thumb)

undefined4 sub_0808EDD8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) +
       (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff] * 0x16;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] * 0x28;
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(char *)(param_1 + 0x13) + 2;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 0x7f) == 0) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(iVar2 + 0xbf) = 0;
    }
    else {
      *(undefined *)(iVar2 + 0xbe) = 0;
    }
    *(undefined *)(iVar2 + 0xc3) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

