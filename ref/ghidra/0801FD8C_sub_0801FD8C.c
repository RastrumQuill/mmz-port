// sub_0801FD8C at 0x0801FD8C (thumb)

undefined4 sub_0801FD8C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xbe) < 2) {
    bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    if ((bVar1 & 1) != 0) {
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
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - iVar5;
      piVar6 = (int *)(param_1 + 0x108);
      cVar2 = sub_0801A900(param_1 + 0x4c,*piVar6,*(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,0);
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xf) = 2;
        iVar5 = *piVar6;
        *(uint *)(param_1 + 0x50) =
             *(int *)(param_1 + 0x50) +
             (uint)*(ushort *)(iVar5 + 4) +
             (int)(((uint)*(ushort *)(iVar5 + 4) - (uint)*(ushort *)(iVar5 + 6)) + 0x100) / 2;
        sub_08018BE8(param_1,0x10);
        sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*piVar6,*(byte *)(param_1 + 10) >> 4 & 1,0x800,1)
        ;
      }
      if ((*(char *)(param_1 + 0x71) != '\x02') && (*(char *)(param_1 + 0x71) != '\x05')) {
        return in_lr;
      }
      if ('\x01' < *(char *)(param_1 + 0x72)) {
        return in_lr;
      }
      sub_08001EAC(0x1e);
      return in_lr;
    }
    if ((bVar1 & 2) != 0) {
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0x102;
      sub_08018C20(param_1,0x12,5 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
      sub_080200A0(param_1);
      return in_lr;
    }
  }
  if ((*(byte *)(param_1 + 0xbe) < 3) && (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_08018C20(param_1,*(undefined *)(param_1 + 0x115),(int)*(char *)(param_1 + 0x71),2);
  }
  return in_lr;
}

