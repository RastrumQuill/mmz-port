// sub_0809F0CC at 0x0809F0CC (thumb)

undefined4 sub_0809F0CC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar4 = DAT_0202f5c0;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        *(byte *)(param_1 + 0x13) =
             *(byte *)(param_1 + 0x13) + (char)((int)-(uint)*(byte *)(param_1 + 0x13) >> 4);
        *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x13);
        *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x13);
        sub_080177F4(param_1);
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
        return in_lr;
      }
      iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x5c) = iVar5;
      iVar4 = *(int *)(iVar4 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000);
      *(int *)(param_1 + 0x60) = iVar4;
      iVar5 = iVar5 >> 2;
      iVar4 = iVar4 >> 2;
      iVar4 = sub_080FE124(iVar5 * iVar5 + iVar4 * iVar4);
      uVar6 = (uint)(iVar4 << 0x10) >> 0xe;
      if (uVar6 != 0) {
        uVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar6);
        *(undefined4 *)(param_1 + 0x5c) = uVar3;
        uVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar6);
        *(undefined4 *)(param_1 + 0x60) = uVar3;
      }
      iVar5 = *(int *)(param_1 + 0x5c) * 0xc0 >> 8;
      *(int *)(param_1 + 100) = iVar5;
      iVar4 = *(int *)(param_1 + 0x60) * 0xc0 >> 8;
      *(int *)(param_1 + 0x68) = iVar4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      sub_080177F4(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if ((cVar2 == '\0') || (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
        *(undefined *)(param_1 + 0x12) = 0x1e;
        *(undefined *)(param_1 + 0x13) = 0xff;
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      else {
        if ((*(uint *)(param_1 + 0x8c) & 0x400100) == 0) {
          return in_lr;
        }
        *(undefined *)(param_1 + 0x12) = 0x1e;
        *(undefined *)(param_1 + 0x13) = 0xff;
        *(uint *)(param_1 + 0x8c) = 0;
      }
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      goto LAB_0809f1f4;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa601);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = 0xa0;
LAB_0809f1f4:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

