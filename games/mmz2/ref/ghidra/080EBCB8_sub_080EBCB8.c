// sub_080EBCB8 at 0x080EBCB8 (thumb)

undefined4 sub_080EBCB8(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0835e94c + (uint)*(byte *)(param_1 + 2) * 4));
  sub_080D5CCC(*(undefined4 *)(param_1 + 0x75b8),*(undefined *)(param_1 + 0xdd8),
               *(undefined4 *)(param_1 + 0xdd4));
  sub_08002824(param_1 + 0xee0,(DAT_02000f96 & 0x1f00) << 3,0x1000);
  sub_08002D68(0x90,0);
  return in_lr;
}

