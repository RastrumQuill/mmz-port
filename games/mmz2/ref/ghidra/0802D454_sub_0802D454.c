// sub_0802D454 at 0x0802D454 (thumb)

undefined4 sub_0802D454(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b6);
  if (*(char *)(param_1 + 0x177) != '\0') {
    bVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333c3c + uVar2 * 4));
    uVar2 = (uint)bVar1;
    *(byte *)(param_1 + 0x2b6) = bVar1;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08334174 + uVar2 * 4));
  return in_lr;
}

