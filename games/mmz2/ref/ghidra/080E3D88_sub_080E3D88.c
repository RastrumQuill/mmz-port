// sub_080E3D88 at 0x080E3D88 (thumb)

undefined8 sub_080E3D88(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((DAT_02000ca0 & 0x30) == 0x30) {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    bVar1 = *(char *)(param_1 + 0xe) + 1;
    *(byte *)(param_1 + 0xe) = bVar1;
    if (0x3b < bVar1) {
      sub_080E0E64(param_1,0x104);
      uVar2 = 0xffffffff;
      goto LAB_080e3dc2;
    }
  }
  uVar2 = 0;
LAB_080e3dc2:
  return CONCAT44(in_lr,uVar2);
}

