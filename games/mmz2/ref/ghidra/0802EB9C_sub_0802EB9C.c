// sub_0802EB9C at 0x0802EB9C (thumb)

undefined4 sub_0802EB9C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b6);
  if (*(char *)(param_1 + 0x177) != '\0') {
    bVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333c4c + uVar2 * 4));
    uVar2 = (uint)bVar1;
    *(byte *)(param_1 + 0x2b6) = bVar1;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08334274 + uVar2 * 4));
  return in_lr;
}

