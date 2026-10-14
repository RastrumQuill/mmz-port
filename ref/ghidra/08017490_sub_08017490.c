// sub_08017490 at 0x08017490 (thumb)

undefined8 sub_08017490(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_0801B390();
  if (cVar1 < 0) {
    uVar2 = 0;
  }
  else if ((int)cVar1 == (param_2 & 0xff)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

