// sub_080570C0 at 0x080570C0 (thumb)

undefined4 sub_080570C0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xfc);
    sub_08001D30(&DAT_08c44488,(DAT_0202e0b4 - 0x300) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44494,(DAT_0202deb4 - 5) * 0x20 + 0x200);
    iVar4 = sub_08059768(param_1);
    uVar2 = *(ushort *)(&DAT_0885528c + iVar4 * 2);
    uVar5 = sub_08059A88(param_1);
    local_20 = *(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * 0xc00;
    local_1c = *(int *)(param_1 + 0x58) + -0x2800;
    local_18 = (uint)uVar2 *
               (int)*(short *)((int)&DAT_08128c10 + (uVar5 * 0x1000000 + 0x40000000 >> 0x17));
    if (local_18 < 0) {
      local_18 = local_18 + 0xff;
    }
    local_18 = local_18 >> 8;
    local_14 = (uint)uVar2 * (int)(short)(&DAT_08128c10)[uVar5 & 0xff];
    if (local_14 < 0) {
      local_14 = local_14 + 0xff;
    }
    local_14 = local_14 >> 8;
    uVar6 = sub_080C0944(param_1,&local_20,&local_18,0);
    *(undefined4 *)(param_1 + 0xd4) = uVar6;
    sub_0801CF00(param_1,0xa010);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xe) = 4;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

