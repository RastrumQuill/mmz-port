// sub_08013838 at 0x08013838 (thumb)

undefined4 sub_08013838(void)

{
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 0xd) && ((DAT_02002c54 & 0xff) == 4)) {
    if ((byte)DAT_0202f4aa == 0) {
      sub_08003AB0(&UNK_087d5fcc + (DAT_0202f4a9 >> 2 & 1) * 0x14,0x4000);
      sub_08003E14(&UNK_087d5fd8 + (DAT_0202f4a9 >> 2 & 1) * 0x14,0);
    }
    else {
      sub_08003AB0(&UNK_087d5a2c +
                   ((uint)(byte)DAT_0202f4aa * 2 + (DAT_0202f4a9 >> 2) + 0x48) * 0x14,0x4000);
      sub_08003E14(&UNK_087d5a38 +
                   ((uint)(byte)DAT_0202f4aa * 2 + (DAT_0202f4a9 >> 2) + 0x48) * 0x14,0);
    }
  }
  return in_lr;
}

