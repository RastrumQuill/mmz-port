// sub_080E7E0C at 0x080E7E0C (thumb)

undefined4 sub_080E7E0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xde6) = 0;
  *(undefined4 *)(param_1 + 0xde8) = 0;
  *(undefined *)(param_1 + 0xde4) = 0;
  iVar1 = *(int *)(param_1 + 0x75b8);
  *(undefined *)(param_1 + 0xdf0) = *(undefined *)(iVar1 + 0x212);
  *(undefined *)(param_1 + 0xdf1) = *(undefined *)(iVar1 + 0x213);
  *(undefined *)(param_1 + 0xdf2) = *(undefined *)(iVar1 + 0x215);
  *(undefined *)(param_1 + 0xdf3) = *(undefined *)(iVar1 + 0x1fc);
  sub_080E8534(param_1);
  sub_080E8394(param_1);
  sub_080E8420(param_1);
  sub_080E8780(param_1 + 0xe6c,0);
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_08002D68(0x1d,0);
    sub_08002D68(0x1e,0);
  }
  sub_08012004(DAT_0202f094);
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080E7ED0(param_1);
  return in_lr;
}

