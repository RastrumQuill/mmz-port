// sub_0801E0F8 at 0x0801E0F8 (thumb)

undefined8 sub_0801E0F8(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar3 = *(ushort *)(param_1 + 0x90) & 0x80;
  if ((*(ushort *)(param_1 + 0x90) & 0x80) == 0) {
    *(char *)(param_1 + 0x45) = (char)uVar3;
    uVar7 = *(byte *)(param_1 + 10) & 0xdf;
    *(char *)(param_1 + 10) = (char)uVar7;
    uVar4 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                         uVar7 >> 4 & 1,0x800,1);
    *(ushort *)(param_1 + 0x110) = uVar4 & 0xff;
    if ((uVar4 & 0xf) == 0) {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      if ((*(byte *)(param_1 + 0x12d) & 0x20) == 0) {
        pbVar6 = (byte *)(param_1 + 0xbe);
        if (((*pbVar6 < 2) || (*(char *)(param_1 + 0x11) != '\x03')) &&
           (cVar2 = sub_08016EC0(param_1), cVar2 != '\0')) {
          *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
          *(undefined2 *)(param_1 + 0xe) = 2;
          *(byte *)(param_1 + 0xc1) = *pbVar6;
          *pbVar6 = 0;
          *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
          *(undefined *)(param_1 + 0xbf) = 0;
          *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
          *(undefined *)(param_1 + 0xc0) = 0;
        }
        else {
          bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
          uVar3 = bVar1 & 0xc;
          if ((bVar1 & 0xc) == 0) {
            *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
            *(char *)(param_1 + 0xd) = (char)uVar3;
            *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
            *(ushort *)(param_1 + 0xe) = uVar3;
            *(byte *)(param_1 + 0xc1) = *pbVar6;
            *pbVar6 = 0;
            *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
            *(undefined *)(param_1 + 0xbf) = 0;
            *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
            *(undefined *)(param_1 + 0xc0) = 0;
          }
        }
        uVar5 = 0;
        goto LAB_0801e29e;
      }
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 1;
    }
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = uVar3;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    uVar5 = 1;
  }
  else {
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
    uVar5 = 5;
  }
LAB_0801e29e:
  return CONCAT44(in_lr,uVar5);
}

