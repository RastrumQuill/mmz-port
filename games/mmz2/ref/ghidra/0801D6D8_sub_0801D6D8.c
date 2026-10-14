// sub_0801D6D8 at 0x0801D6D8 (thumb)

undefined8 sub_0801D6D8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 1) == 0) {
    if (*(char *)(param_1 + 1) == '\0') {
      uVar2 = 0;
      do {
        if (DAT_0202ec30 == (byte)(&DAT_08333370)[uVar2]) {
          if (((int)(uint)(&DAT_0202ebb4)[(ushort)L"BCDEFGHIJK"[uVar2] >> 3] >>
               ((ushort)L"BCDEFGHIJK"[uVar2] & 7) & 1U) != 0) {
            if (((uint)*(ushort *)(DAT_02036e98 + 0x216) & (&DAT_08333390)[uVar2]) == 0) {
              *(ushort *)(DAT_02036e98 + 0x216) =
                   *(ushort *)(DAT_02036e98 + 0x216) | (ushort)(&DAT_08333390)[uVar2];
              sub_080DEF4C((&DAT_083333b8)[uVar2]);
              *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10 << (uVar2 & 0xff);
            }
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 10);
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    }
    if (DAT_0202f65a != 0) {
      uVar1 = 1;
      goto LAB_0801d79a;
    }
  }
  uVar1 = 0;
LAB_0801d79a:
  return CONCAT44(in_lr,uVar1);
}

