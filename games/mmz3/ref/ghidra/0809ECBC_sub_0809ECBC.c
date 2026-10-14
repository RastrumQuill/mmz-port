// sub_0809ECBC at 0x0809ECBC (thumb)

undefined4 sub_0809ECBC(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = false;
  iVar3 = *(int *)(param_1 + 0x2c);
  bVar2 = *(byte *)(param_1 + 0x23) & 0xf;
  if ((bVar2 == 1) || (bVar2 == 3)) {
    if (*(int *)(iVar3 + 0xb8) == 0) {
      if (*(int *)(iVar3 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
        return in_lr;
      }
    }
    else if ((*(int *)(iVar3 + 0xb8) == 1) &&
            (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(iVar3 + 0x54))) {
      bVar1 = true;
    }
  }
  if (!bVar1) {
    *(undefined2 *)(iVar3 + 0xa4) = 1;
  }
  return in_lr;
}

