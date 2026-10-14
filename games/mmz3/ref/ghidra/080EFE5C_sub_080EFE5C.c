// sub_080EFE5C at 0x080EFE5C (thumb)

undefined4 sub_080EFE5C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 2) == '\0') {
    sub_0800471C(6);
    *(undefined2 *)(param_1 + 4) = 0x1c20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  else if ((*(char *)(param_1 + 2) == '\x01') &&
          ((sVar1 = *(short *)(param_1 + 4) + -1, *(short *)(param_1 + 4) = sVar1, sVar1 == 0 ||
           (iVar2 = sub_080047C0(6), iVar2 == 0)))) {
    sub_080EDB10(param_1,0x300);
  }
  return in_lr;
}

