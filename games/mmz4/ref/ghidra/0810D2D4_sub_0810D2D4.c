// sub_0810D2D4 at 0x0810D2D4 (thumb)

undefined4
sub_0810D2D4(byte *param_1,undefined param_2,undefined param_3,ushort param_4,ushort param_5)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  undefined4 in_lr;
  
  if (DAT_0202edc4 < 0x60) {
    uVar4 = 0;
    if (param_4 != 0) {
      bVar1 = *param_1;
      if (0xfc < bVar1) {
        return in_lr;
      }
      do {
        if (bVar1 == 0xfc) {
          uVar4 = uVar4 + 1;
        }
        param_1 = param_1 + 1;
      } while ((uVar4 < param_4) && (bVar1 = *param_1, bVar1 < 0xfd));
    }
    if (*param_1 < 0xfd) {
      (&DAT_0202edc8)[DAT_0202edc4] = param_1;
      (&DAT_0202ef48)[DAT_0202edc4] = param_2;
      (&DAT_0202efa8)[DAT_0202edc4] = param_3;
      sVar3 = 0;
      if (uVar4 < param_5) {
        bVar1 = *param_1;
        while (bVar1 < 0xfd) {
          if (bVar1 == 0xf9) {
            sVar2 = sub_0810D1A4(DAT_0202f354);
            sVar3 = sVar3 + sVar2;
          }
          if (*param_1 < 0xf0) {
            sVar3 = sVar3 + 1;
          }
          if (*param_1 == 0xfc) {
            uVar4 = uVar4 + 1;
          }
          param_1 = param_1 + 1;
          if (param_5 <= uVar4) break;
          bVar1 = *param_1;
        }
      }
      (&DAT_0202f008)[DAT_0202edc4] = sVar3;
      DAT_0202edc4 = DAT_0202edc4 + 1;
    }
  }
  return in_lr;
}

