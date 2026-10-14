// sub_08013A60 at 0x08013A60 (thumb)

undefined8 sub_08013A60(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0xc9000) {
    uVar1 = 0;
  }
  else if (iVar2 < 0xd8000) {
    uVar1 = 1;
  }
  else if (iVar2 < 0xff000) {
    uVar1 = 2;
  }
  else if (iVar2 < 0x10e000) {
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
  }
  return CONCAT44(in_lr,uVar1);
}

