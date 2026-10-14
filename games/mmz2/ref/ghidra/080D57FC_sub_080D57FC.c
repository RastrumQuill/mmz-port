// sub_080D57FC at 0x080D57FC (thumb)

undefined8 sub_080D57FC(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 3;
  do {
    iVar3 = iVar3 + -1;
    cVar1 = sub_080D58D0(*(undefined *)(param_1 + 0x20a + iVar3));
    if (cVar1 == param_2) {
      uVar2 = 1;
      goto LAB_080d582a;
    }
  } while (iVar3 != 0);
  uVar2 = 0;
LAB_080d582a:
  return CONCAT44(in_lr,uVar2);
}

