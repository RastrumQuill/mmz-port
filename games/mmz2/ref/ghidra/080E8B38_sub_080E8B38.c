// sub_080E8B38 at 0x080E8B38 (thumb)

undefined8 sub_080E8B38(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = sub_08037C5C(*(undefined4 *)(param_1 + 0x10));
  if (bVar1 < 2) {
    *(undefined *)(param_1 + 1) = 0;
    sub_080032EC(4);
    iVar3 = 0;
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 5) = 0;
    *(undefined *)(param_1 + 6) = 8;
    sub_080032EC(1);
    cVar2 = sub_080E8B84(param_1,(int)param_2);
    iVar3 = (int)cVar2;
  }
  return CONCAT44(in_lr,iVar3);
}

