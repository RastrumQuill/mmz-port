// sub_0808C4AC at 0x0808C4AC (thumb)

undefined4 sub_0808C4AC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,0x7100);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0xc);
  if ((cVar1 == '\0') && (*(byte *)(param_1 + 0x13) < 3)) {
    sub_0808BF60(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000,
                 *(undefined *)(param_1 + 0x13));
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  sub_08007390(param_1 + 0x74,
               &DAT_08365720 + (uint)(byte)(&DAT_083658e4)[*(char *)(param_1 + 0x71)] * 0x18);
  return in_lr;
}

