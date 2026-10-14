// sub_08026978 at 0x08026978 (thumb)

undefined8 sub_08026978(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_080269AC(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (cVar1 = sub_080269F0(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

