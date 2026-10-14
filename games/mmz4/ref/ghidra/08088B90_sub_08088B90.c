// sub_08088B90 at 0x08088B90 (thumb)

undefined4 sub_08088B90(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  byte local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  sub_08128B5C(local_1c,&DAT_08129420,3);
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(undefined4 *)(param_1 + 0x58);
  iVar2 = 0;
  do {
    sub_080D4898(&local_18,&DAT_0885bb60 + (uint)local_1c[iVar2] * 0x1c,0,uVar1 | uVar1 << 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return in_lr;
}

