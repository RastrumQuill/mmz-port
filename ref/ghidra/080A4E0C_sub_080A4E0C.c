// sub_080A4E0C at 0x080A4E0C (thumb)

undefined4 sub_080A4E0C(int param_1)

{
  undefined4 in_lr;
  
  sub_0808827C(1,param_1 + 0x4c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

