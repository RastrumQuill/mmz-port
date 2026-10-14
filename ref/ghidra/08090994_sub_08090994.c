// sub_08090994 at 0x08090994 (thumb)

undefined4 sub_08090994(int param_1)

{
  undefined4 in_lr;
  
  sub_08001EAC(2);
  sub_0808827C(1,param_1 + 0x4c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

