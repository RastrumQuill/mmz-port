// sub_080BFB70 at 0x080BFB70 (thumb)

undefined4 sub_080BFB70(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    sub_080BC7D4();
    sub_08006424();
    DAT_03001ba2 = 0x20;
    DAT_03001ba1 = 0x20;
    DAT_03001ba0 = 0x20;
    DAT_02004f70 = 0;
    DAT_02004f80 = 0;
    DAT_02004f8e = 0xff;
    DAT_02004f90 = 0;
    DAT_030017a0 = 0;
    FUN_08001d6c();
    puVar6 = (uint *)(param_1 + 0x6e94);
    if (*puVar6 == 0) {
      sub_0800F3BC(param_1 + 0x6ea4);
    }
    sub_0801CB20(&DAT_0202b5a0,param_1 + 0x6f24);
    if ((DAT_02022b64 & 0x5c) != 4) {
      DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x3900;
      DAT_02004f3a = 0x206;
      DAT_02004f48 = 0;
      sub_080014E8(&DAT_082f1078,0x4000);
      sub_0800179C(&DAT_082f1084,0);
      FUN_080c88ec(&DAT_082e30bc,(DAT_02004f3a & 0x1f00) * 8 + 0x6000000,0x200);
      *(undefined2 *)(param_1 + 6) = 0;
      if (*puVar6 == 1) {
        *(undefined2 *)(param_1 + 6) = 2;
      }
      uVar2 = *puVar6;
      if (((uVar2 == 0) || (uVar2 == 3)) || (0xc < uVar2)) {
        *(undefined2 *)(param_1 + 6) = 4;
      }
      if (*DAT_02022b20 == 0) {
        *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 1;
      }
      iVar3 = sub_08001018(0,0x170);
      if (((iVar3 == 0) && (iVar3 = sub_08001018(1,0x170), iVar3 == 0)) &&
         (iVar3 = sub_08001018(2,0x170), iVar3 == 0)) {
        *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 8;
      }
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined *)(param_1 + 3) = 0;
      iVar3 = *(short *)(param_1 + 6) * 4;
      cVar1 = (&DAT_082cbe70)[iVar3];
      while (cVar1 == '\0') {
        uVar2 = *(byte *)(param_1 + 3) + 1 & 3;
        *(char *)(param_1 + 3) = (char)uVar2;
        cVar1 = (&DAT_082cbe70)[uVar2 + iVar3];
      }
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto switchD_080bfb88_caseD_1;
    }
    if (*puVar6 == 0x10) {
      uVar4 = 0x800;
    }
    else {
      uVar4 = 0x700;
    }
    goto LAB_080bfed8;
  case 1:
switchD_080bfb88_caseD_1:
    sVar5 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar5;
    DAT_03001ba0 = (undefined)sVar5;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    if (sVar5 < 0x20) break;
    sub_08001E34(0x62);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 2:
    if ((DAT_02004caa & 0x80) == 0) {
      if ((DAT_02004caa & 0x40) != 0) {
        sub_08001EAC(0x29);
        do {
          uVar2 = *(byte *)(param_1 + 3) + 3 & 3;
          *(char *)(param_1 + 3) = (char)uVar2;
        } while ((&DAT_082cbe70)[uVar2 + *(short *)(param_1 + 6) * 4] == '\0');
      }
    }
    else {
      sub_08001EAC(0x29);
      do {
        uVar2 = *(byte *)(param_1 + 3) + 1 & 3;
        *(char *)(param_1 + 3) = (char)uVar2;
      } while ((&DAT_082cbe70)[uVar2 + *(short *)(param_1 + 6) * 4] == '\0');
    }
    if ((DAT_02004caa & 9) != 0) {
      sub_08001EAC(0x2a);
      sub_08001E44(0x62);
      *(undefined2 *)(param_1 + 4) = 0x20;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    }
    break;
  case 3:
    sVar5 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar5;
    DAT_03001ba0 = (undefined)sVar5;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    if (sVar5 != 0) break;
    DAT_03001ba2 = 0x20;
    DAT_03001ba1 = 0x20;
    DAT_03001ba0 = 0x20;
    DAT_02004f30 = DAT_02004f30 & 0xc7ff;
    *(undefined2 *)(param_1 + 4) = 0x60;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    iVar3 = *(ushort *)(param_1 + 4) - 1;
    *(short *)(param_1 + 4) = (short)iVar3;
    if ((iVar3 * 0x10000 >> 0x10 == -1) || (iVar3 = sub_08001E7C(0x62), iVar3 == 0)) {
      cVar1 = *(char *)(param_1 + 3);
      if (cVar1 == '\0') {
        if (DAT_02022b34 < 99) {
          DAT_02022b34 = DAT_02022b34 + 1;
        }
        *DAT_02022b20 = *DAT_02022b20 - 1;
        uVar4 = 0x200;
      }
      else if (cVar1 == '\x01') {
        DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x40;
        uVar4 = 0x700;
      }
      else {
        if (cVar1 != '\x02') {
          FUN_08000da4();
          break;
        }
        uVar4 = 0x100;
      }
LAB_080bfed8:
      sub_080BF0A4(param_1,uVar4);
    }
    break;
  default:
    break;
  }
  if ((DAT_03001740 & 1) != 0) {
    DAT_02004f48 = CONCAT22(DAT_02004f48._2_2_ + -1,(short)DAT_02004f48 + 1);
  }
  if ((byte)(*(char *)(param_1 + 2) - 1U) < 3) {
    sub_080BC0AC(&DAT_082b95cc,0xb,5);
    if ((&DAT_082cbe70)[*(short *)(param_1 + 6) * 4] != '\0') {
      sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[*DAT_02022b20 + 0x1e],0x18,8);
    }
    sub_080BC0AC(&UNK_082b932a +
                 (ushort)(&DAT_082b8f3c)
                         [(byte)(&DAT_082cbea8)
                                [(uint)(byte)(&DAT_082cbe70)[*(short *)(param_1 + 6) * 4] * 4]],7,8)
    ;
    sub_080BC0AC(&UNK_082b932a +
                 (ushort)(&DAT_082b8f3c)
                         [(byte)(&DAT_082cbea9)
                                [(uint)(byte)(&DAT_082cbe71)[*(short *)(param_1 + 6) * 4] * 4]],7,10
                );
    sub_080BC0AC(&UNK_082b932a +
                 (ushort)(&DAT_082b8f3c)
                         [(byte)(&DAT_082cbeaa)
                                [(uint)(byte)(&DAT_082cbe72)[*(short *)(param_1 + 6) * 4] * 4]],7,
                 0xc);
    sub_080BC0AC(&UNK_082b932a +
                 (ushort)(&DAT_082b8f3c)
                         [(byte)(&DAT_082cbeab)
                                [(uint)(byte)(&DAT_082cbe73)[*(short *)(param_1 + 6) * 4] * 4]],7,
                 0xe);
    sub_080BC0AC(&UNK_082b932a,5,(uint)*(byte *)(param_1 + 3) * 2 + 8);
  }
  return in_lr;
}

