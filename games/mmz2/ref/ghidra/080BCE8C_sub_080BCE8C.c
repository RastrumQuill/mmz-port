// sub_080BCE8C at 0x080BCE8C (thumb)

undefined4 sub_080BCE8C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_080126A0();
  *(undefined *)(param_1 + 0x25) = 0x19;
  sub_08012CA4(param_1,9);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08002D68(0x8b,800);
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BCCE8(param_1);
  return in_lr;
}

