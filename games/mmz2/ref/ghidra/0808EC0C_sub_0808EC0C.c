// sub_0808EC0C at 0x0808EC0C (thumb)

undefined4 sub_0808EC0C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = *(char *)(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = -0x80;
    }
    *(char *)(param_1 + 0x13) = cVar1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) +
       (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff] * 0x16;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] * 0x28;
  cVar1 = *(char *)(param_1 + 0x13) + '\x02';
  *(char *)(param_1 + 0x13) = cVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (cVar1 == '@') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else if (cVar1 == -0x40) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

