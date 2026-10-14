// sub_0802C614 at 0x0802C614 (thumb)

undefined8 sub_0802C614(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = *(uint *)(param_1 + 600) & 0x20;
  }
  else {
    uVar1 = *(uint *)(param_1 + 600) & 0x10;
  }
  if ((uVar1 == 0) || (*(char *)(param_1 + 0x278) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

