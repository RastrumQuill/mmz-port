// sub_080E9EE8 at 0x080E9EE8 (thumb)

longlong sub_080E9EE8(int param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uint in_lr;
  
  iVar6 = *(int *)(param_1 + 0x10);
  if ((param_2 & 0xff) == 0) goto LAB_080ea0ae;
  bVar2 = false;
  if ((DAT_02000d16 & 0x40) == 0) {
    if ((DAT_02000d16 & 0x10) == 0) {
      if ((DAT_02000d16 & 0x80) != 0) {
        sub_080032EC(1);
        iVar7 = *(byte *)(param_1 + 4) + 5;
        goto LAB_080e9f56;
      }
      if ((DAT_02000d16 & 0x20) != 0) {
        sub_080032EC(1);
        bVar1 = *(byte *)(param_1 + 4);
        cVar3 = sub_080EF2B8((uint)bVar1,5);
        iVar7 = bVar1 + 4;
        goto LAB_080e9f82;
      }
    }
    else {
      sub_080032EC(1);
      bVar1 = *(byte *)(param_1 + 4);
      cVar3 = sub_080EF2B8((uint)bVar1,5);
      iVar7 = bVar1 + 1;
LAB_080e9f82:
      cVar5 = sub_080EF1E8(iVar7,5);
      *(char *)(param_1 + 4) = cVar3 * '\x05' + cVar5;
    }
  }
  else {
    sub_080032EC(1);
    iVar7 = *(byte *)(param_1 + 4) + 0xf;
LAB_080e9f56:
    uVar4 = sub_080EF1E8(iVar7,0x14);
    *(undefined *)(param_1 + 4) = uVar4;
  }
  if (*(byte *)(param_1 + 4) < 10) {
    uVar9 = (&DAT_0835e678)[*(byte *)(param_1 + 4)];
    if ((((int)(uint)*(ushort *)(iVar6 + 0x200) >> (uVar9 & 0xff) & 1U) != 0) &&
       (bVar2 = true, (DAT_02000d14 & 1) != 0)) {
      if ((DAT_0202ebb4 & 1) == 0) {
        sub_080032EC(2);
        *(char *)(iVar6 + 0x1fc) = (char)uVar9;
      }
      else {
        sub_080032EC(4);
      }
    }
    if (9 < *(byte *)(param_1 + 5)) {
      sub_08002EF0(0x20);
      sub_08002D68(0x20,0);
      sub_08002EF0(0x20);
      sub_08002D68(0x1f,0);
    }
    sub_08002EA0(0x1f);
  }
  else {
    uVar9 = (&DAT_0835e6a0)[*(byte *)(param_1 + 4) - 10];
    if (((*(ushort *)(iVar6 + 0x216) & uVar9) != 0) && (bVar2 = true, (DAT_02000d14 & 1) != 0)) {
      sub_080032EC(2);
      uVar8 = *(ushort *)(iVar6 + 0x218);
      if ((uVar8 & uVar9) == 0) {
        uVar8 = uVar8 | (ushort)uVar9;
      }
      else {
        uVar8 = uVar8 & ~(ushort)uVar9;
      }
      *(ushort *)(iVar6 + 0x218) = uVar8;
    }
    if (*(byte *)(param_1 + 5) < 10) {
      sub_08002EF0(0x1f);
      sub_08002D68(0x1f,0);
      sub_08002EF0(0x1f);
      sub_08002D68(0x20,0);
    }
    sub_08002EA0(0x20);
  }
  *(undefined *)(param_1 + 5) = *(undefined *)(param_1 + 4);
  if ((0 < (int)(param_2 * 0x1000000)) && (bVar2)) {
    sub_080DE510(&DAT_0834c9e4 +
                 (ushort)(&DAT_0834c47c)
                         [*(ushort *)(&DAT_0835e6c8 + (uint)*(byte *)(param_1 + 4) * 2)],0x13,2);
  }
LAB_080ea0ae:
  return (ulonglong)in_lr << 0x20;
}

