// sub_080ADA54 at 0x080ADA54 (thumb)

undefined4 sub_080ADA54(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\0') &&
     ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0 ||
       (sVar5 = *(short *)(param_1 + 0xbc) + -1, *(short *)(param_1 + 0xbc) = sVar5, sVar5 == -1))
      || ((*(uint *)(param_1 + 0x8c) & 4) != 0)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080ADC00(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto LAB_080adb9e;
    sub_08002B10(0x13a);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        iVar6 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x5c) = iVar6;
        if (iVar6 < -0x400) {
          *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar6 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
        *(int *)(param_1 + 0x60) = iVar6;
        if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x2f04) &&
           (iVar6 < 0)) {
          sub_0801CF00(param_1,0x2f05);
          *(undefined4 *)(param_1 + 0x68) = 0xfffffffc;
        }
        if (*(int *)(param_1 + 0x60) < -0x80) {
          *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
        }
      }
      goto LAB_080adb9e;
    }
    if (bVar1 != 0) goto LAB_080adb9e;
    puVar7 = (ushort *)(param_1 + 0xbe);
    *(ushort *)(param_1 + 0x50) = *puVar7;
    *(ushort *)(param_1 + 0x52) = *puVar7;
    uVar2 = *puVar7;
    *puVar7 = uVar2 + 4;
    if ((ushort)(uVar2 + 4) < 0x100) goto LAB_080adb9e;
    sub_0801CC9C(param_1);
    sub_0801CF00(param_1,0x2f04);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885f954,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080adb9e:
  sub_0801CFF0(param_1);
  uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x5000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

