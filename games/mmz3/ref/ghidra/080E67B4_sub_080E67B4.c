// sub_080E67B4 at 0x080E67B4 (thumb)

undefined4 sub_080E67B4(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(iVar4 + 0x64ac);
  sub_080177F4(param_1);
  if (*(char *)(iVar4 + 0xdd0) == '\0') {
    bVar2 = *(byte *)(param_1 + 0xd);
    if (bVar2 == 1) {
      bVar2 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if (bVar2 < *(byte *)(param_1 + 0x12)) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar2 < 2) {
      if (bVar2 != 0) {
        return in_lr;
      }
      if ((uint)*(byte *)(iVar4 + 3) != *(byte *)(param_1 + 0x11) + 4) {
        return in_lr;
      }
      *(int *)(iVar4 + 0xdec) = param_1;
      if (*(char *)(param_1 + 0x11) == '\0') {
        bVar2 = *(byte *)(iVar5 + 0xcb);
        pbVar6 = (byte *)(param_1 + 0x79);
        *pbVar6 = (bVar2 & 1) + ((bVar2 & 2) >> 1) + ((bVar2 & 4) >> 2) + ((bVar2 & 8) >> 3);
        sub_080F53AC(iVar4,0xff);
        uVar7 = 0;
        if (*pbVar6 != 0) {
          do {
            uVar1 = sub_080F53AC(iVar4,uVar7 & 0xff);
            sub_080E64F0(iVar4,param_1,uVar1,uVar7 & 0xff);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *pbVar6);
        }
      }
      else if (*(char *)(param_1 + 0x11) == '\x01') {
        bVar2 = *(byte *)(iVar5 + 0xcc);
        pbVar6 = (byte *)(param_1 + 0x79);
        *pbVar6 = (bVar2 & 1) + ((bVar2 & 2) >> 1) + ((bVar2 & 4) >> 2) + ((bVar2 & 0x10) >> 4) +
                  ((bVar2 & 0x20) >> 5) + ((bVar2 & 8) >> 3);
        sub_080F5440(iVar4,0xff);
        uVar7 = 0;
        if (*pbVar6 != 0) {
          do {
            uVar1 = sub_080F5440(iVar4,uVar7 & 0xff);
            sub_080E64F0(iVar4,param_1,uVar1,uVar7 & 0xff);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *pbVar6);
        }
      }
      else {
        bVar2 = *(byte *)(iVar5 + 0xcd);
        pbVar6 = (byte *)(param_1 + 0x79);
        *pbVar6 = ((bVar2 & 1) + ((bVar2 & 2) >> 1) + ((bVar2 & 4) >> 2) + ((bVar2 & 8) >> 3) +
                   ((bVar2 & 0x10) >> 4) + ((bVar2 & 0x20) >> 5) + ((bVar2 & 0x40) >> 6)) -
                  ((char)bVar2 >> 7);
        sub_080F5508(iVar4,0xff);
        uVar7 = 0;
        if (*pbVar6 != 0) {
          do {
            uVar1 = sub_080F5508(iVar4,uVar7 & 0xff);
            sub_080E64F0(iVar4,param_1,uVar1,uVar7 & 0xff);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *pbVar6);
        }
      }
      if ((byte)(&DAT_0836e87d)[*(byte *)(param_1 + 0x10)] < *(byte *)(param_1 + 0x79)) {
        uVar1 = 0xc;
      }
      else {
        uVar1 = 8;
      }
      *(undefined *)(param_1 + 0x12) = uVar1;
      *(undefined *)(param_1 + 0x13) = 0;
      cVar3 = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar2 == 2) {
      if (*(char *)(iVar4 + 0xdd1) == '\0') {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_08017700(param_1,*(undefined2 *)(&DAT_0836e850 + (uint)*(byte *)(iVar5 + 0xc3) * 2));
        sub_08017BCC(param_1,5);
      }
      else if (*(char *)(param_1 + 0x11) == '\x01') {
        sub_08017700(param_1,*(undefined2 *)(&DAT_0836e858 + (uint)*(byte *)(iVar5 + 0xc4) * 2));
        sub_08017BCC(param_1,(&DAT_0836e864)[*(byte *)(iVar5 + 0xc4)]);
      }
      else {
        sub_08017700(param_1,*(undefined2 *)(&DAT_0836e86a + (uint)*(byte *)(iVar5 + 0xc5) * 2));
        sub_08017BCC(param_1,5);
      }
      sub_080177F4(param_1);
      cVar3 = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      if (bVar2 != 3) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      *(undefined *)(iVar4 + 0xdd1) = 0;
      cVar3 = '\0';
    }
    *(char *)(param_1 + 0xd) = cVar3;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

