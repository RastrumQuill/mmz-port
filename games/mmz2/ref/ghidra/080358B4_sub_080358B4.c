// sub_080358B4 at 0x080358B4 (thumb)

undefined4 sub_080358B4(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x177) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = sub_080EF118(param_1,*(undefined4 *)
                                  (&DAT_0833464c + (uint)*(byte *)(param_1 + 0x177) * 4));
  }
  return uVar1;
}

