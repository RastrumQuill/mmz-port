// sub_080E1044 at 0x080E1044 (thumb)

undefined8 sub_080E1044(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = 1;
  uVar3 = 0;
  do {
    bVar1 = **(byte **)(param_1 + 0x74);
    if ((uVar2 & bVar1) == 0) {
      **(byte **)(param_1 + 0x74) = (byte)uVar2 | bVar1;
      *(byte *)(param_1 + 0x78) = (byte)uVar2;
      goto LAB_080e1078;
    }
    uVar2 = (uVar2 << 0x19) >> 0x18;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 8);
  uVar3 = 0xff;
LAB_080e1078:
  return CONCAT44(in_lr,uVar3);
}

