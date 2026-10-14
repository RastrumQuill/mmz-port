// sub_08038B00 at 0x08038B00 (thumb)

undefined8 sub_08038B00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  param_2 = *(int *)(param_1 + 0x4c) + param_2;
  iVar2 = *(int *)(param_1 + 0xd8);
  if (*(uint *)(param_1 + 0xe0) < (uint)(param_2 - iVar2)) {
    if (param_2 < iVar2) {
      *(int *)(param_1 + 0x4c) = iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xdc);
    }
    uVar1 = 1;
  }
  else {
    *(int *)(param_1 + 0x4c) = param_2;
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

