// sub_080285E8 at 0x080285E8 (thumb)

undefined4 sub_080285E8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333ea0 + (uint)*(byte *)(param_1 + 0xe) * 4));
  uVar2 = sub_080370D8(param_1,1,1,1,1,1);
  bVar1 = *(byte *)(param_1 + 0x95);
  if (bVar1 < uVar2) {
    bVar1 = 0;
  }
  else {
    bVar1 = bVar1 - (char)uVar2;
  }
  *(byte *)(param_1 + 0x95) = bVar1;
  return in_lr;
}

