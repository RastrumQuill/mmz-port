// sub_08013B48 at 0x08013B48 (thumb)

undefined8 sub_08013B48(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 < 0xca000) {
    uVar1 = 0;
  }
  else if (iVar2 < 0x18e000) {
    uVar1 = 1;
  }
  else if (iVar2 < 0x1c2000) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  return CONCAT44(in_lr,uVar1);
}

