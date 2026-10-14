// sub_080E84BC at 0x080E84BC (thumb)

undefined8 sub_080E84BC(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (int)param_2;
  if (iVar2 == -1) {
    iVar2 = 1;
  }
  else {
    cVar1 = sub_080EF11C(param_1,iVar2,*(undefined4 *)(&DAT_0835e550 + iVar2 * 4));
    iVar2 = (int)cVar1;
  }
  return CONCAT44(in_lr,iVar2);
}

