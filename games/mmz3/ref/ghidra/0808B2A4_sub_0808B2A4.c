// sub_0808B2A4 at 0x0808B2A4 (thumb)

undefined4 sub_0808B2A4(int param_1)

{
  undefined4 in_lr;
  
  sub_0800471C(0x41);
  sub_080B7AC8(param_1,param_1 + 0x54,&DAT_08365542,3);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

