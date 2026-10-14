// sub_080DAC14 at 0x080DAC14 (thumb)

ulonglong sub_080DAC14(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = sub_080DAAE8();
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0834bac4 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  uVar2 = sub_080D6094(uVar2,*(undefined *)(param_1 + 0x12),uVar1);
  return CONCAT44(in_lr,uVar2) & 0xffffffff000000ff;
}

