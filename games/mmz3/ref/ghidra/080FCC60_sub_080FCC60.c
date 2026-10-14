// sub_080FCC60 at 0x080FCC60 (thumb)

undefined4 sub_080FCC60(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_080fe114(sub_080FC0B8,0x3000000,&DAT_040000e0);
  sub_080FD060(&DAT_0203dfa0);
  sub_080FCF1C(&DAT_0203e9b0);
  sub_080FD1D0(0x97dc00);
  piVar2 = &DAT_0810bf34;
  iVar3 = 0xf;
  do {
    iVar1 = *piVar2;
    sub_080FD358(iVar1,piVar2[1],*(undefined *)(piVar2 + 2));
    *(char *)(iVar1 + 0xb) = (char)*(undefined2 *)((int)piVar2 + 10);
    *(undefined **)(iVar1 + 0x18) = &DAT_0203edb0;
    piVar2 = piVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return in_lr;
}

