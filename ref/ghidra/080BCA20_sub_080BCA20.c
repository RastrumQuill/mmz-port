// sub_080BCA20 at 0x080BCA20 (thumb)

undefined8 sub_080BCA20(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  for (pbVar1 = *(byte **)(param_1 + 0x20); *pbVar1 < 0xfd; pbVar1 = pbVar1 + 1) {
    if ((*pbVar1 == 0xf3) &&
       (pbVar1 = pbVar1 + 1,
       (uint)*pbVar1 != ((uint)*(byte *)(param_1 + 4) << 1 | (uint)*(byte *)(param_1 + 6)))) {
      uVar2 = 1;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

