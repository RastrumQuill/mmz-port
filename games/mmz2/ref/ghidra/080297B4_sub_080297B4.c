// sub_080297B4 at 0x080297B4 (thumb)

undefined4 sub_080297B4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b6);
  if (*(char *)(param_1 + 0x177) != '\0') {
    bVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333c0c + uVar2 * 4));
    uVar2 = (uint)bVar1;
    *(byte *)(param_1 + 0x2b6) = bVar1;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333f90 + uVar2 * 4));
  return in_lr;
}

