// sub_080B4634 at 0x080B4634 (thumb)

int sub_080B4634(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)(param_1 << 0x18) >> 0x17;
  uVar3 = (param_2 & 0xff) - (uint)(byte)(&DAT_082b7258)[uVar1];
  if (uVar3 < (byte)(&DAT_082b7259)[uVar1]) {
    iVar2 = (int)(uVar3 * 0x1000000) >> 0x18;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

