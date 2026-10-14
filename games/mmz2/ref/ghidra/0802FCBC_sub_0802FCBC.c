// sub_0802FCBC at 0x0802FCBC (thumb)

undefined4 sub_0802FCBC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b6);
  if (*(char *)(param_1 + 0x177) != '\0') {
    bVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333c5c + uVar2 * 4));
    uVar2 = (uint)bVar1;
    *(byte *)(param_1 + 0x2b6) = bVar1;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08334360 + uVar2 * 4));
  return in_lr;
}

