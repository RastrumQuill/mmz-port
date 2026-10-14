// sub_0805A978 at 0x0805A978 (thumb)

undefined4 sub_0805A978(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08048A54(param_1);
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
        sub_080033F0(param_1 + 0x6c,9);
        uVar5 = 0xffffff40;
        *(undefined4 *)(param_1 + 0x54) = 0xffffff40;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar5 = 0xc0;
        }
        *(undefined4 *)(param_1 + 0x54) = uVar5;
        *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x100;
        *(undefined2 *)(param_1 + 0xc2) = 0x2000;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      iVar4 = *(int *)(param_1 + 0x58) + 0x20;
      *(int *)(param_1 + 0x58) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x58) = 0x700;
      }
      psVar6 = (short *)(param_1 + 0xc2);
      sVar2 = *psVar6;
      *psVar6 = sVar2 + -0xc0;
      if ((ushort)(sVar2 + 0x7f3fU) < 0x5fff) {
        *psVar6 = -0x2000;
      }
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        cVar3 = (char)((ushort)*psVar6 >> 8);
      }
      else {
        cVar3 = -(char)((ushort)*psVar6 >> 8);
      }
      *(char *)(param_1 + 0x1f) = cVar3;
      sub_080599B0(param_1);
      cVar3 = sub_080598F0(param_1);
      if ((cVar3 != '\0') && (0 < *(int *)(param_1 + 0x58))) {
        sub_0805998C(param_1);
        sub_080489E4(param_1);
        *(undefined *)(param_1 + 0x1f) = 0;
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_0805ab36;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_0800561C(param_1 + 0x74,&DAT_082afda0);
    iVar4 = sub_08005428(DAT_02022e98);
    if (iVar4 != 0) {
      *(undefined *)(iVar4 + 9) = 0x19;
      *(undefined4 *)(iVar4 + 0x14) = 0x8059c51;
      *(undefined2 *)(iVar4 + 0x1c) = DAT_02022ed2;
      *(undefined *)(iVar4 + 0x1e) = DAT_02022f49;
      *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(undefined *)(iVar4 + 0x10) = 3;
      *(int *)(iVar4 + 0x20) = param_1;
      *(undefined *)(iVar4 + 0x11) = 1;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082afdd8);
    sub_080033F0(param_1 + 0x6c,10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0x12) = 2;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0805ab36:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

