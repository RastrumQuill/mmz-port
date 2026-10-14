// sub_080792A0 at 0x080792A0 (thumb)

undefined4 sub_080792A0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  sub_080128D4();
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * -2 + 1) * *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + -3;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return in_lr;
}

