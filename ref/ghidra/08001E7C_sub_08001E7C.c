// sub_08001E7C at 0x08001E7C (thumb)

undefined2 sub_08001E7C(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 << 0x10) >> 0xd;
  if (*(int *)(&DAT_080d2b5c)[(uint)*(ushort *)(&DAT_080d2c08 + uVar2) * 3] ==
      *(int *)(&DAT_080d2c04 + uVar2)) {
    uVar1 = *(undefined2 *)
             ((int *)(&DAT_080d2b5c)[(uint)*(ushort *)(&DAT_080d2c08 + uVar2) * 3] + 1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

