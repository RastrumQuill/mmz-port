// sub_0807EC1C at 0x0807EC1C (thumb)

undefined4 sub_0807EC1C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0807F544(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c,param_1 + 0x54,param_1 + 0x5c)
  ;
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

