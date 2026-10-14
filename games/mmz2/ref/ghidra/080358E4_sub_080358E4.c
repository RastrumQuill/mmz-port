// sub_080358E4 at 0x080358E4 (thumb)

undefined4 sub_080358E4(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x178) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = sub_080EF118(param_1,*(undefined4 *)
                                  (&DAT_08334658 + (uint)*(byte *)(param_1 + 0x178) * 4));
  }
  return uVar1;
}

