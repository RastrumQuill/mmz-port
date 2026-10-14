// sub_0801E424 at 0x0801E424 (thumb)

undefined8 sub_0801E424(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 in_lr;
  
  uVar3 = *(ushort *)(param_1 + 0x90);
  uVar2 = uVar3 & 0x80;
  if ((uVar3 & 0x80) != 0) {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    uVar4 = 5;
    goto LAB_0801e6fc;
  }
  *(char *)(param_1 + 0x45) = (char)uVar2;
  uVar7 = *(byte *)(param_1 + 10) & 0xdf;
  *(char *)(param_1 + 10) = (char)uVar7;
  if ((*(byte *)(param_1 + 0x12d) & 0x20) == 0) {
LAB_0801e5e8:
    if ((*(char *)(param_1 + 0xe) == '\x02') &&
       (cVar1 = sub_0801BF68(param_1,*(undefined4 *)(param_1 + 0x108)), cVar1 != '\0')) {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
      uVar4 = 2;
      goto LAB_0801e6fc;
    }
    if (((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 1) != 0) &&
       (cVar1 = sub_0801A900(param_1 + 0x4c,*(undefined4 *)(param_1 + 0x108),
                             *(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,1), cVar1 != '\0')) {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
      uVar4 = 3;
      goto LAB_0801e6fc;
    }
    if (((*(char *)(param_1 + 0xe) == '\x01') &&
        ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 0x20) == 0)) &&
       (cVar1 = sub_080182C0(param_1), cVar1 == '\0')) {
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 2;
    }
  }
  else {
    uVar3 = sub_0801A69C(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                         uVar7 >> 4 & 1,0x800,uVar2);
    if (((DAT_02022adf & 0x40) == 0) &&
       (((*(char *)(param_1 + 0x94) == '\0' || ((*(ushort *)(param_1 + 0x90) & 1) != 0)) &&
        ((*(byte *)(param_1 + 0x128) & 0x43) == 0)))) {
      uVar7 = sub_0801A3C8(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                           *(byte *)(param_1 + 10) >> 4 & 1,0x800,*(byte *)(param_1 + 0x128) & 0x43)
      ;
      if ((uVar7 & 0xff) == 0xf) {
        uVar3 = uVar3 & 0xff00;
      }
      if ((uVar7 << 0x10) >> 0x18 == 0xf) {
        uVar3 = uVar3 & 0xff;
      }
    }
    if (uVar3 == 0) goto LAB_0801e5e8;
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    puVar6 = (undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xc1) = *puVar6;
    *puVar6 = 0;
    puVar5 = (undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xc2) = *puVar5;
    *puVar5 = 0;
    puVar8 = (undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc3) = *puVar8;
    *puVar8 = 0;
    sub_08017520(param_1);
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *puVar6;
    *puVar6 = 0;
    *(undefined *)(param_1 + 0xc2) = *puVar5;
    *puVar5 = 0;
    *(undefined *)(param_1 + 0xc3) = *puVar8;
    *puVar8 = 0;
    *(ushort *)(param_1 + 0x110) = uVar3;
  }
  uVar4 = 1;
LAB_0801e6fc:
  return CONCAT44(in_lr,uVar4);
}

