// sub_0808F7A0 at 0x0808F7A0 (thumb)

undefined4 sub_0808F7A0(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x7b00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) + -0x2800;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + -0xa000;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2000;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x8000;
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0808F844(param_1);
  return in_lr;
}

