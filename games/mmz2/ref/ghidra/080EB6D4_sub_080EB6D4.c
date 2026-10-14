// sub_080EB6D4 at 0x080EB6D4 (thumb)

undefined4 sub_080EB6D4(int param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ushort uVar11;
  undefined4 in_lr;
  
  if ((DAT_02000d14 & 2) == 0) {
    iVar5 = *(int *)(param_1 + 0x75b8);
    uVar1 = *(undefined *)(param_1 + 0xdd9);
    uVar3 = *(undefined *)(param_1 + 0xdda);
    uVar6 = sub_080D6094(iVar5,uVar1,uVar3);
    uVar8 = uVar6 & 0xff;
    uVar11 = DAT_02000d14 & 1;
    if ((DAT_02000d14 & 1) == 0) {
      uVar3 = sub_080D5DD4(iVar5,uVar1,uVar3);
      uVar6 = sub_080D6094(iVar5,uVar1,uVar3);
      uVar6 = uVar6 & 0xff;
      if (uVar6 == uVar8) {
        cVar4 = sub_080D60CC(uVar6,uVar6);
        if (cVar4 == '\0') {
          sub_080EBBD8(iVar5,uVar6);
        }
        else {
          *(undefined *)(param_1 + 2) = 1;
          *(char *)(param_1 + 3) = (char)uVar11;
          *(ushort *)(param_1 + 4) = uVar11;
          sub_080032EC(1);
        }
      }
      else {
        *(undefined *)(param_1 + 0xdda) = uVar3;
        sub_080032EC(1);
        sub_080EBBD8(iVar5,uVar6);
      }
    }
    else {
      if (uVar8 - 1 < 0x51) {
        uVar9 = (uVar6 << 0x18) >> 0x1b;
        if (((((int)(uint)*(byte *)(iVar5 + 0x233 + uVar9) >> (uVar6 & 7) & 1U) != 0) &&
            (((int)(uint)*(byte *)(iVar5 + 0x23e + uVar9) >> (uVar6 & 7) & 1U) == 0)) &&
           (iVar7 = sub_080D5A34(iVar5,uVar8), 0 < iVar7 * 0x1000000)) {
          *(undefined *)(param_1 + 2) = 0;
          *(undefined *)(param_1 + 3) = 0;
          *(undefined2 *)(param_1 + 4) = 0;
          bVar2 = *(byte *)(param_1 + 0xdd8);
          *(char *)(iVar5 + 0x20a + (uint)bVar2) = (char)uVar6;
          uVar6 = 3;
          do {
            uVar6 = uVar6 - 1;
            if ((uVar6 != bVar2) && (pbVar10 = (byte *)(iVar5 + 0x20a + uVar6), *pbVar10 == uVar8))
            {
              *pbVar10 = 0;
            }
          } while (uVar6 != 0);
          sub_080032EC(2);
          return in_lr;
        }
      }
      sub_080032EC(4);
    }
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    sub_080032EC(3);
  }
  return in_lr;
}

