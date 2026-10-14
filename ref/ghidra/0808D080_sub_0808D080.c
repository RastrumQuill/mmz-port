// sub_0808D080 at 0x0808D080 (thumb)

undefined4 sub_0808D080(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x41) =
       *(byte *)(param_1 + 0x41) & 0xf |
       (&DAT_02022f30)[*(byte *)(*(int *)(param_1 + 0x74) + 9)] << 4;
  *(undefined1 *)(param_1 + 0x1e) = (&DAT_02022f30)[*(byte *)(*(int *)(param_1 + 0x74) + 9)];
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    sub_0808827C(2,param_1 + 0x4c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

