// sub_0808BFD8 at 0x0808BFD8 (thumb)

undefined4 sub_0808BFD8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_0808c01e:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_0808c07a;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0808c07a;
      sub_080033F0(param_1 + 0x6c,10);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_0808c01e;
    }
    if (bVar1 == 2) {
      *(undefined *)(param_1 + 0x12) = 2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar1 != 3) goto LAB_0808c07a;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto LAB_0808c07a;
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_0808c07a:
  if ((*(char *)(param_1 + 0x11) != '\0') && (*(char *)(param_1 + 0x13) == 'l')) {
    sub_0808BE74(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),0);
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

