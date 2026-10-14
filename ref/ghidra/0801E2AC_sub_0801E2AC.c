// sub_0801E2AC at 0x0801E2AC (thumb)

undefined8 sub_0801E2AC(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar3 = *(ushort *)(param_1 + 0x90) & 0x80;
  if ((*(ushort *)(param_1 + 0x90) & 0x80) != 0) {
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
    goto LAB_0801e41a;
  }
  *(char *)(param_1 + 0x45) = (char)uVar3;
  uVar6 = *(byte *)(param_1 + 10) & 0xdf;
  *(char *)(param_1 + 10) = (char)uVar6;
  uVar4 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),uVar6 >> 4 & 1
                       ,0x800,1);
  *(ushort *)(param_1 + 0x110) = uVar4 & 0xff;
  if ((uVar4 & 0xf) == 0) {
LAB_0801e368:
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
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
    if ((*(char *)(param_1 + 0x11) == '\0') || (*(byte *)(param_1 + 0xbe) < 3)) {
      if ((*(byte *)(param_1 + 0x12d) & 0x20) != 0) goto LAB_0801e368;
      cVar2 = sub_08016F08(param_1);
      if (cVar2 != '\0') {
        bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
        if ((bVar1 & 0xc) == 0) {
          *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
          *(ushort *)(param_1 + 0xe) = bVar1 & 0xc;
        }
        else {
          *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
          *(undefined2 *)(param_1 + 0xe) = 1;
        }
        *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
        *(undefined *)(param_1 + 0xbe) = 0;
        *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
        *(undefined *)(param_1 + 0xbf) = 0;
        *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
        *(undefined *)(param_1 + 0xc0) = 0;
      }
    }
    uVar5 = 0;
  }
LAB_0801e41a:
  return CONCAT44(in_lr,uVar5);
}

