// sub_08029EDC at 0x08029EDC (thumb)

undefined4 sub_08029EDC(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined *)(param_1 + 0x2bf);
  iVar2 = sub_08035C64(param_1,uVar1);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_08035C04(param_1,uVar1);
    sub_08033A1C(param_1,0,0,0,uVar1,*(undefined *)(param_1 + 0x215),*(byte *)(param_1 + 0x2b7) - 1)
    ;
  }
  return in_lr;
}

