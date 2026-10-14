// sub_0808C15C at 0x0808C15C (thumb)

undefined4 sub_0808C15C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0800DEFC(param_1,*(undefined4 *)(param_1 + 0x20));
  sub_080033F0(param_1 + 0x6c,2);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar3 = 0x20;
  }
  else {
    uVar3 = 0xffffffe0;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  cVar1 = '\x01' - *(char *)(param_1 + 0x11);
  *(char *)(param_1 + 0x44) = cVar1;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808C124(param_1);
  return in_lr;
}

