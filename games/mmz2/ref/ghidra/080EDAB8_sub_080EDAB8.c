// sub_080EDAB8 at 0x080EDAB8 (thumb)

undefined4 sub_080EDAB8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080EEF6C(sub_080ECF10,0x3000000,&DAT_040000e0);
  sub_080EDEB8(&DAT_0203dd40);
  sub_080EDD74(&DAT_0203e750);
  sub_080EE028(0x97dc00);
  piVar2 = &DAT_0810097c;
  iVar3 = 0xe;
  do {
    iVar1 = *piVar2;
    sub_080EE1B0(iVar1,piVar2[1],*(undefined *)(piVar2 + 2));
    *(char *)(iVar1 + 0xb) = (char)*(undefined2 *)((int)piVar2 + 10);
    *(undefined **)(iVar1 + 0x18) = &DAT_0203eb10;
    piVar2 = piVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return in_lr;
}

