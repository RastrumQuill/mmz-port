// sub_080338F0 at 0x080338F0 (thumb)

undefined8 sub_080338F0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_08037150();
  if (cVar1 < 0) {
    uVar2 = 0;
  }
  else if (cVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

