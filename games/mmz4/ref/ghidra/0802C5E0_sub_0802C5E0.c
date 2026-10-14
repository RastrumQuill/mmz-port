// sub_0802C5E0 at 0x0802C5E0 (thumb)

undefined8 sub_0802C5E0(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_0802C614(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (cVar1 = sub_0802C658(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

