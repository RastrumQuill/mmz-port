// sub_08080654 at 0x08080654 (thumb)

undefined4 sub_08080654(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08340c04 + (uint)*(byte *)(param_1 + 0x11) * 10));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  sub_0808090C(param_1);
  psVar2 = (short *)(param_1 + 0xc0);
  sVar1 = *psVar2;
  *psVar2 = sVar1 + -1;
  if ((short)(sVar1 + -1) == 0) {
    *psVar2 = 0x80;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

