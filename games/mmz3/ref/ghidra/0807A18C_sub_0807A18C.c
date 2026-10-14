// sub_0807A18C at 0x0807A18C (thumb)

void sub_0807A18C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0202e48c;
  if (*(int *)(param_1 + 0x58) + -0xc00 < DAT_0202e48c) {
    iVar2 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58));
    if (iVar2 != *(int *)(param_1 + 0x58)) {
      *(undefined *)(param_1 + 0xc1) = 0x1e;
      *(int *)(param_1 + 0x58) = iVar1 + 0xc00;
    }
    iVar2 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (((iVar2 != *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 0x5c) != 0)) &&
       (*(int *)(DAT_0202f5c0 + 0x58) < *(int *)(param_1 + 0x58))) {
      *(undefined *)(param_1 + 0xc1) = 0x1e;
      *(int *)(param_1 + 0x58) = iVar1 + 0xc00;
    }
  }
  return;
}

