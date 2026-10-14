// sub_080C3F9C at 0x080C3F9C (thumb)

undefined4 sub_080C3F9C(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080C8A98(*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(&DAT_082cc200 + ((uint)(param_2 << 0x18) >> 0x16)));
  sub_080BC0AC(&UNK_082b932a + *(ushort *)((int)&DAT_082b8f3c + ((uint)(iVar1 << 0x10) >> 0xf)),1,
               0x12);
  return in_lr;
}

