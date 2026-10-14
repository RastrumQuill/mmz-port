// sub_080D8AA0 at 0x080D8AA0 (thumb)

undefined4 sub_080D8AA0(int param_1)

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
  
  if (DAT_0202e144 == '\0') {
    iVar3 = *(int *)(param_1 + 0x28);
    local_28 = (undefined4 *)(param_1 + 0xbc);
    if (*(char *)(param_1 + 0xc) == '\x01') {
      cVar1 = sub_080D62F4(iVar3 + 0x54);
      if (cVar1 != '\0') {
        *(undefined *)(param_1 + 0xe) = 0;
        sub_080D5430(param_1,param_1 + 0xb4,param_1 + 0x5c,param_1 + 0xc4,2,0,0xfffff400);
      }
      sub_080D8BF0(param_1);
      local_24 = (byte *)(param_1 + 0xc5);
      uVar8 = (uint)*local_24;
      if ((((uVar8 == 0) || (uVar8 = uVar8 - 1, uVar8 == 0)) && ((DAT_0202ec38 & 1) != 0)) &&
         (uVar7 = DAT_0202ec42 & 1, (DAT_0202ec42 & 1) == 0)) {
        sub_080378B4(iVar3,auStack_38,0);
        iVar4 = sub_080D635C(param_1,0,auStack_38,auStack_30,uVar7);
        if (iVar4 != 0) {
          uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar5 & 0x7fffffff;
          iVar4 = sub_08038ED4(param_1 + 0x54,auStack_30);
          iVar4 = sub_0803F7FC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                               (((int)((uVar5 * 2 >> 0x11 & 0xf) + 1) >> 1) + -4) * 2 + iVar4 & 0xff
                              );
          if (iVar4 != 0) {
            uVar8 = DAT_0202e188 * 0x343fd + 0x269ec3;
            DAT_0202e188 = uVar8 & 0x7fffffff;
            uVar8 = (((int)((uVar8 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 4 + 0x3c;
          }
        }
      }
      *local_24 = (byte)uVar8;
    }
    uVar2 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),2);
    *(undefined *)(param_1 + 0x13) = uVar2;
    sub_08012A14(param_1);
    uVar6 = *(undefined4 *)(iVar3 + 0x58);
    *local_28 = *(undefined4 *)(iVar3 + 0x54);
    local_28[1] = uVar6;
  }
  return in_lr;
}

