// sub_0809C930 at 0x0809C930 (thumb)

undefined4 sub_0809C930(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    iVar1 = ((param_2 << 0x10) >> 0x18) * 4;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(&DAT_085b6000 + iVar1);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(&DAT_08591500 + iVar1);
    *(ushort *)(param_1 + 0xb8) = (ushort)(byte)(param_2 >> 8);
    *(undefined2 *)(param_1 + 0xba) = 0xff;
  }
  sub_080033F0(param_1 + 0x6c,param_2 & 0xff);
  return in_lr;
}

