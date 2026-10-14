// sub_0800128C at 0x0800128C (thumb)

undefined4 sub_0800128C(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_080007b4();
  if (iVar1 != 8) {
    if (iVar1 == 4) {
      uVar3 = 2;
      sub_08002498();
    }
    else {
      uVar2 = (uint)DAT_02001758;
      DAT_02001758 = (ushort)(uVar2 - 1);
      if (uVar2 - 1 == 0) {
        DAT_02001758 = 0x40;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

