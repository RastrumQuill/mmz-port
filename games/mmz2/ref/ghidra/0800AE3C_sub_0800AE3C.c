// sub_0800AE3C at 0x0800AE3C (thumb)

undefined4 sub_0800AE3C(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  iVar2 = 0;
  piVar3 = &DAT_08314e10;
  iVar1 = 0;
  do {
    if (*param_1 >> 0xc == *piVar3) {
      sub_0800860C(*param_1 >> 0xc,*(int *)((int)&DAT_08314e14 + iVar1),(&DAT_0831523c)[iVar2]);
      iVar2 = *piVar3;
      iVar1 = sub_080EF150(*(int *)((int)&DAT_08314e14 + iVar1) + 10,10);
      sub_0800860C(iVar2,iVar1 * 10,&DAT_08315218);
      sub_080032EC(0x61);
      return in_lr;
    }
    piVar3 = piVar3 + 3;
    iVar1 = iVar1 + 0xc;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1a);
  return in_lr;
}

