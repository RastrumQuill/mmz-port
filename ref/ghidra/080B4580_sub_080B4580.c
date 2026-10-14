// sub_080B4580 at 0x080B4580 (thumb)

undefined8 sub_080B4580(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 3;
  do {
    iVar3 = iVar3 + -1;
    cVar1 = sub_080B4660(*(undefined *)(param_1 + 0x180 + iVar3));
    if ((int)cVar1 == (param_2 & 0xff)) {
      uVar2 = 1;
      goto LAB_080b45ac;
    }
  } while (iVar3 != 0);
  uVar2 = 0;
LAB_080b45ac:
  return CONCAT44(in_lr,uVar2);
}

