// sub_08094CF8 at 0x08094CF8 (thumb)

undefined4 sub_08094CF8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x200;
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c));
  if (cVar1 != '\0') {
    sub_0801D520(DAT_0202286c,8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

