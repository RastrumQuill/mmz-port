// sub_080E9D00 at 0x080E9D00 (thumb)

undefined4 sub_080E9D00(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080EF118(*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(&DAT_0835e65c + ((uint)(param_2 << 0x18) >> 0x16)));
  sub_080DE510(&DAT_0834c9e4 + *(ushort *)((int)&DAT_0834c47c + ((uint)(iVar1 << 0x10) >> 0xf)),1,
               0x12);
  return in_lr;
}

