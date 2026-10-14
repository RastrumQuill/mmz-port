// sub_08008530 at 0x08008530 (thumb)

undefined4 sub_08008530(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar2 = param_1 * 0x1000000 + 0x3e000000;
  uVar6 = uVar2 >> 0x18;
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_0833559c)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_0833559c)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_02002474 = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_0833559c)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_0833559c)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_0833559c)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 8);
      }
      else {
        DAT_02002474 = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 8);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355a4)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355a4)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_02002475 = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355a4)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355a4)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355a4)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 4);
      }
      else {
        DAT_02002475 = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 4);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355a8)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355a8)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_02002476 = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355a8)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355a8)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355a8)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
      }
      else {
        DAT_02002476 = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355aa)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355aa)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_02002477 = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355aa)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355aa)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355aa)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
      }
      else {
        DAT_02002477 = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355ac)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355ac)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_02002478 = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355ac)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355ac)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355ac)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 4);
      }
      else {
        DAT_02002478 = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 4);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355b0)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355b0)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_02002479 = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355b0)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355b0)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355b0)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
      }
      else {
        DAT_02002479 = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355b2)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355b2)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_0200247a = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355b2)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355b2)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355b2)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
      }
      else {
        DAT_0200247a = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355b4)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355b4)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_0200247b = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355b4)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355b4)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355b4)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
      }
      else {
        DAT_0200247b = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355b6)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355b6)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_0200247c = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355b6)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355b6)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355b6)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
      }
      else {
        DAT_0200247c = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355b8)[(short)uVar5]) {
      if (((int)(uint)(byte)(&DAT_02002430)
                            [((uint)(byte)(&DAT_083355b8)[(short)uVar5] << 0x18) >> 0x1b] >>
           (uVar6 & 7) & 1U) == 0) {
        DAT_0200247d = (char)uVar5 + '\x01';
        uVar5 = 0;
        do {
          (&DAT_02002430)[(byte)(&DAT_083355b8)[(short)uVar5] >> 3] =
               (&DAT_02002430)[(byte)(&DAT_083355b8)[(short)uVar5] >> 3] &
               ~(byte)(1 << ((byte)(&DAT_083355b8)[(short)uVar5] & 7));
          uVar3 = (int)(short)uVar5 + 1;
          uVar5 = uVar3 & 0xffff;
        } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
      }
      else {
        DAT_0200247d = '\0';
      }
      break;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 2);
  uVar5 = 0;
  do {
    if (uVar6 == (byte)(&DAT_083355ba)[(short)uVar5]) {
      uVar2 = 0x3f;
      do {
        uVar6 = (int)(uVar2 << 0x10) >> 0x10;
        (&DAT_02002430)[(int)(uVar2 << 0x10) >> 0x13] =
             (&DAT_02002430)[(int)(uVar2 << 0x10) >> 0x13] & ~(byte)(1 << (uVar6 & 7));
        uVar6 = uVar6 + 1;
        uVar2 = uVar6 & 0xffff;
      } while ((int)(uVar6 * 0x10000) >> 0x10 < 0xb7);
      DAT_0200247d = 0;
      DAT_0200247c = 0;
      DAT_0200247b = 0;
      DAT_0200247a = 0;
      DAT_02002479 = 0;
      DAT_02002478 = 0;
      DAT_02002477 = 0;
      DAT_02002476 = 0;
      DAT_02002475 = 0;
      DAT_02002474 = 0;
      sub_08008500();
      return in_lr;
    }
    uVar3 = (int)(short)uVar5 + 1;
    uVar5 = uVar3 & 0xffff;
  } while ((int)(uVar3 * 0x10000) >> 0x10 < 4);
  pbVar4 = &DAT_02002430 + (uVar2 >> 0x1b);
  bVar1 = *pbVar4;
  uVar6 = uVar6 & 7;
  if (((int)(uint)bVar1 >> uVar6 & 1U) == 0) {
    *pbVar4 = bVar1 | (byte)(1 << uVar6);
    sub_08008500();
  }
  else {
    *pbVar4 = bVar1 & ~(byte)(1 << uVar6);
    sub_08008500();
  }
  return in_lr;
}

