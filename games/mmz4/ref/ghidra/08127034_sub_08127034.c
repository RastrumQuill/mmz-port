// sub_08127034 at 0x08127034 (thumb)

undefined4 sub_08127034(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_081284E8(sub_0812648C,0x3000000,&DAT_040000e0);
  sub_08127434(&DAT_0203c910);
  sub_081272F0(&DAT_0203d320);
  sub_081275A4(0x97dc00);
  piVar2 = &DAT_08138864;
  iVar3 = 0xe;
  do {
    iVar1 = *piVar2;
    sub_0812772C(iVar1,piVar2[1],*(undefined *)(piVar2 + 2));
    *(char *)(iVar1 + 0xb) = (char)*(undefined2 *)((int)piVar2 + 10);
    *(undefined **)(iVar1 + 0x18) = &DAT_0203d6e0;
    piVar2 = piVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return in_lr;
}

