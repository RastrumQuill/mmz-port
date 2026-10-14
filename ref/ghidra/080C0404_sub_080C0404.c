// sub_080C0404 at 0x080C0404 (thumb)

undefined4 sub_080C0404(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 0x1af3) != '\0') && ((DAT_02004ca4 & 3) != 0)) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 0x3f;
    }
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    iVar5 = sub_080C8AD0((int)*(short *)(param_1 + 4),7);
    if ((iVar5 << 0x10) >> 0x14 < 0x71) goto LAB_080c0488;
    sub_08001E44(0x6e);
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) && (iVar5 = sub_08001E7C(0x6e), iVar5 == 0)) {
        sub_080BF0A4(param_1,0x700);
      }
      goto LAB_080c0488;
    }
    if (bVar1 != 0) goto LAB_080c0488;
    sub_08001E34(0x6e);
    *(undefined2 *)(param_1 + 4) = 0;
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
LAB_080c0488:
  uVar2 = sub_080C8AD0((int)*(short *)(param_1 + 4),7);
  iVar3 = (int)((uint)uVar2 << 0x10) >> 0x14;
  iVar6 = iVar3 + -0xb;
  DAT_02004f3c._2_2_ = uVar2 & 0xf;
  iVar4 = 0;
  iVar5 = iVar6 * -2;
  puVar7 = &DAT_082b925c;
  do {
    if ((iVar6 <= iVar4) && (iVar4 < iVar3)) {
      sub_080BC0AC(&UNK_082b932a + *puVar7,3,iVar5);
    }
    iVar5 = iVar5 + 2;
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 100);
  return in_lr;
}

