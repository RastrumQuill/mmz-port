// sub_0800ABE8 at 0x0800ABE8 (thumb)

undefined4 sub_0800ABE8(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  undefined auStack_3c [8];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined *local_24;
  undefined4 uStack_4;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar3 = (ushort *)(param_1 + 0x68);
  if ((DAT_0202e01d != '\0') && (*puVar3 < 0xa0)) {
    *puVar3 = *puVar3 + 1;
  }
  puVar4 = (ushort *)(param_1 + 0x6a);
  uStack_4 = in_lr;
  if (*puVar3 >> 3 != *puVar4) {
    sub_080EF3F0(auStack_3c,&DAT_080ef698,8);
    uVar5 = 0;
    local_24 = auStack_3c;
    do {
      iVar7 = (int)((uVar5 - (*puVar4 - 10)) * 0x10000) >> 0x10;
      if ((-1 < iVar7) && (iVar6 = (int)(uVar5 * 0x10000) >> 0x10, iVar6 < 6)) {
        *(undefined2 *)(local_24 + 4) = *(undefined2 *)(&DAT_08315008 + (iVar7 + iVar6 * 0xc) * 2);
        sub_0800860C(iVar7 + 0x1b4,iVar6 + 0x16,auStack_3c);
        local_34 = iVar7 * 0x1000 + 0x1b5800;
        local_30 = iVar6 * 0x1000 + 0x17200;
        iVar1 = sub_080EF1E8(iVar7 * 2 + iVar6,5);
        local_2c = (iVar1 + -2) * 0x40;
        local_28 = sub_080EF1E8(iVar6 * iVar7 * 2,3);
        local_28 = local_28 * -0x100;
        sub_080B6508((iVar7 + iVar6) % 2 + 2U & 0xff,&local_34);
        sub_080AC60C(3,&local_34);
      }
      uVar2 = uVar5 * 0x10000 + 0x10000;
      uVar5 = uVar2 >> 0x10;
    } while ((int)uVar2 >> 0x10 <= (int)(uint)*puVar4);
    *puVar4 = *puVar3 >> 3;
  }
  return uStack_4;
}

