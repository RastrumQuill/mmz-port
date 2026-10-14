// sub_08063CEC at 0x08063CEC (thumb)

undefined4 sub_08063CEC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0xc2);
  *(byte *)(param_1 + 0xc2) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

