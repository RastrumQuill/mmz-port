// sub_0807B2D8 at 0x0807B2D8 (thumb)

undefined4 sub_0807B2D8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080175BC(param_1);
        *(undefined *)(param_1 + 0x12) = 0x80;
        *(undefined4 *)(param_1 + 100) = 0;
        sub_08017700(param_1,0x4005);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar2 = FUN_080fe2f8(*(byte *)(param_1 + 0x12) - 0x80,0x15);
      sub_08007390(param_1 + 0x74,&DAT_08364024 + iVar2 * 0x30);
      if (*(char *)(param_1 + 0x12) != -1) {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      }
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12);
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12);
      *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0x12) * 0xc;
      iVar2 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 100) = iVar2;
      *(char *)(param_1 + 0x24) = (char)((iVar2 >> 8) << 1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar2 = *(int *)(param_1 + 0x60) + 0x30;
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar2;
      iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar2 + *(int *)(param_1 + 0x68));
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        iVar2 = *(int *)(param_1 + 0x58) + iVar2;
        *(int *)(param_1 + 0x58) = iVar2;
        if (*(int *)(param_1 + 0x5c) < 0) {
          iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + -0x30,iVar2 + *(int *)(param_1 + 0x68));
          iVar2 = iVar2 - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
          if (iVar2 < 0) {
            iVar2 = iVar2 + 3 >> 2;
          }
          iVar2 = *(int *)(param_1 + 0x5c) - iVar2;
        }
        else {
          iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + 0x30,iVar2 + *(int *)(param_1 + 0x68));
          iVar2 = iVar2 - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
          if (iVar2 < 0) {
            iVar2 = iVar2 + 3 >> 2;
          }
          iVar2 = *(int *)(param_1 + 0x5c) + iVar2;
        }
        *(int *)(param_1 + 0x5c) = iVar2;
        if (*(int *)(param_1 + 0x5c) < -0x200) {
          *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
        }
        if (0x200 < *(int *)(param_1 + 0x5c)) {
          *(undefined4 *)(param_1 + 0x5c) = 0x200;
        }
      }
      sub_080177F4(param_1);
      uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
      if (uVar3 < 0x2001) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08364024);
    sub_08017700(param_1,0x4004);
    *(undefined4 *)(param_1 + 0x68) = 0x600;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar2 + *(int *)(param_1 + 0x68));
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

