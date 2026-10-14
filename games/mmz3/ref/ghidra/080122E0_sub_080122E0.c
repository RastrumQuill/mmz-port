// sub_080122E0 at 0x080122E0 (thumb)

undefined4 sub_080122E0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 in_lr;
  
  if ((DAT_02002c56 >> 8 == 0xb) && ((DAT_02002c56 & 0xff) == 1)) {
    uVar1 = sub_080FE460((undefined)DAT_0202f4b4,9);
    sub_08003AB0(&UNK_087d61d4 + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080FE460((undefined)DAT_0202f4b4,9);
    sub_08003E14(&UNK_087d61e0 + (uVar1 & 0xff) * 0x14,0);
  }
  if (DAT_02002c56 >> 8 != 0xb) {
    return in_lr;
  }
  if ((DAT_02002c56 & 0xff) != 4) {
    return in_lr;
  }
  if ((DAT_02030154 & 1) != 0) {
    uVar1 = sub_080FE460(DAT_0202f4b8._1_1_,3);
    sub_08003AB0(&UNK_087d633c + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080FE460(DAT_0202f4b8._1_1_,3);
    sub_08003E14(&UNK_087d6348 + (uVar1 & 0xff) * 0x14,0);
  }
  if ((DAT_02030154 & 2) == 0) goto LAB_08012534;
  sub_08003AB0(&UNK_087d62ec + (uint)((byte)DAT_0202f4b8 >> 3) * 0x14,0x4000);
  sub_08003E14(&UNK_087d62f8 + (uint)((byte)DAT_0202f4b8 >> 3) * 0x14,0);
  if ((DAT_02030154 & 2) == 0) goto LAB_08012534;
  if (DAT_0202f4b4._2_2_ < 0xb4) {
    sub_08003AB0(&DAT_087d6170,0x4000);
    puVar2 = (undefined4 *)&DAT_087d617c;
  }
  else {
    if (DAT_0202f4b4._2_2_ < 0xc6) {
      iVar3 = FUN_080fe2f8(DAT_0202f4b4._2_2_ - 0xb4,6);
      sub_08003AB0(&UNK_087d6184 + iVar3 * 0x14,0x4000);
      iVar3 = FUN_080fe2f8(DAT_0202f4b4._2_2_ - 0xb4,6);
      puVar2 = (undefined4 *)(&UNK_08704c50 + iVar3 * 0x14);
    }
    else {
      if (DAT_0202f4b4._2_2_ < 0x17a) {
        sub_08003AB0(&DAT_087d61c0,0x4000);
        puVar2 = (undefined4 *)&DAT_087d61cc;
        goto LAB_0801250a;
      }
      if (0x18b < DAT_0202f4b4._2_2_) {
        sub_08003AB0(&DAT_087d6170,0x4000);
        sub_08003E14(&DAT_087d617c,0);
        goto LAB_08012534;
      }
      iVar3 = FUN_080fe2f8(DAT_0202f4b4._2_2_ - 0x17a,6);
      sub_08003AB0(&UNK_087d5a2c + (0x60 - iVar3) * 0x14,0x4000);
      iVar3 = FUN_080fe2f8(DAT_0202f4b4._2_2_ - 0x17a,6);
      puVar2 = &DAT_087044f8 + (0x60 - iVar3) * 5;
    }
    puVar2 = puVar2 + 0x34550;
  }
LAB_0801250a:
  sub_08003E14(puVar2,0);
LAB_08012534:
  if ((DAT_02030154 & 8) != 0) {
    iVar3 = sub_080FE460((undefined2)DAT_0202f4bc,3);
    sub_08003AB0(&UNK_087d62c4 + ((uint)(iVar3 << 0x10) >> 0x16 & 1) * 0x14,0x4000);
    iVar3 = sub_080FE460((undefined2)DAT_0202f4bc,3);
    sub_08003E14(&UNK_087d62d0 + ((uint)(iVar3 << 0x10) >> 0x16 & 1) * 0x14,0);
  }
  if ((DAT_02030154 & 0x10) != 0) {
    sub_08003AB0(&UNK_087d63dc + (DAT_0202f4bc._2_2_ >> 7 & 3) * 0x14,0x4000);
    sub_08003E14(&UNK_087d63e8 + (DAT_0202f4bc._2_2_ >> 7 & 3) * 0x14,0);
  }
  if ((DAT_02030154 & 0x20) != 0) {
    uVar1 = 0;
    cVar5 = '\0';
    if (6 < DAT_0202f4b4._1_1_) {
      do {
        uVar4 = uVar1 * 0x1000000 + 0x1000000;
        uVar1 = uVar4 >> 0x18;
        cVar5 = (char)(uVar4 >> 0x18);
      } while ((byte)(&DAT_0833f014)[(int)uVar4 >> 0x18] < DAT_0202f4b4._1_1_);
    }
    sub_08003AB0(&DAT_087d6210 + cVar5 * 0x14,0x4000);
    sub_08003E14(&UNK_087d621c + cVar5 * 0x14,0);
  }
  return in_lr;
}

