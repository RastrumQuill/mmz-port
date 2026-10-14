// sub_08017660 at 0x08017660 (thumb)

undefined8 sub_08017660(int param_1)

{
  byte bVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x11f) = 0;
  *(undefined *)(param_1 + 0x120) = 0;
  cVar7 = *(char *)(param_1 + 0xc1);
  uVar5 = *(undefined *)(param_1 + 0xc2);
  bVar1 = *(byte *)(param_1 + 0xc3);
  if (cVar7 == '\x03') {
    if (bVar1 == 1) {
      psVar2 = (short *)(param_1 + 0xbc);
      if (*psVar2 == 0x100) {
        uVar8 = (uint)*(byte *)(param_1 + 0x121);
      }
      else if (*(char *)psVar2 == '\x02') {
        uVar8 = (uint)*(byte *)(param_1 + 0x121);
      }
      else {
        uVar8 = (uint)*(char *)(param_1 + 0x72);
      }
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 3;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 1;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 1;
      uVar6 = (uint)*(byte *)(param_1 + 0xd);
      uVar4 = (uint)*(byte *)(param_1 + 0xe);
      cVar7 = (char)uVar8;
      if ((uVar6 == 0) && (uVar4 == 1)) {
        if (*psVar2 == 0) {
          sub_08018BE8(param_1,0x18);
        }
        else {
          sub_08018C20(param_1,0x18,0,1);
        }
        *(char *)(param_1 + 0x121) = cVar7;
      }
      else if (uVar6 == 2) {
        sub_08018BE8(param_1,0x20);
        *(char *)(param_1 + 0x121) = cVar7;
      }
      else {
        if (uVar6 == 0) {
          if (uVar4 == 2) {
            *(bool *)(param_1 + 0x120) = 0x3b < *(byte *)(param_1 + 0x19a);
            *(char *)(param_1 + 0x121) = cVar7 + '\x0e';
          }
        }
        else {
          uVar4 = uVar6 + 2;
          if (uVar6 == 1) {
            uVar5 = 0;
            if (*(byte *)(param_1 + 0x19b) < 100) {
              uVar5 = 0xff;
            }
            *(undefined *)(param_1 + 0x120) = uVar5;
          }
        }
        sub_08018C20(param_1,(&DAT_082a80fa)[uVar4],0,uVar8);
      }
      uVar3 = 3;
      goto LAB_08017814;
    }
    if (1 < bVar1) {
      if (*(char *)(param_1 + 0xbc) == '\0') {
        cVar7 = *(char *)(param_1 + 0xbd);
      }
      else {
        cVar7 = *(char *)(param_1 + 0xbc) + '\x02';
      }
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 2;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(char *)(param_1 + 0xc3) = *(char *)(param_1 + 0xc0);
      *(char *)(param_1 + 0xc0) = cVar7;
      uVar3 = 2;
      goto LAB_08017814;
    }
  }
  else if (cVar7 == '\x02') {
    *(char *)(param_1 + 0xc1) = *(char *)(param_1 + 0xbe);
    *(char *)(param_1 + 0xbe) = '\x02';
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = uVar5;
    *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc0);
    *(byte *)(param_1 + 0xc0) = bVar1;
    uVar3 = 2;
    goto LAB_08017814;
  }
  uVar3 = 1;
LAB_08017814:
  return CONCAT44(in_lr,uVar3);
}

