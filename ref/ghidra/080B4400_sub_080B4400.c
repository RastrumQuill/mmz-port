// sub_080B4400 at 0x080B4400 (thumb)

undefined4 sub_080B4400(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0xf0);
  if (*piVar2 != 0) {
    do {
      piVar2 = piVar2 + 1;
      uVar1 = uVar1 + 1;
      if (*piVar2 == 0) break;
    } while (uVar1 < 3);
  }
  if (uVar1 < 3) {
    *(undefined4 *)(param_1 + 0xf0 + uVar1 * 4) = param_2;
  }
  return in_lr;
}

