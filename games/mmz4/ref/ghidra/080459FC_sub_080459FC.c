// sub_080459FC at 0x080459FC (thumb)

undefined4 sub_080459FC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\x02') {
    sub_0801CFC8(param_1,0x8406,
                 (uint)((int)((uint)(*(byte *)(iVar3 + 0x71) ^ 1) << 0x18) >> 8) >> 0x10,
                 (short)*(char *)(iVar3 + 0x72));
    uVar2 = ~(uint)(*(byte *)(iVar3 + 10) >> 4) & 1;
    if (uVar2 != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08045aae;
    }
  }
  else {
    sub_0801CFC8(param_1,0x8408,
                 (uint)((int)((uint)(*(byte *)(iVar3 + 0x71) ^ 1) << 0x18) >> 8) >> 0x10,
                 (short)*(char *)(iVar3 + 0x72));
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    uVar2 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08045aae;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xef;
LAB_08045aae:
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(int *)(param_1 + 0xbc) = *(int *)(iVar3 + 0xb4) - *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar3 + 0xb8);
  sub_0801CFF0(param_1);
  sub_080458A0(param_1);
  return in_lr;
}

