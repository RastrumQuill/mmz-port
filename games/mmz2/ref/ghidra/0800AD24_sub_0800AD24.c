// sub_0800AD24 at 0x0800AD24 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800AD24(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (*param_1 >> 0xc != 0x146) {
    piVar1 = &DAT_08314e10;
    do {
      piVar1 = piVar1 + 3;
      uVar3 = uVar3 + 1;
      if (0x19 < (int)uVar3) {
        return in_lr;
      }
    } while (*param_1 >> 0xc != *piVar1);
  }
  if ((int)uVar3 < 0x1a) {
    _DAT_0202e020 = _DAT_0202e020 | 1 << (uVar3 & 0xff);
    if ((int)uVar3 < 0x19) {
      piVar1 = &DAT_08314e18 + uVar3 * 3;
      piVar2 = &DAT_08314e10 + uVar3 * 3;
      uVar4 = uVar3;
      do {
        uVar4 = uVar4 + 1;
        if ((piVar2[3] != *piVar2 + 1) || (*piVar1 <= piVar1[3])) break;
        piVar1 = piVar1 + 3;
        piVar2 = piVar2 + 3;
        _DAT_0202e020 = _DAT_0202e020 | 1 << (uVar4 & 0xff);
      } while ((int)uVar4 < 0x19);
    }
    if (0 < (int)uVar3) {
      piVar1 = (int *)(&UNK_08314e0c + uVar3 * 0xc);
      piVar2 = &DAT_08314e04 + uVar3 * 3;
      do {
        uVar3 = uVar3 - 1;
        if (*piVar2 != piVar2[3] + -1) {
          return in_lr;
        }
        if (piVar1[3] <= *piVar1) {
          return in_lr;
        }
        piVar1 = piVar1 + -3;
        piVar2 = piVar2 + -3;
        _DAT_0202e020 = _DAT_0202e020 | 1 << (uVar3 & 0xff);
      } while (0 < (int)uVar3);
    }
  }
  return in_lr;
}

