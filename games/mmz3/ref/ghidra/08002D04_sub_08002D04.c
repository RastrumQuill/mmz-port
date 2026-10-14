// sub_08002D04 at 0x08002D04 (thumb)

undefined4 sub_08002D04(void)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = DAT_04000124;
  local_24 = DAT_04000120;
  uVar4 = 0;
  do {
    sub_08000EAC(*(undefined2 *)((int)&local_24 + uVar4 * 2),uVar4,DAT_020017b9);
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  if (DAT_020017b8 == '\0') {
    uVar4 = 0;
    if (DAT_02001793 != 0) {
      do {
        if ((&DAT_020017ba)[uVar4] == '\x01') {
          if ((DAT_020017a6 != *(short *)((int)&local_24 + uVar4 * 2)) && (DAT_02000009 != '\0')) {
            DAT_020017a3 = 1;
          }
        }
        else if (((&DAT_020017ba)[uVar4] == '\x02') &&
                (*(short *)((int)&local_24 + uVar4 * 2) == -0x3a)) {
          (&DAT_020017b0)[uVar4] = 0;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < DAT_02001793);
    }
    DAT_020017a6 = 0;
    DAT_02000009 = '\x01';
  }
  else {
    uVar4 = (uint)(byte)(DAT_02002125 + DAT_02002124);
    if (0x1d < uVar4) {
      uVar4 = uVar4 - 0x1e & 0xff;
    }
    if (DAT_02002125 < 0x1e) {
      uVar5 = 0;
      if (DAT_02001793 != 0) {
        do {
          if ((&DAT_020017ba)[uVar5] == '\x01') {
            uVar1 = *(ushort *)((int)&local_24 + uVar5 * 2);
            DAT_020017a6 = uVar1 + DAT_020017a6;
            DAT_0200000c = DAT_0200000c | uVar1;
            (&DAT_020019a4)[uVar5 * 0xf0 + (uint)DAT_020017b9 * 0x1e + uVar4] = uVar1;
          }
          else if ((&DAT_020017ba)[uVar5] == '\x02') {
            if (DAT_020017b8 == '\x04') {
              psVar3 = &DAT_020017a8 + uVar5;
              sVar2 = *(short *)((int)&local_24 + uVar5 * 2);
LAB_08002e86:
              *psVar3 = sVar2;
            }
            else if (DAT_020017b8 == '\x03') {
              (&DAT_020017b0)[uVar5] =
                   (&DAT_020017b0)[uVar5] + 1 + *(short *)((int)&local_24 + uVar5 * 2);
            }
            else if (DAT_020017b8 == '\x05') {
              psVar3 = &DAT_020017b0 + uVar5;
              sVar2 = *(short *)((int)&local_24 + uVar5 * 2) + *psVar3;
              goto LAB_08002e86;
            }
          }
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < DAT_02001793);
      }
    }
    else {
      DAT_020017a4 = DAT_020017a4 | 2;
    }
    DAT_020017b9 = DAT_020017b9 + 1;
    if ((DAT_020017b9 == 8) && (DAT_0200000c != 0)) {
      DAT_02002125 = DAT_02002125 + 1;
      DAT_0200000c = 0;
    }
  }
  return in_lr;
}

