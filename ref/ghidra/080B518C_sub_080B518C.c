// sub_080B518C at 0x080B518C (thumb)

undefined8 sub_080B518C(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar2 = sub_080B44D0(param_1,iVar2,8);
    if (iVar2 == 0) {
      iVar2 = 0;
      break;
    }
    cVar1 = sub_080B7790(iVar2);
  } while (cVar1 == '\0');
  return CONCAT44(in_lr,iVar2);
}

