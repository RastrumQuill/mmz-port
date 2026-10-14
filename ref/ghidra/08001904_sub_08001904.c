// sub_08001904 at 0x08001904 (thumb)

undefined8 sub_08001904(uint param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xffff;
  if (param_1 < 0x81) {
    uVar3 = (uint)(byte)(&DAT_02004ea4)[param_1];
    iVar5 = uVar3 * 0x10;
    piVar7 = (int *)(&DAT_02004da4 + iVar5);
    if (((int)(uint)DAT_02004da0 >> uVar3 & 1U) == 0) {
      iVar6 = param_1 * 8;
      *piVar7 = (int)(&DAT_087f0000 + iVar6 + *(int *)(&DAT_087f0000 + iVar6));
      *(undefined **)(&DAT_02004da8 + iVar5) =
           &DAT_087f000c + *(int *)(&DAT_087f0004 + iVar6) + iVar6;
      sub_080033DC(&DAT_02004dac + iVar5,&DAT_02004da8 + iVar5);
      sub_080033F0(&DAT_02004dac + iVar5,0);
      DAT_02004da0 = (ushort)(1 << uVar3) | DAT_02004da0;
    }
    else {
      iVar5 = param_1 * 8;
      if ((undefined *)*piVar7 != &DAT_087f0000 + iVar5 + *(int *)(&DAT_087f0000 + iVar5)) {
        uVar3 = 0;
        if ((DAT_02004da0 & 1) != 0) {
          do {
            uVar4 = uVar3 * 0x10000 + 0x10000;
            uVar3 = uVar4 >> 0x10;
            uVar4 = (int)uVar4 >> 0x10;
            if (0xf < (int)uVar4) break;
          } while (((int)(uint)DAT_02004da0 >> (uVar4 & 0xff) & 1U) != 0);
        }
        uVar4 = (uint)(short)uVar3;
        if (uVar4 == 0x10) goto LAB_080019d6;
        (&DAT_02004ea4)[param_1] = (char)uVar3;
        iVar6 = uVar4 * 0x10;
        piVar7 = (int *)(&DAT_02004da4 + iVar6);
        *piVar7 = (int)(&DAT_087f0000 + iVar5 + *(int *)(&DAT_087f0000 + iVar5));
        *(undefined **)(&DAT_02004da8 + iVar6) =
             &DAT_087f000c + *(int *)(&DAT_087f0004 + iVar5) + iVar5;
        sub_080033DC(&DAT_02004dac + iVar6,&DAT_02004da8 + iVar6);
        sub_080033F0(&DAT_02004dac + iVar6,0);
        DAT_02004da0 = (ushort)(1 << (uVar4 & 0xff)) | DAT_02004da0;
      }
    }
    sub_08003458(piVar7 + 2);
    iVar5 = *piVar7;
    bVar1 = *(byte *)(iVar5 + 1);
    sVar2 = ((ushort)*(byte *)(iVar5 + 2) - (ushort)bVar1) + 1;
    if ((param_2 & 0x1ff) == 0) {
      FUN_080c88f0(iVar5 + (int)sVar2 *
                           (uint)*(byte *)(*(char *)((int)piVar7 + 0xd) * 4 +
                                          *(int *)((uint)*(byte *)(piVar7 + 3) * 4 + piVar7[2])) * 2
                           + 4,(int)&DAT_030017a0 + (uint)bVar1 * 2 + (param_2 & 0xffff),
                   (int)sVar2 & 0x1fffff);
    }
    else {
      FUN_080c88f0(iVar5 + (int)sVar2 *
                           (uint)*(byte *)(*(char *)((int)piVar7 + 0xd) * 4 +
                                          *(int *)((uint)*(byte *)(piVar7 + 3) * 4 + piVar7[2])) * 2
                           + 4,(int)&DAT_030017a0 + (bVar1 & 0xf) * 2 + (param_2 & 0xffff),
                   (int)sVar2 & 0x1fffff);
    }
    DAT_02004da2 = (ushort)(1 << ((int)(short)uVar3 & 0xffU)) | DAT_02004da2;
    uVar3 = (uint)*(byte *)((int)piVar7 + 0xf);
  }
  else {
LAB_080019d6:
    uVar3 = 3;
  }
  return CONCAT44(in_lr,uVar3);
}

