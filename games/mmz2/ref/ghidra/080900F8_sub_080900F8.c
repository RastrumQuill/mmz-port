// sub_080900F8 at 0x080900F8 (thumb)

undefined4 sub_080900F8(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x7610);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x25) = 0x1f;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0808FF98(param_1);
  return in_lr;
}

