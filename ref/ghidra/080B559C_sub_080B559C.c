// sub_080B559C at 0x080B559C (thumb)

undefined8 sub_080B559C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202320c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b550d;
    *(undefined2 *)(iVar1 + 0x1c) = 0xc0;
    *(undefined *)(iVar1 + 0x1e) = 3;
    if ((param_1 == 0) || (*(char *)(param_1 + 8) != '\0')) {
      param_1 = DAT_0202286c;
    }
    *(int *)(iVar1 + 0x20) = param_1;
    *(int *)(param_1 + 0xec) = iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}

