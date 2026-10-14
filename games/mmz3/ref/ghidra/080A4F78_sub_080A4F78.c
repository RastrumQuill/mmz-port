// sub_080A4F78 at 0x080A4F78 (thumb)

undefined4 sub_080A4F78(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xb4) = 0x4000;
        *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_1 + 0x12) * 0x100;
        iVar5 = (uint)*(byte *)(param_1 + 0x12) * -0x100;
        iVar6 = iVar5 + 0x20000;
        if (iVar6 < 0) {
          iVar6 = iVar5 + 0x2003f;
        }
        iVar5 = sub_080FE124(iVar6 >> 6);
        *(uint *)(param_1 + 0x5c) = (uint)(iVar5 << 0x10) >> 9;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x5c);
      iVar5 = *(int *)(param_1 + 0x5c) + -0x80;
      *(int *)(param_1 + 0x5c) = iVar5;
      if (iVar5 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(uint *)(iVar7 + 0xc0) = *(uint *)(iVar7 + 0xc0) & 0xffffffeb;
      }
      *(char *)(param_1 + 0x24) = (char)((uint)*(undefined4 *)(param_1 + 0x60) >> 8);
      sub_080A4A24(param_1);
      *(undefined *)(param_1 + 0x25) = 0x17;
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08368280);
    if ((*(uint *)(iVar7 + 0xc0) & 0x10) == 0) {
      iVar5 = *(int *)(param_1 + 0x58) - *(int *)(iVar7 + 0x58);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 7;
      }
      uVar3 = sub_080FE124(iVar5 >> 3);
      *(uint *)(param_1 + 0x60) = (uVar3 & 0xffff) * -0x10;
      *(undefined4 *)(param_1 + 0x68) = 0x10;
      *(char *)(param_1 + 0x13) = (char)(uVar3 & 0xffff);
      iVar5 = *(int *)(iVar7 + 0xb8);
      iVar7 = iVar5 + -0x4c00;
      *(int *)(param_1 + 0x5c) = iVar7;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar7 = iVar5 + 0x4c00;
      }
      iVar7 = iVar7 - *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x5c) = iVar7;
      uVar3 = (uint)*(byte *)(param_1 + 0x13);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x58) - *(int *)(iVar7 + 0x58);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 7;
      }
      uVar3 = sub_080FE124(iVar5 >> 3);
      uVar3 = uVar3 & 0xffff;
      *(uint *)(param_1 + 0x60) = uVar3 * -0x10;
      *(undefined4 *)(param_1 + 0x68) = 0x10;
      *(char *)(param_1 + 0x13) = (char)uVar3;
      iVar5 = *(int *)(iVar7 + 0x54);
      iVar7 = iVar5 + -0x1800;
      *(int *)(param_1 + 0x5c) = iVar7;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar7 = iVar5 + 0x1800;
      }
      iVar7 = iVar7 - *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x5c) = iVar7;
    }
    uVar4 = FUN_080fe2f8(iVar7,uVar3);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + '\x10';
  *(char *)(param_1 + 0x12) = cVar2;
  *(char *)(param_1 + 0x24) = cVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  sub_080177F4(param_1);
  return in_lr;
}

