// sub_0809ABB4 at 0x0809ABB4 (thumb)

undefined4 sub_0809ABB4(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08038E6C(*(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54),
                       *(int *)(param_1 + 0x58) - (*(int *)(DAT_0202e130 + 0x58) + -0x1000));
  uVar3 = iVar2 * 0x1000000 + 0x82000000U >> 0x18;
  if (uVar3 < 0x15) {
    uVar3 = 0x15;
  }
  else if (0x6a < uVar3) {
    uVar3 = 0x6a;
  }
  uVar1 = sub_080EF150(uVar3 - 0x15,10);
  *(undefined *)(param_1 + 0xb8) = uVar1;
  return in_lr;
}

