// sub_080DECC8 at 0x080DECC8 (thumb)

undefined4 sub_080DECC8(int *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar6 = param_1[3];
  iVar8 = *param_1;
  if (iVar6 != 0) {
    DAT_02000f90 = DAT_02000f90 | 0x100;
    sVar2 = *(short *)(iVar6 + 0xa4);
    bVar1 = *(byte *)(iVar6 + 0x1fd);
    uVar4 = (uint)bVar1;
    *(undefined4 *)(iVar8 + 0x2b8) = 0x124c124b;
    *(undefined4 *)(iVar8 + 0x2f8) = 0x126c126b;
    piVar7 = (int *)(iVar8 + 0x278);
    uVar3 = (uint)sVar2;
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar5 = (uint)(short)(sVar2 - (ushort)bVar1);
        do {
          if ((int)uVar5 < (int)(uVar3 + 4)) {
            if ((int)uVar5 < (int)uVar3) {
              *piVar7 = 0x12a712a6;
            }
            else {
              *piVar7 = (uVar5 & 3) * -0x200020 + 0x12a712a6;
            }
          }
          else {
            *piVar7 = 0x12271226;
          }
          uVar3 = uVar3 + 4 & 0xffff;
          piVar7 = piVar7 + -0x10;
        } while (uVar3 < uVar4);
      }
    }
    else {
      uVar5 = 0;
      if (uVar4 != 0) {
        do {
          if ((int)uVar3 < (int)(uVar5 + 4)) {
            if ((int)uVar3 < (int)uVar5) {
              *piVar7 = 0x12a512a4;
            }
            else {
              *piVar7 = (uVar3 & 3) * -0x200020 + 0x12a512a4;
            }
          }
          else {
            *piVar7 = 0x12251224;
          }
          uVar5 = uVar5 + 4 & 0xffff;
          piVar7 = piVar7 + -0x10;
        } while (uVar5 < uVar4);
      }
    }
    *piVar7 = 0x12031202;
  }
  return in_lr;
}

