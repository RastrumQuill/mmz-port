// sub_080EF048 at 0x080EF048 (thumb)

undefined8 sub_080EF048(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = param_3 + -1;
  if (param_3 != 0) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      if (*param_2 != cVar1) goto LAB_080ef070;
      iVar2 = iVar2 + -1;
      param_2 = param_2 + 1;
    } while (iVar2 != -1);
  }
  param_2 = (char *)0x0;
LAB_080ef070:
  return CONCAT44(in_lr,param_2);
}

