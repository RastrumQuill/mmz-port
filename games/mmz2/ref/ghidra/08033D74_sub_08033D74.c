// sub_08033D74 at 0x08033D74 (thumb)

undefined8 sub_08033D74(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x17c) < 2) &&
     ((*(byte *)(param_1 + 0x17c) != 1 ||
      ((bVar1 = *(byte *)(param_1 + 0x2b7), bVar1 < 2 &&
       (((bVar2 = *(byte *)(param_1 + 0x17d), 1 < bVar2 || ((bVar1 == 0 && (bVar2 == 0)))) ||
        ((bVar1 == 1 && (bVar2 == 1)))))))))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}

