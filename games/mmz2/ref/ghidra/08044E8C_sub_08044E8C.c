// sub_08044E8C at 0x08044E8C (thumb)

undefined8 sub_08044E8C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_08044DAC(param_1,*(undefined4 *)(param_1 + 0x54));
  uVar2 = 10;
  if (cVar1 != '\0') {
    uVar2 = 3;
  }
  return CONCAT44(in_lr,uVar2);
}

