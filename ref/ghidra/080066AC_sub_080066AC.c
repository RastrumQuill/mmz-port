// sub_080066AC at 0x080066AC (thumb)

undefined8 sub_080066AC(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  cVar1 = sub_08006AF4();
  if ((cVar1 == '\x0f') || (cVar1 = sub_08006B4C(param_1,param_2), cVar1 == '\x0f')) {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

