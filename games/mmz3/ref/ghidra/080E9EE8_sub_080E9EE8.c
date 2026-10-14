// sub_080E9EE8 at 0x080E9EE8 (thumb)

undefined4 sub_080E9EE8(int *param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar4 = *param_1;
  if (param_1[3] != 0) {
    DAT_020023c0 = DAT_020023c0 | 0x100;
    sVar1 = *(short *)(param_1[3] + 0xa4);
    *(undefined4 *)(iVar4 + 0x2b8) = 0x124c124b;
    *(undefined4 *)(iVar4 + 0x2f8) = 0x126c126b;
    piVar3 = (int *)(iVar4 + 0x278);
    uVar2 = (uint)sVar1;
    if ((int)uVar2 < 0x21) {
      uVar5 = 0;
      do {
        if ((int)uVar2 < (int)(uVar5 + 4)) {
          if ((int)uVar2 < (int)uVar5) {
            *piVar3 = 0x12a512a4;
          }
          else {
            *piVar3 = (uVar2 & 3) * -0x200020 + 0x12a512a4;
          }
        }
        else {
          *piVar3 = 0x12251224;
        }
        uVar5 = uVar5 + 4 & 0xffff;
        piVar3 = piVar3 + -0x10;
      } while (uVar5 < 0x20);
    }
    else if ((int)uVar2 < 0x41) {
      uVar5 = 0;
      uVar2 = (int)((uVar2 - 0x20) * 0x10000) >> 0x10;
      do {
        if ((int)uVar2 < (int)(uVar5 + 4)) {
          if ((int)uVar2 < (int)uVar5) {
            *piVar3 = 0x12a712a6;
          }
          else {
            *piVar3 = (uVar2 & 3) * -0x200020 + 0x12a712a6;
          }
        }
        else {
          *piVar3 = 0x12271226;
        }
        uVar5 = uVar5 + 4 & 0xffff;
        piVar3 = piVar3 + -0x10;
      } while (uVar5 < 0x20);
    }
    else {
      uVar5 = 0;
      uVar2 = (int)((uVar2 - 0x40) * 0x10000) >> 0x10;
      do {
        if ((int)uVar2 < (int)(uVar5 + 4)) {
          if ((int)uVar2 < (int)uVar5) {
            *piVar3 = 0x12a912a8;
          }
          else {
            *piVar3 = (uVar2 & 3) * -0x200020 + 0x12a912a8;
          }
        }
        else {
          *piVar3 = 0x12291228;
        }
        uVar5 = uVar5 + 4 & 0xffff;
        piVar3 = piVar3 + -0x10;
      } while (uVar5 < 0x20);
    }
    *piVar3 = 0x12031202;
  }
  return in_lr;
}

