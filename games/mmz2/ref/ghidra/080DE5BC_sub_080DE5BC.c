// sub_080DE5BC at 0x080DE5BC (thumb)

undefined4
sub_080DE5BC(byte *param_1,undefined param_2,undefined param_3,ushort param_4,ushort param_5)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_0202f0a4;
  if (DAT_0202f0a4 < 0x60) {
    uVar5 = 0;
    if (param_4 != 0) {
      bVar2 = *param_1;
      if (0xfc < bVar2) {
        return in_lr;
      }
      do {
        if (bVar2 == 0xfc) {
          uVar5 = uVar5 + 1;
        }
        param_1 = param_1 + 1;
      } while ((uVar5 < param_4) && (bVar2 = *param_1, bVar2 < 0xfd));
    }
    if (*param_1 < 0xfd) {
      (&DAT_0202f0a8)[DAT_0202f0a4] = param_1;
      (&DAT_0202f228)[iVar1] = param_2;
      (&DAT_0202f288)[DAT_0202f0a4] = param_3;
      sVar4 = 0;
      if (uVar5 < param_5) {
        bVar2 = *param_1;
        while (bVar2 < 0xfd) {
          if (bVar2 == 0xf9) {
            sVar3 = sub_080DE4A0(DAT_0202f634);
            sVar4 = sVar4 + sVar3;
          }
          if (*param_1 < 0xf0) {
            sVar4 = sVar4 + 1;
          }
          if (*param_1 == 0xfc) {
            uVar5 = uVar5 + 1;
          }
          param_1 = param_1 + 1;
          if (param_5 <= uVar5) break;
          bVar2 = *param_1;
        }
      }
      (&DAT_0202f2e8)[DAT_0202f0a4] = sVar4;
      DAT_0202f0a4 = DAT_0202f0a4 + 1;
    }
  }
  return in_lr;
}

