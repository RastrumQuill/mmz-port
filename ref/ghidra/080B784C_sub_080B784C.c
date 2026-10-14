// sub_080B784C at 0x080B784C (thumb)

undefined4 sub_080B784C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined auStack_38 [8];
  undefined auStack_30 [8];
  undefined4 *local_28;
  byte *local_24;
  
  if (DAT_02022878 == '\0') {
    iVar3 = *(int *)(param_1 + 0x20);
    local_28 = (undefined4 *)(param_1 + 0xc4);
    if (*(char *)(param_1 + 0xc) == '\x01') {
      cVar1 = sub_080B5154(iVar3 + 0x4c);
      if (cVar1 != '\0') {
        *(undefined *)(param_1 + 0xe) = 0;
        sub_080B4200(param_1,param_1 + 0xbc,param_1 + 0x54,param_1 + 0xcc,2,0,0xfffff400);
      }
      sub_080B79B8(param_1);
      local_24 = (byte *)(param_1 + 0xcd);
      uVar8 = (uint)*local_24;
      if ((((uVar8 == 0) || (uVar8 = uVar8 - 1, uVar8 == 0)) && ((DAT_02022b64 & 1) != 0)) &&
         (uVar7 = DAT_02022b6e & 1, (DAT_02022b6e & 1) == 0)) {
        sub_08018FF8(iVar3,auStack_38,0);
        iVar4 = sub_080B52CC(param_1,0,auStack_38,auStack_30,uVar7);
        if (iVar4 != 0) {
          uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
          DAT_02022890 = uVar5 & 0x7fffffff;
          iVar4 = sub_080259C0(param_1 + 0x4c,auStack_30);
          iVar4 = sub_0802951C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                               (((int)((uVar5 * 2 >> 0x11 & 0xf) + 1) >> 1) + -4) * 2 + iVar4 +
                               0x100U & 0xff);
          if (iVar4 != 0) {
            uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
            DAT_02022890 = uVar8 & 0x7fffffff;
            uVar8 = (((int)((uVar8 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 4 + 0x3c;
          }
        }
      }
      *local_24 = (byte)uVar8;
    }
    uVar2 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),2);
    *(undefined *)(param_1 + 0x13) = uVar2;
    sub_080B50EC(param_1);
    uVar6 = *(undefined4 *)(iVar3 + 0x50);
    *local_28 = *(undefined4 *)(iVar3 + 0x4c);
    local_28[1] = uVar6;
  }
  return in_lr;
}

