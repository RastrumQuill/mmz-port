// sub_08101858 at 0x08101858 (thumb)

undefined4 sub_08101858(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = **(uint **)(param_1 + 0x28);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar3 = (uint)(byte)DAT_0202df0e;
  if (uVar2 == 0) {
    if (*(uint *)(param_1 + 0xbc) == 0xa9) goto LAB_081018fe;
    sub_08002624(*(uint *)(param_1 + 0xbc) & 0xffff);
    sub_0800249C(0xa9,uVar3 << 5 | 0x200);
    uVar1 = 0xa9;
  }
  else if (uVar2 < 0x259) {
    if (*(uint *)(param_1 + 0xbc) == 0xa8) goto LAB_081018fe;
    sub_08002624(*(uint *)(param_1 + 0xbc) & 0xffff);
    sub_0800249C(0xa8,uVar3 << 5 | 0x200);
    uVar1 = 0xa8;
  }
  else {
    if ((0x708 < uVar2) || (*(uint *)(param_1 + 0xbc) == 0xa7)) goto LAB_081018fe;
    sub_08002624(*(uint *)(param_1 + 0xbc) & 0xffff);
    sub_0800249C(0xa7,uVar3 << 5 | 0x200);
    uVar1 = 0xa7;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
LAB_081018fe:
  sub_080025D8(*(undefined2 *)(param_1 + 0xbc));
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

