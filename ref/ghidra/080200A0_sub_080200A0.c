// sub_080200A0 at 0x080200A0 (thumb)

undefined4 sub_080200A0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xbe) < 2) {
    bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    if ((bVar1 & 2) != 0) {
      if (*(byte *)(param_1 + 0x11e) < 100) {
        uVar4 = (uint)*(byte *)(param_1 + 0x11e);
        iVar5 = 0x200;
        if (((*(byte *)(param_1 + 0x17a) & 4) == 0) ||
           (iVar5 = 0x280, (*(byte *)(param_1 + 0x17a) & 4) == 0)) {
          iVar3 = uVar4 << 9;
        }
        else {
          iVar3 = uVar4 * 0x280;
        }
        iVar3 = sub_080C8AD0(iVar3,100);
        iVar5 = iVar5 - iVar3;
      }
      else {
        iVar5 = 0;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
      cVar2 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                           *(byte *)(param_1 + 10) >> 4 & 1,1,1);
      if (cVar2 == '\0') {
        cVar2 = sub_0801A900(param_1 + 0x4c,*(undefined4 *)(param_1 + 0x108),
                             *(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,0);
        if (cVar2 == '\0') {
          *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xd) = 1;
          *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
          *(undefined2 *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
          *(undefined *)(param_1 + 0xbe) = 0;
          *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
          *(undefined *)(param_1 + 0xbf) = 0;
          *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
          *(undefined *)(param_1 + 0xc0) = 0;
        }
      }
      else {
        *(undefined *)(param_1 + 0xf) = 2;
        sub_08018BE8(param_1,0x13);
      }
      if ((*(char *)(param_1 + 0x71) != '\x01') && (*(char *)(param_1 + 0x71) != '\x04')) {
        return in_lr;
      }
      if ('\x01' < *(char *)(param_1 + 0x72)) {
        return in_lr;
      }
      sub_08001EAC(0x1e);
      return in_lr;
    }
    if ((bVar1 & 1) != 0) {
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0x101;
      sub_08018C20(param_1,0xf,5 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
      sub_0801FD8C(param_1);
      return in_lr;
    }
  }
  if ((*(byte *)(param_1 + 0xbe) < 3) && (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_08018C20(param_1,*(undefined *)(param_1 + 0x115),(int)*(char *)(param_1 + 0x71),2);
  }
  return in_lr;
}

