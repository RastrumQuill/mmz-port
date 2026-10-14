// sub_08119398 at 0x08119398 (thumb)

undefined8 sub_08119398(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (*(char *)(*(int *)(param_1 + 0x63a8) + 0xbc + uVar1) != -1) {
      uVar2 = uVar2 + 1 & 0xff;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return CONCAT44(in_lr,uVar2);
}

