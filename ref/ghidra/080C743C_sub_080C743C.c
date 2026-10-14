// sub_080C743C at 0x080C743C (thumb)

undefined4 sub_080C743C(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_080c88f0(sub_080C6894,0x3000000,&DAT_040000e0);
  sub_080C783C(&DAT_0202eda0);
  sub_080C76F8(&DAT_0202f7b0);
  sub_080C79AC(0x97dc00);
  piVar2 = &DAT_080d2b5c;
  iVar3 = 0xe;
  do {
    iVar1 = *piVar2;
    sub_080C7B34(iVar1,piVar2[1],*(undefined *)(piVar2 + 2));
    *(char *)(iVar1 + 0xb) = (char)*(undefined2 *)((int)piVar2 + 10);
    *(undefined **)(iVar1 + 0x18) = &DAT_0202fb70;
    piVar2 = piVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return in_lr;
}

