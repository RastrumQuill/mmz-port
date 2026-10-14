// sub_0805F75C at 0x0805F75C (thumb)

undefined4 sub_0805F75C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  cVar2 = sub_080608A8();
  if (cVar2 != '\0') {
    *(undefined *)(param_1 + 0xf) = 2;
    bVar1 = *(byte *)(param_1 + 0xb7);
    *(uint *)(param_1 + 0x60) = (bVar1 + 1) * -0x40;
    *(byte *)(param_1 + 0xb7) = bVar1 + 8;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_0805F798(param_1);
  }
  return in_lr;
}

