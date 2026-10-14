// sub_080808E8 at 0x080808E8 (thumb)

undefined4 sub_080808E8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08001EAC(0xe1);
    sub_0808827C(1,param_1 + 0x4c);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

