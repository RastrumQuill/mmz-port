// sub_080B9B94 at 0x080B9B94 (thumb)

ulonglong sub_080B9B94(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = sub_080B9A7C();
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b880c + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  uVar2 = sub_080B4DA4(uVar2,*(undefined *)(param_1 + 0x12),uVar1);
  return CONCAT44(in_lr,uVar2) & 0xffffffff000000ff;
}

