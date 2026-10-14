// sub_0807F280 at 0x0807F280 (thumb)

undefined4 sub_0807F280(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
  sub_0808827C(1,param_1 + 0x4c);
  sub_08001EAC(2);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  return in_lr;
}

