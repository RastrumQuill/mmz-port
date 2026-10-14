// sub_080E400C at 0x080E400C (thumb)

undefined4 sub_080E400C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  sub_080BF7B4(param_1 + 0x54,0);
  if (*(char *)(iVar1 + 0x121) == '(') {
    DAT_02030108 = DAT_02030108 & 0x7f;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

