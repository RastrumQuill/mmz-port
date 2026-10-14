// sub_08022FEC at 0x08022FEC (thumb)

undefined8 sub_08022FEC(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)*(short *)(param_1 + 0xa4);
  uVar1 = sub_08022AF0(param_1);
  uVar1 = uVar1 & 0xff;
  if (iVar3 < (int)uVar1) {
    uVar2 = sub_08022B0C(param_1);
    uVar2 = iVar3 + (uVar2 & 0xff);
    if ((int)uVar1 < (int)uVar2) {
      uVar2 = uVar1;
    }
    *(short *)(param_1 + 0xa4) = (short)uVar2;
    sub_0801E6AC(0x1f);
    if ((int)uVar2 < (int)uVar1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333b9c + (uint)*(byte *)(param_1 + 9) * 4));
    uVar1 = uVar1 & 0xff;
  }
  return CONCAT44(in_lr,uVar1);
}

